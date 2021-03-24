# - this module looks for MSYS
#

#=============================================================================
# Copyright 2001-2009 Kitware, Inc.
#
# Distributed under the OSI-approved BSD License (the "License");
# see accompanying file Copyright.txt for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#=============================================================================
# (To distribute this file outside of CMake, substitute the full
#  License text for the above reference.)

if (WIN32)
  find_path(MSYS_INSTALL_PATH
    msys2_shell.cmd
    "C:/MSYS"
    "[HKEY_LOCAL_MACHINE\\SOFTWARE\\MSYS\\setup;rootdir]"
    "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Cygnus Solutions\\MSYS\\mounts v2\\/;native]"
  )

  mark_as_advanced(
    MSYS_INSTALL_PATH
  )
endif ()
