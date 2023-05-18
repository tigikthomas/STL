

#include <iostream>
#include <array>
#include "array_stl.h"
#include "array_print.h"

using namespace std;

/**
 * @brief Simple Function to Create and Display an Array
 * 
 */
void sample_test(){

    std::array<int, 10> in_array{1,2,3,4,5,6,7,8,9};

    print_array(in_array.data(), 10);
    print_array(in_array, 10);
}

// Test Function to insert a new element to a string array at a given position
void test_array_insert_element(){

    std::array<string,10> str_arr = {"one","two,","three","four","five","six","seven","eight","nine"};

    print_array(str_arr,10);

    // First Insertion
    insert_element_array(str_arr.data(), 10, "NUMBER",5);

    print_array(str_arr,10);

    // Second Insertion
    insert_element_array(str_arr.data(), 10, "NUMBER",0);

    print_array(str_arr,10);

    // Third Insertion
    insert_element_array(str_arr.data(), 10, "NUMBER",9);

    print_array(str_arr,10);
}

// Test Function to delete a new element to a string array at a given position
void test_array_delete_element(){

    std::array<string,10> str_arr = {"one","two,","three","four","five","six","seven","eight","nine"};

    print_array(str_arr,10);

    // First Deletion
    delete_element_array(str_arr.data(), 10, 0);

    print_array(str_arr,10);

    // Second Deletion
    delete_element_array(str_arr.data(), 10, 5);

    print_array(str_arr,10);

    // Third Deletion
    delete_element_array(str_arr.data(), 10, 9);

    print_array(str_arr,10);
}

/**
 * @brief Insert an element to a string array at a given position
 * 
 * @param in_arr_ptr    : String array base pointer
 * @param size          : Number of elements
 * @param val           : New value to be inserted
 * @param pos           : Index [0,size) on which the elment should be inserted.
 */
void insert_element_array(string *in_arr_ptr, int size, string val, int pos){

    if((!in_arr_ptr) || (!size) || (pos<0) || (pos >= size))
    {
        cout << "Error in input arguments" << endl;
        return;
    }

    int idx = size-1;

    // Shift right the elements from pos
    while(idx>pos){

        in_arr_ptr[idx] = in_arr_ptr[idx-1];
        idx--;
    }

    // Update the pos with latest value
    in_arr_ptr[pos] = val;
}

/**
 * @brief Delete an array element at a given position
 * 
 * @param in_array_ptr : Base Pointer of String array
 * @param size         : size of an array
 * @param pos          : Position of the element to be deleted
 */
void delete_element_array(string *in_array_ptr, int size, int pos){

    if((!in_array_ptr) || (!size) || (pos<0) || (pos>=size)){
        cout << "Error in input arguments" << endl;
        return;
    }
    int idx = pos;

    while(idx<size-1){

        in_array_ptr[idx] = in_array_ptr[idx+1];
        idx++;
    }
}