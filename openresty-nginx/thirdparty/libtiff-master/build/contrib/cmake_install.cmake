# Install script for directory: D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/contrib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/tiff")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/addtiffo/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/dbs/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/iptcutil/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/mfs/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/pds/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/ras/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/stream/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/tags/cmake_install.cmake")
  include("D:/www/_openresty/openresty-1.13.6.2/thirdparty/libtiff-master/build/contrib/win_dib/cmake_install.cmake")

endif()

