
add_library(Qt5::MultiPageWidgetPlugin MODULE IMPORTED)

_populate_Designer_plugin_properties(MultiPageWidgetPlugin RELEASE "designer/containerextension.dll")
_populate_Designer_plugin_properties(MultiPageWidgetPlugin DEBUG "designer/containerextensiond.dll")

list(APPEND Qt5Designer_PLUGINS Qt5::MultiPageWidgetPlugin)
