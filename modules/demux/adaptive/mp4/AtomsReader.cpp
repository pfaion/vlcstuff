/*
 * AtomsReader.cpp
 *****************************************************************************
 * Copyright (C) 2014 - VideoLAN and VLC authors
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#include "AtomsReader.hpp"
#include <new>

using namespace adaptive::mp4;

AtomsReader::AtomsReader(vlc_object_t *object_)
{
    object = object_;
    rootbox = NULL;
}

AtomsReader::~AtomsReader()
{
    clean();
}

void AtomsReader::clean()
{
    while(rootbox && rootbox->p_first)
    {
        MP4_Box_t *p_next = rootbox->p_first->p_next;
        MP4_BoxFree( rootbox->p_first );
        rootbox->p_first = p_next;
    }
    delete rootbox;
    rootbox = NULL;
}

bool AtomsReader::parseBlock(block_t *p_block)
{
    if(rootbox)
        clean();

    stream_t *stream = stream_MemoryNew( object, p_block->p_buffer, p_block->i_buffer, true);
    if (stream)
    {
        rootbox = new (std::nothrow) MP4_Box_t;
        if(!rootbox)
        {
            stream_Delete(stream);
            return false;
        }
        memset(rootbox, 0, sizeof(*rootbox));
        rootbox->i_type = ATOM_root;
        rootbox->i_size = p_block->i_buffer;
        if ( MP4_ReadBoxContainerChildren( stream, rootbox, NULL ) == 1 )
        {
#ifndef NDEBUG
            MP4_BoxDumpStructure(stream, rootbox);
#endif
        }
        stream_Delete(stream);
    }

    return true;
}
