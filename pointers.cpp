#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main (){

    int* input_int_pointer {nullptr};
    int int_input{};

    input_int_pointer = &int_input;

    cout << "size of pointers on tnis machine : " << sizeof input_int_pointer << endl;
    cout << "Enter a number to print : " ;
    cin >> *input_int_pointer;
    cout << "The number you entered was : " << int_input << endl;
    cout << "The address of it on the memory is : " << input_int_pointer << endl;
    cout << "The first element on the memory adress is : " << input_int_pointer[0] << endl; // similar to an array where the name of an array is the index of the first element in it, the name of a pointer is the address of the element it references. if it could reference elements that are contigous then a pointer is an could be used as an array.
//garbage: do not uncomment!    cout << "The second elemetnt on the memory address is : " << input_int_pointer[1] << endl; // here, the pointer references only one element and not contigous elements. so it is not legal to check the next element it references
    cout << "Goodbye...";


    return 0;

}