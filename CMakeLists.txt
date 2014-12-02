if (NOT USERMSGGUI_BUILD_MODE)
    set (USERMSGGUI_BUILD_MODE STATIC)
endif ()

include(pile_support)
pileInclude (UserMsgGui)
usermsgguiInit(${USERMSGGUI_BUILD_MODE})
