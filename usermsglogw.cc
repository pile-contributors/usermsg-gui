/**
 * @file usermsglogw.cc
 * @brief Definitions for UserMsgLogW class.
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#include "usermsglogw.h"
#include "usermsggui-private.h"
#include <usermsg/usermsg.h>

/**
 * @class UserMsgLogW
 *
 * .
 */

/* ------------------------------------------------------------------------- */
/**
 * .
 */
UserMsgLogW::UserMsgLogW (QWidget * parent) :
    QTextEdit (parent)
{
    USERMSGGUI_TRACE_ENTRY;

    USERMSGGUI_TRACE_EXIT;
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
/**
 * .
 */
UserMsgLogW::~UserMsgLogW()
{
    USERMSGGUI_TRACE_ENTRY;

    USERMSGGUI_TRACE_EXIT;
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
/**
 * .
 */
void UserMsgLogW::showMessage (const UserMsg & um)
{
    USERMSGGUI_TRACE_ENTRY;

    int i_max = um.count ();
    for (int i = 0; i < i_max; ++i) {
        const UserMsgEntry & e = um.at (i);
        if (e.isEnabled()) {
            append (e.moment ().toString ("hh:mm:ss: "));
            append (e.message ());
        }
    }

    USERMSGGUI_TRACE_EXIT;
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
/**
 * .
 */
void UserMsgLogW::clearMessages ()
{
    USERMSGGUI_TRACE_ENTRY;



    USERMSGGUI_TRACE_EXIT;
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
/**
 * .
 */
void UserMsgLogW::reloadMessages ()
{
    USERMSGGUI_TRACE_ENTRY;



    USERMSGGUI_TRACE_EXIT;
}
/* ========================================================================= */

