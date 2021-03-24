#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "openjpeg_JPWL" for configuration "Release"
set_property(TARGET openjpeg_JPWL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openjpeg_JPWL PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libopenjpeg_JPWL.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libopenjpeg_JPWL.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS openjpeg_JPWL )
list(APPEND _IMPORT_CHECK_FILES_FOR_openjpeg_JPWL "${_IMPORT_PREFIX}/lib/libopenjpeg_JPWL.dll.a" "${_IMPORT_PREFIX}/bin/libopenjpeg_JPWL.dll" )

# Import target "openjpeg" for configuration "Release"
set_property(TARGET openjpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openjpeg PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libopenjpeg.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libopenjpeg-5.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS openjpeg )
list(APPEND _IMPORT_CHECK_FILES_FOR_openjpeg "${_IMPORT_PREFIX}/lib/libopenjpeg.dll.a" "${_IMPORT_PREFIX}/bin/libopenjpeg-5.dll" )

# Import target "j2k_to_image" for configuration "Release"
set_property(TARGET j2k_to_image APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(j2k_to_image PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/j2k_to_image.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS j2k_to_image )
list(APPEND _IMPORT_CHECK_FILES_FOR_j2k_to_image "${_IMPORT_PREFIX}/bin/j2k_to_image.exe" )

# Import target "image_to_j2k" for configuration "Release"
set_property(TARGET image_to_j2k APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(image_to_j2k PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/image_to_j2k.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS image_to_j2k )
list(APPEND _IMPORT_CHECK_FILES_FOR_image_to_j2k "${_IMPORT_PREFIX}/bin/image_to_j2k.exe" )

# Import target "j2k_dump" for configuration "Release"
set_property(TARGET j2k_dump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(j2k_dump PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/j2k_dump.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS j2k_dump )
list(APPEND _IMPORT_CHECK_FILES_FOR_j2k_dump "${_IMPORT_PREFIX}/bin/j2k_dump.exe" )

# Import target "openjpip_local" for configuration "Release"
set_property(TARGET openjpip_local APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openjpip_local PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "openjpeg;ws2_32"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libopenjpip_local.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openjpip_local )
list(APPEND _IMPORT_CHECK_FILES_FOR_openjpip_local "${_IMPORT_PREFIX}/lib/libopenjpip_local.a" )

# Import target "addXMLinJP2" for configuration "Release"
set_property(TARGET addXMLinJP2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(addXMLinJP2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/addXMLinJP2.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS addXMLinJP2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_addXMLinJP2 "${_IMPORT_PREFIX}/bin/addXMLinJP2.exe" )

# Import target "opj_dec_server" for configuration "Release"
set_property(TARGET opj_dec_server APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opj_dec_server PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/opj_dec_server.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS opj_dec_server )
list(APPEND _IMPORT_CHECK_FILES_FOR_opj_dec_server "${_IMPORT_PREFIX}/bin/opj_dec_server.exe" )

# Import target "jpip_to_jp2" for configuration "Release"
set_property(TARGET jpip_to_jp2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(jpip_to_jp2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/jpip_to_jp2.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS jpip_to_jp2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_jpip_to_jp2 "${_IMPORT_PREFIX}/bin/jpip_to_jp2.exe" )

# Import target "jpip_to_j2k" for configuration "Release"
set_property(TARGET jpip_to_j2k APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(jpip_to_j2k PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/jpip_to_j2k.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS jpip_to_j2k )
list(APPEND _IMPORT_CHECK_FILES_FOR_jpip_to_j2k "${_IMPORT_PREFIX}/bin/jpip_to_j2k.exe" )

# Import target "test_index" for configuration "Release"
set_property(TARGET test_index APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(test_index PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/test_index.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS test_index )
list(APPEND _IMPORT_CHECK_FILES_FOR_test_index "${_IMPORT_PREFIX}/bin/test_index.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
