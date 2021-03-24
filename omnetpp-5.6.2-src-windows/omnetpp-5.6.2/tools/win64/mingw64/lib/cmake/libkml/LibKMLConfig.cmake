# Compute paths
get_filename_component(LIBKML_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

set(LIBKML_INCLUDE_DIRS "${LIBKML_CMAKE_DIR}/../../../include/kml")

if(NOT TARGET foo AND NOT LIBKML_BINARY_DIR)
  include("${LIBKML_CMAKE_DIR}/LibKMLTargets.cmake")
endif()

set(LIBKML_LIBRARIES)

foreach(targ kmlbase;kmldom;kmlxsd;kmlengine;kmlconvenience;kmlregionator)
  get_target_property(LIB_LIB_FILENAME ${targ} IMPORTED_LOCATION_RELEASE)
  get_target_property(LIB_LINK_FILENAME ${targ} IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE)
  string(REGEX MATCH "^kml" matched ${LIB_LINK_FILENAME})
  if(NOT matched)
    list(APPEND LIBKML_LIBRARIES ${LIB_LINK_FILENAME})
  endif()
  list(APPEND LIBKML_LIBRARIES ${LIB_LIB_FILENAME})
endforeach()

set(LIBKML_FOUND TRUE)
