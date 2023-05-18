#ifndef ARRAY_STL_HDR
#define ARRAY_STL_HDR

#include <iostream>
#include <string>
using namespace std;

// Sample Test function to Create and print the contents of an array
void sample_test();

// Function to test inserting an element in an array
void test_array_insert_element();

// Function to test Deletion an element in an array
void test_array_delete_element();


// Helper Functions
// Insert a new element at given position
void insert_element_array(string *in_arr_ptr, int size, string val, int pos);

// Delete an element of an array for a given position
void delete_element_array(string *in_array_ptr, int size, int pos);

#endif
