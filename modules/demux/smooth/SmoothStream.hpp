/*
 * SmoothStream.hpp
 *****************************************************************************
 * Copyright (C) 2015 - VideoLAN and VLC authors
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
#ifndef SMOOTHSTREAM_HPP
#define SMOOTHSTREAM_HPP

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "../adaptive/Streams.hpp"

namespace smooth
{
    using namespace adaptive;

    class SmoothStream : public AbstractStream
    {
        public:
            SmoothStream(demux_t *, const StreamFormat &);

        protected:
            virtual AbstractDemuxer * createDemux(const StreamFormat &); /* impl */
            virtual block_t *checkBlock(block_t *, bool) /* impl */;
    };

    class SmoothStreamFactory : public AbstractStreamFactory
    {
        public:
            virtual AbstractStream *create(demux_t*, const StreamFormat &,
                                   SegmentTracker *, HTTPConnectionManager *) const;
    };

}

#endif // SMOOTHSTREAM_HPP
