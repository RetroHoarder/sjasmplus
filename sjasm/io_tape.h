/*

SjASMPlus Z80 Cross Compiler

This is modified sources of SjASM by Aprisobal - aprisobal@tut.by

Copyright (c) 2006 Sjoerd Mastijn

This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the
use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it freely,
subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim
that you wrote the original software. If you use this software in a product,
an acknowledgment in the product documentation would be appreciated but is
not required.

2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

// io_tape.h

#ifndef __IO_TAPE
#define __IO_TAPE

enum ETapeHeaderType { BASIC = 0, NUMBERS, CHARS, CODE, HEADLESS = 255 };

int TAP_SaveEmpty(const std::filesystem::path & fname);
int TAP_SaveBlock(const std::filesystem::path & fname, unsigned char flag, const char *ftapname, int start, int length, int param2, int param3);
int TAP_SaveSnapshot(const std::filesystem::path & fname, unsigned short start);

#endif

//eof io_tape.h
