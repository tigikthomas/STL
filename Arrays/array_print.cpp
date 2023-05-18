
#include "array_print.h"

// Printer Type Selection
PrintType_t print_type = kPrintRangeLoop;
/**
 * @brief Print Array using generic Pointer Approach
 * 
 * @param arr_ptr : Base pointer to the Array
 * @param size  : Size of the Array in numbers
 */
void print_array(int *arr_ptr, int size){

    cout << "Printing Array using pointer type" << endl;

    for(int i=0;i < size; i++){
        cout << "Element [" << i <<"] Value :" << arr_ptr[i] << endl;
    }
}

/**
 * @brief Printing Array based on Pass by Value
 * 
 * @param in_arr : Array by value
 * @param size  : Array size
 */
void print_array(array<int, 10> in_arr, int size){

    cout << "Printing Array : STL " << endl;

    // Printing in Range Based Loop
    if(kPrintRangeLoop == print_type){
        int i =0;
        for(const int &val : in_arr){
            cout << "Element [" << i++ <<"] Value :" << val << endl;
        }
    }
    else{
        // Printing using Forward Iterator
        cout << "Printing Array " << endl;
        int i =0;
        array<int,10>::iterator it;
        for(it = in_arr.begin(); it != in_arr.end(); it++){
            cout << "Element [" << i++ <<"] Value :" << *it << endl;
        }
    }
}


/**
 * @brief Printing Array based on Pass by Value
 * 
 * @param in_arr : Array by value
 * @param size  : Array size
 */
void print_array(array<string, 10> in_arr, int size){

    cout << endl;
    cout << "Printing Array : STL " << endl;

    // Printing in Range Based Loop
    if(kPrintRangeLoop == print_type){
        int i =0;
        for(const string &val : in_arr){
            cout << "Element [" << i++ <<"] Value :" << val << endl;
        }
    }
    else{
        // Printing using Forward Iterator
        cout << "Printing Array " << endl;
        int i =0;
        array<string,10>::iterator it;
        for(it = in_arr.begin(); it != in_arr.end(); it++){
            cout << "Element [" << i++ <<"] Value :" << *it << endl;
        }
    }
}