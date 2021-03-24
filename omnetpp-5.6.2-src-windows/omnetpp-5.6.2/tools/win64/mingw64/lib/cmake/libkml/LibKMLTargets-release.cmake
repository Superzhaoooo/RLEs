#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kmlbase" for configuration "Release"
set_property(TARGET kmlbase APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmlbase PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmlbase.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "C:/building/msys64/mingw64/lib/libexpat.dll.a;C:/building/msys64/mingw64/lib/libz.dll.a;C:/building/msys64/mingw64/lib/libminizip.dll.a;C:/building/msys64/mingw64/lib/liburiparser.dll.a;C:/building/msys64/mingw64/lib/libexpat.dll.a"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmlbase.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlbase )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlbase "/mingw64/lib/libkmlbase.dll.a" "/mingw64/bin/libkmlbase.dll" )

# Import target "kmldom" for configuration "Release"
set_property(TARGET kmldom APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmldom PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmldom.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "kmlbase"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmldom.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmldom )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmldom "/mingw64/lib/libkmldom.dll.a" "/mingw64/bin/libkmldom.dll" )

# Import target "kmlxsd" for configuration "Release"
set_property(TARGET kmlxsd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmlxsd PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmlxsd.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "kmlbase"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmlxsd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlxsd )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlxsd "/mingw64/lib/libkmlxsd.dll.a" "/mingw64/bin/libkmlxsd.dll" )

# Import target "kmlengine" for configuration "Release"
set_property(TARGET kmlengine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmlengine PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmlengine.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "kmlbase;kmldom"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmlengine.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlengine )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlengine "/mingw64/lib/libkmlengine.dll.a" "/mingw64/bin/libkmlengine.dll" )

# Import target "kmlconvenience" for configuration "Release"
set_property(TARGET kmlconvenience APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmlconvenience PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmlconvenience.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "kmlengine;kmldom;kmlbase"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmlconvenience.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlconvenience )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlconvenience "/mingw64/lib/libkmlconvenience.dll.a" "/mingw64/bin/libkmlconvenience.dll" )

# Import target "kmlregionator" for configuration "Release"
set_property(TARGET kmlregionator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kmlregionator PROPERTIES
  IMPORTED_IMPLIB_RELEASE "/mingw64/lib/libkmlregionator.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "kmlbase;kmldom;kmlengine;kmlconvenience"
  IMPORTED_LOCATION_RELEASE "/mingw64/bin/libkmlregionator.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlregionator )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlregionator "/mingw64/lib/libkmlregionator.dll.a" "/mingw64/bin/libkmlregionator.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
