# CMake C Project Template
C-based Project template using CMake as buildsystem

## Project License
Copyright (c) 2023, [Diogo Ferreira](https://github.com/diogoefl)

SPDX-License-Identifier: [BSD-3-Clause](https://spdx.org/licenses/BSD-3-Clause.html)

See [license](./LICENSE) at this project root for more detailed information

## Requirements

- CMake 3.23+
- LLVM 16+
- Ninja 1.11+

## Naming convention

- snake_case naming convention for source code
- snake_case naming convention for variables and functions
- CamelCase naming convention for structs naming
- snake_case naming convention for typedef added suffix _t
- snake_case naming convention for CMake data
- file naming containing namespace with snake_case
- exception to folder location is main.h and main.c that are located directly on src and include folders


## Folder convention

- include: header files
- src: source code files
- test: unit testing files
- vendor: external dependencies or github subprojects
- _out: recommended cmake build folder
