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
    cout << "Goodbye...";


    return 0;

}