# Copyright (c) 2023, diogoefl
# SPDX-License-Identifier: BSD-3-Clause
# See LICENSE file at this project root for more detailed information

# CMake Project setup
cmake_minimum_required(VERSION 3.23)
project(template_c_project
        VERSION      0.0.2
        DESCRIPTION  "Template C Project using CMake / LLVM / Ninja"
        HOMEPAGE_URL "https://github.com/diogoefl/cmake_c_project_template"
        LANGUAGES    C )

# Adding project example library
add_library(project_lib STATIC
            "src/project_lib.c")

set_property(TARGET project_lib PROPERTY C_STANDARD          23 )
set_property(TARGET project_lib PROPERTY C_STANDARD_REQUIRED ON )
set_property(TARGET project_lib PROPERTY C_EXTENSIONS        OFF)

target_include_directories(project_lib PRIVATE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include/project>)

# Adding project main
add_executable(project_main
               "src/main.c")

set_property(TARGET project_main PROPERTY C_STANDARD          23)
set_property(TARGET project_main PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET project_main PROPERTY C_EXTENSIONS        OFF)

target_include_directories(project_main PRIVATE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include/project>)

target_link_libraries(project_main
                      PRIVATE project_lib)


# Adding project lib testing
enable_testing()
add_executable(project_lib_test
               "test/project_lib_add9_test.c")

set_property(TARGET project_lib_test PROPERTY C_STANDARD          23)
set_property(TARGET project_lib_test PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET project_lib_test PROPERTY C_EXTENSIONS        OFF)

target_include_directories(project_lib_test PRIVATE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include/project>)

target_link_libraries(project_lib_test PRIVATE project_lib)

add_test(project_lib_test project_lib_test)