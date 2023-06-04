/* Copyright (c) 2023, diogoefl
 * SPDX-License-Identifier: BSD-3-Clause
 * See LICENSE file at this project root for more detailed information
 */

/* Project example lib header 
 * use this example library to construct your project requirements
 * 
 * usage: add #include "project/lib.h" to your header file
 */

#ifndef PROJECT_LIB_H
#define PROJECT_LIB_H

#include <stdint.h>

/* Log example information */
void project_lib_io_some_log(void);

/* Simple math function to use on CTest */
int64_t project_lib_add9(const int64_t input);

#endif /* PROJECT_LIB_H */