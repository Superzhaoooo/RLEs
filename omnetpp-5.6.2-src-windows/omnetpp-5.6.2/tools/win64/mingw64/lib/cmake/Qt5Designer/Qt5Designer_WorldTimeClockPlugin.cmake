
add_library(Qt5::WorldTimeClockPlugin MODULE IMPORTED)

_populate_Designer_plugin_properties(WorldTimeClockPlugin RELEASE "designer/worldtimeclockplugin.dll")
_populate_Designer_plugin_properties(WorldTimeClockPlugin DEBUG "designer/worldtimeclockplugind.dll")

list(APPEND Qt5Designer_PLUGINS Qt5::WorldTimeClockPlugin)
