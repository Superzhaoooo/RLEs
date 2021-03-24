
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5WebChannel_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

# For backwards compatibility only. Use Qt5WebChannel_VERSION instead.
set(Qt5WebChannel_VERSION_STRING 5.9.1)

set(Qt5WebChannel_LIBRARIES Qt5::WebChannel)

macro(_qt5_WebChannel_check_file_exists file)
    if(NOT EXISTS "${file}" )
        message(FATAL_ERROR "The imported target \"Qt5::WebChannel\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
endmacro()

macro(_populate_WebChannel_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::WebChannel APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set(imported_location "${_qt5WebChannel_install_prefix}/bin/${LIB_LOCATION}")
    _qt5_WebChannel_check_file_exists(${imported_location})
    if (_Qt5WebChannel_LIB_DEPENDENCIES)
        set(_list_sep ";")
    endif()
    set_target_properties(Qt5::WebChannel PROPERTIES
        "INTERFACE_LINK_LIBRARIES_${Configuration}" "${_Qt5WebChannel_LIB_DEPENDENCIES}${_list_sep}${_Qt5WebChannel_STATIC_${Configuration}_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" ${imported_location}
        # For backward compatibility with CMake < 2.8.12
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5WebChannel_LIB_DEPENDENCIES}${_list_sep}${_Qt5WebChannel_STATIC_${Configuration}_LIB_DEPENDENCIES}"
    )

    set(imported_implib "${_qt5WebChannel_install_prefix}/lib/${IMPLIB_LOCATION}")
    _qt5_WebChannel_check_file_exists(${imported_implib})
    if(NOT "${IMPLIB_LOCATION}" STREQUAL "")
        set_target_properties(Qt5::WebChannel PROPERTIES
        "IMPORTED_IMPLIB_${Configuration}" ${imported_implib}
        )
    endif()
endmacro()

if (NOT TARGET Qt5::WebChannel)

    set(_Qt5WebChannel_OWN_INCLUDE_DIRS "${_qt5WebChannel_install_prefix}/include/" "${_qt5WebChannel_install_prefix}/include/QtWebChannel")
    set(Qt5WebChannel_PRIVATE_INCLUDE_DIRS
        "${_qt5WebChannel_install_prefix}/include/QtWebChannel/5.9.1"
        "${_qt5WebChannel_install_prefix}/include/QtWebChannel/5.9.1/QtWebChannel"
    )

    foreach(_dir ${_Qt5WebChannel_OWN_INCLUDE_DIRS})
        _qt5_WebChannel_check_file_exists(${_dir})
    endforeach()

    # Only check existence of private includes if the Private component is
    # specified.
    list(FIND Qt5WebChannel_FIND_COMPONENTS Private _check_private)
    if (NOT _check_private STREQUAL -1)
        foreach(_dir ${Qt5WebChannel_PRIVATE_INCLUDE_DIRS})
            _qt5_WebChannel_check_file_exists(${_dir})
        endforeach()
    endif()

    set(Qt5WebChannel_INCLUDE_DIRS ${_Qt5WebChannel_OWN_INCLUDE_DIRS})

    set(Qt5WebChannel_DEFINITIONS -DQT_WEBCHANNEL_LIB)
    set(Qt5WebChannel_COMPILE_DEFINITIONS QT_WEBCHANNEL_LIB)
    set(_Qt5WebChannel_MODULE_DEPENDENCIES "Qml;Core")


    set(Qt5WebChannel_OWN_PRIVATE_INCLUDE_DIRS ${Qt5WebChannel_PRIVATE_INCLUDE_DIRS})

    set(_Qt5WebChannel_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5WebChannel_FIND_REQUIRED)
        set(_Qt5WebChannel_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5WebChannel_FIND_DEPENDENCIES_QUIET)
    if (Qt5WebChannel_FIND_QUIETLY)
        set(_Qt5WebChannel_DEPENDENCIES_FIND_QUIET QUIET)
    endif()
    set(_Qt5WebChannel_FIND_VERSION_EXACT)
    if (Qt5WebChannel_FIND_VERSION_EXACT)
        set(_Qt5WebChannel_FIND_VERSION_EXACT EXACT)
    endif()

    set(Qt5WebChannel_EXECUTABLE_COMPILE_FLAGS "")

    foreach(_module_dep ${_Qt5WebChannel_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                5.9.1 ${_Qt5WebChannel_FIND_VERSION_EXACT}
                ${_Qt5WebChannel_DEPENDENCIES_FIND_QUIET}
                ${_Qt5WebChannel_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${CMAKE_CURRENT_LIST_DIR}/.." NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5WebChannel_FOUND False)
            return()
        endif()

        list(APPEND Qt5WebChannel_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5WebChannel_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5WebChannel_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5WebChannel_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5WebChannel_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5WebChannel_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5WebChannel_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5WebChannel_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5WebChannel_COMPILE_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5WebChannel_EXECUTABLE_COMPILE_FLAGS)

    set(_Qt5WebChannel_LIB_DEPENDENCIES "Qt5::Qml;Qt5::Core")


    add_library(Qt5::WebChannel SHARED IMPORTED)

    set_property(TARGET Qt5::WebChannel PROPERTY
      INTERFACE_INCLUDE_DIRECTORIES ${_Qt5WebChannel_OWN_INCLUDE_DIRS})
    set_property(TARGET Qt5::WebChannel PROPERTY
      INTERFACE_COMPILE_DEFINITIONS QT_WEBCHANNEL_LIB)

    set(_Qt5WebChannel_PRIVATE_DIRS_EXIST TRUE)
    foreach (_Qt5WebChannel_PRIVATE_DIR ${Qt5WebChannel_OWN_PRIVATE_INCLUDE_DIRS})
        if (NOT EXISTS ${_Qt5WebChannel_PRIVATE_DIR})
            set(_Qt5WebChannel_PRIVATE_DIRS_EXIST FALSE)
        endif()
    endforeach()

    if (_Qt5WebChannel_PRIVATE_DIRS_EXIST
        AND NOT CMAKE_VERSION VERSION_LESS 3.0.0 )
        add_library(Qt5::WebChannelPrivate INTERFACE IMPORTED)
        set_property(TARGET Qt5::WebChannelPrivate PROPERTY
            INTERFACE_INCLUDE_DIRECTORIES ${Qt5WebChannel_OWN_PRIVATE_INCLUDE_DIRS}
        )
        set(_Qt5WebChannel_PRIVATEDEPS)
        foreach(dep ${_Qt5WebChannel_LIB_DEPENDENCIES})
            if (TARGET ${dep}Private)
                list(APPEND _Qt5WebChannel_PRIVATEDEPS ${dep}Private)
            endif()
        endforeach()
        set_property(TARGET Qt5::WebChannelPrivate PROPERTY
            INTERFACE_LINK_LIBRARIES Qt5::WebChannel ${_Qt5WebChannel_PRIVATEDEPS}
        )
    endif()

    file(GLOB pluginTargetsMaybe "${CMAKE_CURRENT_LIST_DIR}/Qt5WebChannel_*.cmake")
    unset(pluginTargets)
    if (pluginTargetsMaybe)
        foreach(pluginTarget ${pluginTargetsMaybe})
            # exclude Qt5Qml factory plugins as they will be included later by Qt5QmlConfigExtras
            string(REGEX MATCH Qt5Qml_.*Factory.cmake excluded ${pluginTarget})
            if (excluded)
                continue()
            endif()
            file(STRINGS ${pluginTarget} matched REGEX Qt5WebChannel_PLUGINS)
            if (matched)
                list(APPEND pluginTargets ${pluginTarget})
            endif()
        endforeach()
    endif()

    macro(_populate_WebChannel_plugin_properties Plugin Configuration PLUGIN_LOCATION)
        set_property(TARGET Qt5::${Plugin} APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

        set(imported_location "${_qt5WebChannel_install_prefix}/share/qt5/plugins/${PLUGIN_LOCATION}")
        _qt5_WebChannel_check_file_exists(${imported_location})
        set_target_properties(Qt5::${Plugin} PROPERTIES
            "IMPORTED_LOCATION_${Configuration}" ${imported_location}
        )
        get_filename_component(_plugindir ${PLUGIN_LOCATION} PATH)
        get_filename_component(_plugindirname ${_plugindir} NAME)
        get_filename_component(_pluginname ${PLUGIN_LOCATION} NAME)
        string(REGEX REPLACE "^lib(.*)\\.a" "${_qt5WebChannel_install_prefix}/share/qt5/plugins/${_plugindirname}/\\1.prl" plugin_prl_file_location ${_pluginname})

    endmacro()

    if (pluginTargets)
        foreach(pluginTarget ${pluginTargets})
            include(${pluginTarget})
        endforeach()
    endif()

    _populate_WebChannel_target_properties(RELEASE "Qt5WebChannel.dll" "libQt5WebChannel.dll.a" )



    _populate_WebChannel_target_properties(DEBUG "Qt5WebChanneld.dll" "libQt5WebChanneld.dll.a" )






_qt5_WebChannel_check_file_exists("${CMAKE_CURRENT_LIST_DIR}/Qt5WebChannelConfigVersion.cmake")

endif()
