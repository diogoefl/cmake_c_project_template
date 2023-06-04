/* Copyright (c) 2023, diogoefl
 * SPDX-License-Identifier: BSD-3-Clause
 * See LICENSE file at this project root for more detailed information
 */

/* Project example lib add9 test */

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "project_lib.h"

void test_1(void)
{
    fprintf(stdout, "%s ... ", u8"[project_lib_test] Testing project_lib_add9 with 10");
    
    if (project_lib_add9(10) == 19) {
        fprintf(stdout, "%s\n", u8"SUCCESS");
    } else {
        fprintf(stdout, "%s\n", u8"FAIL");
        exit(EXIT_FAILURE);
    }
}

void test_2(void)
{
    fprintf(stdout, "%s ... ", u8"[project_lib_test] Testing project_lib_add9 with 868");
    
    if (project_lib_add9(868) == 877) {
        fprintf(stdout, "%s\n", u8"SUCCESS");
    } else {
        fprintf(stdout, "%s\n", u8"FAIL");
        exit(EXIT_FAILURE);
    }
}

int main(void)
{
    test_1();
    test_2();
    return EXIT_SUCCESS;
}