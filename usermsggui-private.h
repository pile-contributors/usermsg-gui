/**
 * @file usermsggui-private.h
 * @brief Declarations for UserMsgGui class
 * @author 
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_USERMSGGUI_PRIVATE_H_INCLUDE
#define GUARD_USERMSGGUI_PRIVATE_H_INCLUDE

#include <usermsg-gui/usermsggui-config.h>

#if 0
#    define USERMSGGUI_DEBUGM printf
#else
#    define USERMSGGUI_DEBUGM black_hole
#endif

#if 0
#    define USERMSGGUI_TRACE_ENTRY printf("USERMSGGUI ENTRY %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define USERMSGGUI_TRACE_ENTRY
#endif

#if 0
#    define USERMSGGUI_TRACE_EXIT printf("USERMSGGUI EXIT %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define USERMSGGUI_TRACE_EXIT
#endif


static inline void black_hole (...)
{}

#endif // GUARD_USERMSGGUI_PRIVATE_H_INCLUDE
