#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main (){

    unsigned int tableLength {12};
    unsigned int tableValue {};

    cout << "Enter the table you wish to multiply (1 -n) : " << endl;
    cin >> tableValue;

    if(tableValue && tableValue > 0){
        for(unsigned int i {tableValue},j {1}; j <= tableLength ; i+=0 , j++){
        cout << "| " << i << " * " << j << " = " << i*j << " |" <<endl;
    }
    }else{
        cout << "INVALID TABLE VALUE!" << endl;
    }

    return 0;

}