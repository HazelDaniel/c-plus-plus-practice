#include <iostream>
#include <vector>

using namespace std;

int main (){

    char input_char {};
    vector<int> el_list {};


    do{
        cout << "P - Print Numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q/q - Quit\n\n";
        cout << "=========================\n";

        cin >> input_char;

        switch(input_char){
            case 'p':
            case 'P':
                if(el_list.size() != 0){
                    cout << "[ ";

                    for(auto element : el_list){
                        cout << element << " ";
                    }
                        cout << "]\n";
                }else{
                    cout << "[" << "]" << "---- ARRAY LIST EMPTY" << endl;
                }
                break;
            case 'a':
            case 'A':
                    cout << "Enter an element to add : ";
                {

                    int input_prepend{};

                    cin >> input_prepend;
                    // cin.clear();
                    el_list.push_back(input_prepend);
                    cout << "Added element : " << input_prepend << endl;

                }
            break;
            case 'M':
            case 'm':
                {

                    int el_acc {};

                    if(el_list.size() != 0){

                        for(auto element : el_list){
                            el_acc += element;
                        }

                        cout << "the mean of the list is : " << static_cast<double>(el_acc)/el_list.size() << endl;

                    }else{
                        cout << "[" << "]" << "---- ARRAY IS EMPTY . NO MEAN DETERMINED!" << endl;
                    }

                }
                break;
            case 'S':
            case 's':
                {

                    int smallest {el_list.at(0)};

                    if(el_list.size() != 0){

                        for(auto element : el_list){
                            if(element < smallest){
                                smallest = element;
                            }
                        }

                        cout << "the smallest in the list is : " << smallest << endl;

                    }else{
                        cout << "[" << "]" << "---- ARRAY IS EMPTY . NO SMALLEST ELEMENT DETERMINED!" << endl;
                    }

                }
                break;
            case 'l':
            case 'L':
                {

                    int largest {el_list.at(0)};

                    if(el_list.size() != 0){

                        for(auto element : el_list){
                            if(element > largest){
                                largest = element;
                            }
                        }

                        cout << "the largest in the list is : " << largest << endl;

                    }else{
                        cout << "[" << "]" << "---- ARRAY IS EMPTY . NO LARGEST ELEMENT DETERMINED!" << endl;
                    }

                }
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