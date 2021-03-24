#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hdf5-static" for configuration "Release"
set_property(TARGET hdf5-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5-static "${_IMPORT_PREFIX}/lib/libhdf5.a" )

# Import target "hdf5-shared" for configuration "Release"
set_property(TARGET hdf5-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5-shared "${_IMPORT_PREFIX}/lib/libhdf5.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5-0.dll" )

# Import target "hdf5_tools-static" for configuration "Release"
set_property(TARGET hdf5_tools-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_tools-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_tools.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_tools-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_tools-static "${_IMPORT_PREFIX}/lib/libhdf5_tools.a" )

# Import target "hdf5_tools-shared" for configuration "Release"
set_property(TARGET hdf5_tools-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_tools-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_tools.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_tools-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_tools-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_tools-shared "${_IMPORT_PREFIX}/lib/libhdf5_tools.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_tools-0.dll" )

# Import target "hdf5_hl-static" for configuration "Release"
set_property(TARGET hdf5_hl-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl-static "${_IMPORT_PREFIX}/lib/libhdf5_hl.a" )

# Import target "hdf5_hl-shared" for configuration "Release"
set_property(TARGET hdf5_hl-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_hl-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl-shared "${_IMPORT_PREFIX}/lib/libhdf5_hl.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_hl-0.dll" )

# Import target "hdf5_f90cstub-static" for configuration "Release"
set_property(TARGET hdf5_f90cstub-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_f90cstub-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_f90cstub.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_f90cstub-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_f90cstub-static "${_IMPORT_PREFIX}/lib/libhdf5_f90cstub.a" )

# Import target "hdf5_f90cstub-shared" for configuration "Release"
set_property(TARGET hdf5_f90cstub-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_f90cstub-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_f90cstub.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_f90cstub-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_f90cstub-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_f90cstub-shared "${_IMPORT_PREFIX}/lib/libhdf5_f90cstub.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_f90cstub-0.dll" )

# Import target "hdf5_fortran-static" for configuration "Release"
set_property(TARGET hdf5_fortran-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_fortran-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "Fortran"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_fortran.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_fortran-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_fortran-static "${_IMPORT_PREFIX}/lib/libhdf5_fortran.a" )

# Import target "hdf5_fortran-shared" for configuration "Release"
set_property(TARGET hdf5_fortran-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_fortran-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_fortran.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_fortran-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_fortran-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_fortran-shared "${_IMPORT_PREFIX}/lib/libhdf5_fortran.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_fortran-0.dll" )

# Import target "hdf5_hl_f90cstub-static" for configuration "Release"
set_property(TARGET hdf5_hl_f90cstub-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_f90cstub-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_f90cstub.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_f90cstub-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_f90cstub-static "${_IMPORT_PREFIX}/lib/libhdf5_hl_f90cstub.a" )

# Import target "hdf5_hl_f90cstub-shared" for configuration "Release"
set_property(TARGET hdf5_hl_f90cstub-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_f90cstub-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_f90cstub.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_hl_f90cstub-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_f90cstub-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_f90cstub-shared "${_IMPORT_PREFIX}/lib/libhdf5_hl_f90cstub.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_hl_f90cstub-0.dll" )

# Import target "hdf5_hl_fortran-static" for configuration "Release"
set_property(TARGET hdf5_hl_fortran-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_fortran-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "Fortran"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_fortran.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_fortran-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_fortran-static "${_IMPORT_PREFIX}/lib/libhdf5_hl_fortran.a" )

# Import target "hdf5_hl_fortran-shared" for configuration "Release"
set_property(TARGET hdf5_hl_fortran-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_fortran-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_fortran.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_hl_fortran-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_fortran-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_fortran-shared "${_IMPORT_PREFIX}/lib/libhdf5_hl_fortran.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_hl_fortran-0.dll" )

# Import target "hdf5_cpp-static" for configuration "Release"
set_property(TARGET hdf5_cpp-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_cpp-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_cpp.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_cpp-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_cpp-static "${_IMPORT_PREFIX}/lib/libhdf5_cpp.a" )

# Import target "hdf5_cpp-shared" for configuration "Release"
set_property(TARGET hdf5_cpp-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_cpp-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_cpp.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_cpp-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_cpp-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_cpp-shared "${_IMPORT_PREFIX}/lib/libhdf5_cpp.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_cpp-0.dll" )

# Import target "hdf5_hl_cpp-static" for configuration "Release"
set_property(TARGET hdf5_hl_cpp-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_cpp-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_cpp.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_cpp-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_cpp-static "${_IMPORT_PREFIX}/lib/libhdf5_hl_cpp.a" )

# Import target "hdf5_hl_cpp-shared" for configuration "Release"
set_property(TARGET hdf5_hl_cpp-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hdf5_hl_cpp-shared PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libhdf5_hl_cpp.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libhdf5_hl_cpp-0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS hdf5_hl_cpp-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_hdf5_hl_cpp-shared "${_IMPORT_PREFIX}/lib/libhdf5_hl_cpp.dll.a" "${_IMPORT_PREFIX}/bin/libhdf5_hl_cpp-0.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
