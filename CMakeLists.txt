cmake_minimum_required(VERSION 3.24)
project(Lab_20 C)

set(CMAKE_C_STANDARD 11)

add_executable(Lab_20 main.c Libs/matrix/matrix.c Libs/matrix/matrix.h Libs/set_bits/set_bits.c Libs/set_bits/set_bits.h Libs/string/string.c Libs/string/string.h Libs/set_ordered/set_ordered.c Libs/set_ordered/set_ordered.h Libs/set_unordered/set_unordered.c Libs/set_unordered/set_unordered.h Libs/vector/vector.c Libs/vector/vector.h Libs/vector_void/vector_void.c Libs/vector_void/vector_void.h Libs/algorithms/algorithms.c Libs/algorithms/algorithms.h Libs/files/files.c Libs/files/files.h Libs/Lab_20/Lab_20.c Libs/Lab_20/Lab_20.h Libs/test/test.c Libs/test/test.h)
