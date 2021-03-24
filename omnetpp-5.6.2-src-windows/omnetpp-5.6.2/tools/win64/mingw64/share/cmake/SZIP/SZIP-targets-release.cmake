#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "szip" for configuration "Release"
set_property(TARGET szip APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(szip PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libszip.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "ws2_32;wsock32"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libszip-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS szip )
list(APPEND _IMPORT_CHECK_FILES_FOR_szip "${_IMPORT_PREFIX}/lib/libszip.dll.a" "${_IMPORT_PREFIX}/bin/libszip-0.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
