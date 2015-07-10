#ifndef OSMIUM_IO_DETAIL_PBF_HPP
#define OSMIUM_IO_DETAIL_PBF_HPP

/*

This file is part of Osmium (http://osmcode.org/libosmium).

Copyright 2013-2015 Jochen Topf <jochen@topf.org> and others (see README).

Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

*/

#include <string>

// needed for htonl and ntohl
#ifndef _WIN32
# include <netinet/in.h>
#else
# include <winsock2.h>
#endif

#include <osmium/io/error.hpp>

namespace osmium {

    /**
     * Exception thrown when there was a problem with parsing the PBF format of
     * a file.
     */
    struct pbf_error : public io_error {

        pbf_error(const std::string& what) :
            io_error(std::string("PBF error: ") + what) {
        }

        pbf_error(const char* what) :
            io_error(std::string("PBF error: ") + what) {
        }

    }; // struct pbf_error

} // namespace osmium

#endif // OSMIUM_IO_DETAIL_PBF_HPP
