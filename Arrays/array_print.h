#ifndef ARRAY_PRINT
#define ARRAY_PRINT
#include <iostream>
#include <array>
#include <string>
using namespace std;

// Array Print Type Definition
typedef enum PrintType{
    kPrintRangeLoop = 0,
    kPrintPointerLoop,
    kPrintIteratorLoop
}PrintType_t;

// Array print functions
void print_array(int *arr_ptr, int size);            // Array Pointers
void print_array(array<int, 10> in_arr, int size);   // Array By-value
void print_array(array<string, 10> in_arr, int size);   // Array By-ref
#endif