
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5OpenGLExtensions_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

# For backwards compatibility only. Use Qt5OpenGLExtensions_VERSION instead.
set(Qt5OpenGLExtensions_VERSION_STRING 5.9.1)

set(Qt5OpenGLExtensions_LIBRARIES Qt5::OpenGLExtensions)

macro(_qt5_OpenGLExtensions_check_file_exists file)
    if(NOT EXISTS "${file}" )
        message(FATAL_ERROR "The imported target \"Qt5::OpenGLExtensions\" references the file
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

macro(_populate_OpenGLExtensions_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::OpenGLExtensions APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set(imported_location "${_qt5OpenGLExtensions_install_prefix}/lib/${LIB_LOCATION}")
    _qt5_OpenGLExtensions_check_file_exists(${imported_location})
    if (_Qt5OpenGLExtensions_LIB_DEPENDENCIES)
        set(_list_sep ";")
    endif()
    set_target_properties(Qt5::OpenGLExtensions PROPERTIES
        "INTERFACE_LINK_LIBRARIES_${Configuration}" "${_Qt5OpenGLExtensions_LIB_DEPENDENCIES}${_list_sep}${_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" ${imported_location}
        # For backward compatibility with CMake < 2.8.12
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5OpenGLExtensions_LIB_DEPENDENCIES}${_list_sep}${_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES}"
    )

    set(imported_implib "${_qt5OpenGLExtensions_install_prefix}/lib/${IMPLIB_LOCATION}")
    _qt5_OpenGLExtensions_check_file_exists(${imported_implib})
    if(NOT "${IMPLIB_LOCATION}" STREQUAL "")
        set_target_properties(Qt5::OpenGLExtensions PROPERTIES
        "IMPORTED_IMPLIB_${Configuration}" ${imported_implib}
        )
    endif()
endmacro()

if (NOT TARGET Qt5::OpenGLExtensions)

    set(_Qt5OpenGLExtensions_OWN_INCLUDE_DIRS "${_qt5OpenGLExtensions_install_prefix}/include/" "${_qt5OpenGLExtensions_install_prefix}/include/QtOpenGLExtensions")
    set(Qt5OpenGLExtensions_PRIVATE_INCLUDE_DIRS "")

    foreach(_dir ${_Qt5OpenGLExtensions_OWN_INCLUDE_DIRS})
        _qt5_OpenGLExtensions_check_file_exists(${_dir})
    endforeach()

    # Only check existence of private includes if the Private component is
    # specified.
    list(FIND Qt5OpenGLExtensions_FIND_COMPONENTS Private _check_private)
    if (NOT _check_private STREQUAL -1)
        foreach(_dir ${Qt5OpenGLExtensions_PRIVATE_INCLUDE_DIRS})
            _qt5_OpenGLExtensions_check_file_exists(${_dir})
        endforeach()
    endif()

    set(Qt5OpenGLExtensions_INCLUDE_DIRS ${_Qt5OpenGLExtensions_OWN_INCLUDE_DIRS})

    set(Qt5OpenGLExtensions_DEFINITIONS -DQT_OPENGLEXTENSIONS_LIB)
    set(Qt5OpenGLExtensions_COMPILE_DEFINITIONS QT_OPENGLEXTENSIONS_LIB)
    set(_Qt5OpenGLExtensions_MODULE_DEPENDENCIES "Gui;Core")


    set(Qt5OpenGLExtensions_OWN_PRIVATE_INCLUDE_DIRS ${Qt5OpenGLExtensions_PRIVATE_INCLUDE_DIRS})

    set(_Qt5OpenGLExtensions_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5OpenGLExtensions_FIND_REQUIRED)
        set(_Qt5OpenGLExtensions_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5OpenGLExtensions_FIND_DEPENDENCIES_QUIET)
    if (Qt5OpenGLExtensions_FIND_QUIETLY)
        set(_Qt5OpenGLExtensions_DEPENDENCIES_FIND_QUIET QUIET)
    endif()
    set(_Qt5OpenGLExtensions_FIND_VERSION_EXACT)
    if (Qt5OpenGLExtensions_FIND_VERSION_EXACT)
        set(_Qt5OpenGLExtensions_FIND_VERSION_EXACT EXACT)
    endif()

    set(Qt5OpenGLExtensions_EXECUTABLE_COMPILE_FLAGS "")

    foreach(_module_dep ${_Qt5OpenGLExtensions_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                5.9.1 ${_Qt5OpenGLExtensions_FIND_VERSION_EXACT}
                ${_Qt5OpenGLExtensions_DEPENDENCIES_FIND_QUIET}
                ${_Qt5OpenGLExtensions_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${CMAKE_CURRENT_LIST_DIR}/.." NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5OpenGLExtensions_FOUND False)
            return()
        endif()

        list(APPEND Qt5OpenGLExtensions_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5OpenGLExtensions_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5OpenGLExtensions_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5OpenGLExtensions_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5OpenGLExtensions_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5OpenGLExtensions_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5OpenGLExtensions_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5OpenGLExtensions_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5OpenGLExtensions_COMPILE_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5OpenGLExtensions_EXECUTABLE_COMPILE_FLAGS)

    set(_Qt5OpenGLExtensions_LIB_DEPENDENCIES "Qt5::Gui;Qt5::Core")


    add_library(Qt5::OpenGLExtensions STATIC IMPORTED)
    set_property(TARGET Qt5::OpenGLExtensions PROPERTY IMPORTED_LINK_INTERFACE_LANGUAGES CXX)
# Excerpt from:

# From ae6d4c77eb338be3f2189bfaffdcd3c38cc57333 Mon Sep 17 00:00:00 2001
# From: Stephen Kelly <stephen.kelly@kdab.com>
# Date: Tue, 21 Aug 2012 13:12:57 +0200
# Subject: [PATCH] Make it possible to use static builds of Qt with CMake.
#
# Parse the prl files generated by qmake to get the link dependencies. They
# contain all the information we need, and they are the only location with
# all the right information.

# .. changed so that if can be called multiple times, once for the module itself and once for each
# plugin, each time, appending to _Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES

macro(macro_process_prl_file prl_file_location Configuration)
    if (EXISTS "${prl_file_location}")
        file(STRINGS "${prl_file_location}" prl_strings REGEX "QMAKE_PRL_LIBS_FOR_CMAKE")
        string(REGEX REPLACE "QMAKE_PRL_LIBS_FOR_CMAKE *= *([^\n]*)" "\\1" static_depends ${prl_strings} )
        string(REGEX REPLACE "\\$\\$\\[QT_INSTALL_LIBS\\]" "${_qt5OpenGLExtensions_install_prefix}/lib" static_depends "${static_depends}")
        if (_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES)
            set(_list_sep ";")
        endif()
        set(_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES "${_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES}${_list_sep}${static_depends}")
    endif()
endmacro()

macro(macro_process_plugin_prl_file prl_file_location Configuration LIB_DIRECTORY LIB_LOCATION)
    # First add the (static) plugin itself.
    if (_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES)
        set(_list_sep ";")
    endif()
    set(_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES "${_Qt5OpenGLExtensions_STATIC_${Configuration}_LIB_DEPENDENCIES}${_list_sep}${_qt5OpenGLExtensions_install_prefix}/${LIB_DIRECTORY}/${LIB_LOCATION}")
    # .. then its dependencies.
    macro_process_prl_file(${prl_file_location} ${Configuration})
endmacro()

    macro_process_prl_file("${_qt5OpenGLExtensions_install_prefix}/lib/Qt5OpenGLExtensionsd.prl" DEBUG)
    macro_process_prl_file("${_qt5OpenGLExtensions_install_prefix}/lib/Qt5OpenGLExtensions.prl" RELEASE)

# Excerpt from: end


    set_property(TARGET Qt5::OpenGLExtensions PROPERTY
      INTERFACE_INCLUDE_DIRECTORIES ${_Qt5OpenGLExtensions_OWN_INCLUDE_DIRS})
    set_property(TARGET Qt5::OpenGLExtensions PROPERTY
      INTERFACE_COMPILE_DEFINITIONS QT_OPENGLEXTENSIONS_LIB)

    set(_Qt5OpenGLExtensions_PRIVATE_DIRS_EXIST TRUE)
    foreach (_Qt5OpenGLExtensions_PRIVATE_DIR ${Qt5OpenGLExtensions_OWN_PRIVATE_INCLUDE_DIRS})
        if (NOT EXISTS ${_Qt5OpenGLExtensions_PRIVATE_DIR})
            set(_Qt5OpenGLExtensions_PRIVATE_DIRS_EXIST FALSE)
        endif()
    endforeach()

    if (_Qt5OpenGLExtensions_PRIVATE_DIRS_EXIST
        AND NOT CMAKE_VERSION VERSION_LESS 3.0.0 )
        add_library(Qt5::OpenGLExtensionsPrivate INTERFACE IMPORTED)
        set_property(TARGET Qt5::OpenGLExtensionsPrivate PROPERTY
            INTERFACE_INCLUDE_DIRECTORIES ${Qt5OpenGLExtensions_OWN_PRIVATE_INCLUDE_DIRS}
        )
        set(_Qt5OpenGLExtensions_PRIVATEDEPS)
        foreach(dep ${_Qt5OpenGLExtensions_LIB_DEPENDENCIES})
            if (TARGET ${dep}Private)
                list(APPEND _Qt5OpenGLExtensions_PRIVATEDEPS ${dep}Private)
            endif()
        endforeach()
        set_property(TARGET Qt5::OpenGLExtensionsPrivate PROPERTY
            INTERFACE_LINK_LIBRARIES Qt5::OpenGLExtensions ${_Qt5OpenGLExtensions_PRIVATEDEPS}
        )
    endif()

    file(GLOB pluginTargetsMaybe "${CMAKE_CURRENT_LIST_DIR}/Qt5OpenGLExtensions_*.cmake")
    unset(pluginTargets)
    if (pluginTargetsMaybe)
        foreach(pluginTarget ${pluginTargetsMaybe})
            # exclude Qt5Qml factory plugins as they will be included later by Qt5QmlConfigExtras
            string(REGEX MATCH Qt5Qml_.*Factory.cmake excluded ${pluginTarget})
            if (excluded)
                continue()
            endif()
            file(STRINGS ${pluginTarget} matched REGEX Qt5OpenGLExtensions_PLUGINS)
            if (matched)
                list(APPEND pluginTargets ${pluginTarget})
            endif()
        endforeach()
    endif()

    macro(_populate_OpenGLExtensions_plugin_properties Plugin Configuration PLUGIN_LOCATION)
        set_property(TARGET Qt5::${Plugin} APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

        set(imported_location "${_qt5OpenGLExtensions_install_prefix}/share/qt5/plugins/${PLUGIN_LOCATION}")
        _qt5_OpenGLExtensions_check_file_exists(${imported_location})
        set_target_properties(Qt5::${Plugin} PROPERTIES
            "IMPORTED_LOCATION_${Configuration}" ${imported_location}
        )
        get_filename_component(_plugindir ${PLUGIN_LOCATION} PATH)
        get_filename_component(_plugindirname ${_plugindir} NAME)
        get_filename_component(_pluginname ${PLUGIN_LOCATION} NAME)
        set_property(TARGET Qt5::OpenGLExtensions APPEND PROPERTY STATIC_PLUGINS ${Plugin})
        string(REGEX REPLACE "^lib(.*)\\.a" "${_qt5OpenGLExtensions_install_prefix}/share/qt5/plugins/${_plugindirname}/\\1.prl" plugin_prl_file_location ${_pluginname})
        macro_process_plugin_prl_file(${plugin_prl_file_location} ${Configuration} "share/qt5/plugins" ${PLUGIN_LOCATION} )

    endmacro()

    if (pluginTargets)
        foreach(pluginTarget ${pluginTargets})
            include(${pluginTarget})
        endforeach()
    endif()

    _populate_OpenGLExtensions_target_properties(RELEASE "libQt5OpenGLExtensions.a" "" )



    _populate_OpenGLExtensions_target_properties(DEBUG "libQt5OpenGLExtensionsd.a" "" )






_qt5_OpenGLExtensions_check_file_exists("${CMAKE_CURRENT_LIST_DIR}/Qt5OpenGLExtensionsConfigVersion.cmake")

endif()
