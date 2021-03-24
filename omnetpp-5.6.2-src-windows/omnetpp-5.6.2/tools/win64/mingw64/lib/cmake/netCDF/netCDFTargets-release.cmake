#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "netcdf" for configuration "RELEASE"
set_property(TARGET netcdf APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(netcdf PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libnetcdf.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "C:/building/msys64/mingw64/lib/libhdf5_hl.dll.a;C:/building/msys64/mingw64/lib/libhdf5.dll.a;C:/building/msys64/mingw64/lib/libz.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libnetcdf.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS netcdf )
list(APPEND _IMPORT_CHECK_FILES_FOR_netcdf "${_IMPORT_PREFIX}/lib/libnetcdf.dll.a" "${_IMPORT_PREFIX}/bin/libnetcdf.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
