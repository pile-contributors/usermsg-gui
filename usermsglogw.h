/**
 * @file usermsglogw.h
 * @brief Declarations for UserMsgLogW class
 * @author 
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_USERMSGLOGW_H_INCLUDE
#define GUARD_USERMSGLOGW_H_INCLUDE

#include <usermsg-gui/usermsggui-config.h>
#include <QtWidgets/QTextEdit>

class UserMsg;

//! A richtext based widget for showing user messages.
class USERMSGGUI_EXPORT UserMsgLogW : public QTextEdit {
    Q_OBJECT

public:

    //! Default constructor.
    UserMsgLogW (QWidget * parent = NULL);

    //! Destructor.
    virtual ~UserMsgLogW();

public slots:

    //! A message should be shown.
    void
    showMessage (
             const UserMsg & um);

    //! Clear all cached messages.
    void
    clearMessages ();

    //! Reload all cached messages.
    void
    reloadMessages ();


};

#endif // GUARD_USERMSGLOGW_H_INCLUDE
