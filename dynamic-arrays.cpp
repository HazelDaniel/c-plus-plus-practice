#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int* add_to_array (int arr_len);
void print_array (int* const array_ptr);


int main (){

    // string input_text {};
    // string selection {};

    cout << std::boolalpha;
    cout << "\n------------------ WELCOME TO DYNAMIC ARRAYS!!! ------------\n";
    cout << "\a|\t\t\t\t\t\t\t\t|\n-----------------------------------------------------------------\n";

    int* array_ptr {nullptr};

    int arr_len{0};
    cout << "How many elements do you want to add ? : ";
    cin >> arr_len;
    array_ptr = add_to_array(arr_len);

    int init_len{0};
    cout << "first three numbers are : " << endl;
    while(init_len < arr_len){
        cout << array_ptr[init_len] << " ";
        init_len ++;
    }

    delete [] array_ptr;

    // do{
    //     cout << "\tEnter: \n";
    //     cout << "\tA => Add array numbers\n";
    //     cout << "\tP => Print array numbers\n";
    //     cout << "\tQ => quit\n";
    //     cout << "\t================= your selection: ";
    //     getline(cin, selection);

    //     char selected{selection.at(0)};

    //     switch (selected){
    //         case 'Q':
    //         case 'q':
    //             // this is where you free up the space. 
    //             delete [] array_ptr;
    //             cout << "Goodbye...";
    //             break;
    //         case 'A':
    //         case 'a':
    //             {
    //                 int arr_len{0};
    //                 cout << "How many elements do you want to add ? : ";
    //                 cin >> arr_len;
    //                 array_ptr = add_to_array(arr_len); // bad practice ! this will cause memory leak .
    //             }
    //             break;
    //         case 'P':
    //         case 'p':

    //             break;

    //         default:
    //             cout << "\t\t\t\t\t\t\t\t\tInvalid Option! " << selected << " try again. " << endl;
    //     }


    // }while(selection.at(0) != "Q"[0] && selection.at(0) != "q"[0] && selection.at(0));

    return 0;

}


int* add_to_array (int arr_len){

    int* new_arr_ptr {nullptr};

    new_arr_ptr = new int[arr_len];

    int arr_ind {0};

    while (arr_ind < arr_len){
        cout << "enter array element : " ;
        cin >> *(new_arr_ptr + arr_ind);
        arr_ind++;
    }

    cout << "insertion complete! enter [P] to show array element." << endl;
    return new_arr_ptr;
}

void print_array (int* const array_ptr){

    cout << "first three numbers are : " << endl;
    cout << array_ptr [0] << array_ptr[1] << array_ptr[2] << endl;

}
