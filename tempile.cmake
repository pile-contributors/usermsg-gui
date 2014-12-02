
# enable/disable cmake debug messages related to this pile
set (USERMSGGUI_DEBUG_MSG ON)

# make sure support code is present; no harm
# in including it twice; the user, however, should have used
# pileInclude() from pile_support.cmake module.
include(pile_support)

# initialize this module
macro    (usermsgguiInit
          ref_cnt_use_mode)

    # default name
    if (NOT USER_MSG_GUI_INIT_NAME)
        set(USER_MSG_GUI_INIT_NAME "UserMsgGui")
    endif ()

    # compose the list of headers and sources
    set(USERMSGGUI_HEADERS
        "usermsggui.h")
    set(USERMSGGUI_SOURCES
        "usermsggui.cc")

    pileSetSources(
        "${USER_MSG_GUI_INIT_NAME}"
        "${USERMSGGUI_HEADERS}"
        "${USERMSGGUI_SOURCES}")

    pileSetCommon(
        "${USER_MSG_GUI_INIT_NAME}"
        "0;0;1;d"
        "ON"
        "${ref_cnt_use_mode}"
        ""
        "category1"
        "tag1;tag2")

endmacro ()
