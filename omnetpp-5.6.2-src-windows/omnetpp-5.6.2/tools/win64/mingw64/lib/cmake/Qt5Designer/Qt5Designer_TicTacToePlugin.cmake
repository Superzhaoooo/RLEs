
add_library(Qt5::TicTacToePlugin MODULE IMPORTED)

_populate_Designer_plugin_properties(TicTacToePlugin RELEASE "designer/taskmenuextension.dll")
_populate_Designer_plugin_properties(TicTacToePlugin DEBUG "designer/taskmenuextensiond.dll")

list(APPEND Qt5Designer_PLUGINS Qt5::TicTacToePlugin)
