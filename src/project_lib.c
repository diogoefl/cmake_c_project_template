/* Copyright (c) 2023, diogoefl
 * SPDX-License-Identifier: BSD-3-Clause
 * See LICENSE file at this project root for more detailed information
 */

/* Project example lib implementation 
 * use this example library to construct your project requirements
 */

#include <stdint.h>
#include <stdio.h>

#include "project_lib.h"

/* Log example information */
void project_lib_io_some_log(void)
{
    fprintf(stdout, "%s\n", u8"(project_lib[io]:some_log) 你好 • Olá • Ciao • Hello");
}

/* Simple math function to use on CTest */
int64_t project_lib_add9(const int64_t input)
{
    int64_t result = input + 9;
    return result;
}