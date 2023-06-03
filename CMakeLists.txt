# Copyright (c) 2023, diogoefl
# SPDX-License-Identifier: BSD-3-Clause
# See LICENSE file at this project root for more detailed information

# CMake Project setup
cmake_minimum_required(VERSION 3.23)
project(template_c_project
        VERSION      0.0.1
        DESCRIPTION  "Template C Project using CMake / LLVM / Ninja"
        HOMEPAGE_URL "https://github.com/diogoefl/cmake_c_project_template"
        LANGUAGES    C )

# Adding project example library
add_library(project_lib STATIC
            "src/project/project_lib.c")

set_property(TARGET project_lib PROPERTY C_STANDARD 23)

target_include_directories(project_lib PRIVATE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include/project>)

# Adding project main
add_executable(project_main
               "src/main.c")

set_property(TARGET project_main PROPERTY C_STANDARD 23)

target_include_directories(project_main PRIVATE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include/project>)

target_link_libraries(project_main
                      PRIVATE project_lib)