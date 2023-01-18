#include <iostream>

using namespace std;

void add_numbers (int &arrlen);

int main (){

    char input_char {};
    // int* global_pointer {nullptr};
    int arrlen {0};


    do{
        cout << "P - Print Numbers\n";
        cout << "A - Add numbers\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q/q - Quit\n\n";
        cout << "=========================\n";

        cin >> input_char;

        switch(input_char){
            case 'p':
            case 'P':
                break;
            case 'a':
            case 'A':
                add_numbers(arrlen);
            break;
            case 'M':
            case 'm':
                break;
            case 'S':
            case 's':
                break;
            case 'l':
            case 'L':

                break;
            case 'q':
            case 'Q':
                break;
            default:
                cout << "invalid input . try again!" << input_char << endl;
                break;

        }

    }while(input_char != 'q' && input_char != 'Q');

    cout << "Goodbye!" << endl;

    return 0;

}
void add_numbers (int &arrlen){
    cout << "How many numbers are you adding? : ";

    int arrel {};
    int initlen {};

    cin >> arrlen;

    int* array_ptr = new int[arrlen];

    while(initlen < arrlen){
        cout << "enter array element : ";
        cin >> arrel;
        array_ptr[initlen] = arrel;
        initlen++;
    }


    cout << "first three elements are : " << endl;
    
    cout << array_ptr[0] << endl;
    cout << array_ptr[1] << endl;
    cout << array_ptr[2] << endl;

    delete [] array_ptr;


}