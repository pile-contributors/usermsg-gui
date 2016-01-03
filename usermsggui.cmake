
# enable/disable cmake debug messages related to this pile
set (USERMSGGUI_DEBUG_MSG ON)

# make sure support code is present; no harm
# in including it twice; the user, however, should have used
# pileInclude() from pile_support.cmake module.
include(pile_support)

# initialize this module
macro    (usermsgguiInit
          usermsggui_use_mode)

    # default name
    if (NOT USERMSGGUI_INIT_NAME)
        set(USERMSGGUI_INIT_NAME "UserMsgGui")
    endif ()

    # compose the list of headers and sources
    set(USERMSGGUI_HEADERS
        "usermsglogw.h"
        "usermsggui.h")
    set(USERMSGGUI_SOURCES
        "usermsglogw.cc"
        "usermsggui.cc")
    set(USERMSGGUI_QT_MODS
        "Core"
        "Widgets")

    pileSetSources(
        "${USERMSGGUI_INIT_NAME}"
        "${USERMSGGUI_HEADERS}"
        "${USERMSGGUI_SOURCES}")

    pileSetCommon(
        "${USERMSGGUI_INIT_NAME}"
        "0;0;1;d"
        "ON"
        "${usermsggui_use_mode}"
        "usermsg"
        "category1"
        "tag1;tag2")

endmacro ()
