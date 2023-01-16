#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

unsigned long long fibonacci (unsigned long long fib_number);
unsigned long long factorial (unsigned long long fac_number);

void print_fibonacci (unsigned long long &input_number);
void print_factorial (unsigned long long &input_number);
void print_first_n_fibon (unsigned long long &input_number, vector<unsigned long long> &fibon_array);


int main (){

    string selection {};
    unsigned long long input_number {};


    cout << std::boolalpha;
    cout << "\n------------------ WELCOME TO SEQUENCE GENERATOR!!! ------------\n";
    cout << "\a|\t\t\t\t\t\t\t\t|\n-----------------------------------------------------------------\n";

    cout << "\tEnter: \n";
    cout << "\tF => factorial\n";
    cout << "\tf => fibonacci\n";
    cout << "\tp => print first n fibonacci numbers\n";
    cout << "\t================= your selection: ";
    getline(cin, selection);

    char selected {selection.at(0)};

    if(selected == 'F'){
        print_factorial(input_number);

    }else if (selected == 'f'){
        print_fibonacci(input_number);
    }else if (selected == 'p'){
        cout << "enter a number to generate its first fibonacci sequences : ";
        cin >> input_number;
        vector<unsigned long long> fibon_array(input_number);
        print_first_n_fibon(input_number,fibon_array);
    }

    return 0;

}

unsigned long long fibonacci (unsigned long long fib_number){

    if(fib_number <= 1){
        return fib_number;
    }else{
        cout << fib_number<< endl;
        cout << "__________________________" << endl;
        return fibonacci(fib_number - 1) + fibonacci(fib_number -2);
    }
    
}
unsigned long long factorial (unsigned long long fac_number){

    if(fac_number == 0){
        return 1;
    }

    return fac_number * factorial(fac_number -1);

}

void print_fibonacci (unsigned long long &input_number){
    cout << "enter a number to generate its fibonacci : ";
    cin >> input_number;
    cout << "printing fibonacci ..." << endl;
    cout << fibonacci(input_number);
}

void print_factorial (unsigned long long &input_number){
    cout << "enter a number to generate its factorial : ";
    cin >> input_number;
    cout << "printing factorial ... " << endl;
    cout << factorial(input_number);
}

// A MORE EFFECTIVE WAY TO GENERATE FIBONACCI SEQUENCE BECAUSE IT DOES NOT SET UP FUNCTION OVERHEADS OR CREATE MULTIPLE ACTIVATION RECORDS ON THE CALLSTACK. 
void print_first_n_fibon (unsigned long long &input_number, vector<unsigned long long> &fibon_array){
    
    cout << "printing fibonacci sequence ..." << endl;

    if(input_number > 0 && input_number){
        fibon_array.at(0) = 0;

        if(input_number >=2){
            fibon_array.at(1) = 1;
        }

        size_t x {1}, vind{2};

        while(vind < input_number){

            if(x == fibon_array.at(vind - 1) + fibon_array.at(vind - 2)){
                fibon_array.at(vind) = x;
                vind ++;
            }

            x ++;
        }

        for(auto fibon_el: fibon_array){
            cout << fibon_el << " ";
        }


    }else{
        cout << " Invalid array . please provide the correct value !" << endl;
    }
}