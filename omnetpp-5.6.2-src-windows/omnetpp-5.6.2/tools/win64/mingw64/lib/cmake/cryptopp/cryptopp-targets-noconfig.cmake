#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cryptopp-shared" for configuration ""
set_property(TARGET cryptopp-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cryptopp-shared PROPERTIES
  IMPORTED_IMPLIB_NOCONFIG "${_IMPORT_PREFIX}/lib/libcryptopp.dll.a"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "ws2_32"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/libcryptopp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS cryptopp-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_cryptopp-shared "${_IMPORT_PREFIX}/lib/libcryptopp.dll.a" "${_IMPORT_PREFIX}/bin/libcryptopp.dll" )

# Import target "cryptopp-static" for configuration ""
set_property(TARGET cryptopp-static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cryptopp-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "ws2_32"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcryptopp.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS cryptopp-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_cryptopp-static "${_IMPORT_PREFIX}/lib/libcryptopp.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
