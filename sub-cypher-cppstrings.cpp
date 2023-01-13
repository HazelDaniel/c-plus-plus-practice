#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main (){

    string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cyphers {"XCVBNMSDFGrtyuiopasdfvbnmQWERghjklzxcTYUIIHJKLZqweOPA"};
    string input_text {};//hello
    string selection {};

    cout << std::boolalpha;
    cout << "\n------------------ WELCOME TO SUBSTITUTION CYPHER!!! ------------\n";
    cout << "\a|\t\t\t\t\t\t\t\t|\n-----------------------------------------------------------------\n";

    do{
        cout << "\tEnter: \n";
        cout << "\tD => Decipher text\n";
        cout << "\tC => Cypher text\n";
        cout << "\tQ => quit\n";
        cout << "\t================= your selection: ";
        getline(cin, selection);

        char selected{selection.at(0)};

        

        switch (selected){
            case 'Q':
            case 'q':
                cout << "Goodbye...";
                break;
            case 'D':
            case 'd':
                cout << "\nEnter text to decypher (less than 1001 characters) : ";
                getline(cin,input_text);
                {
                
                    size_t input_index{0};
                    for(char input_char: input_text){

                        size_t cypher_index{0};
                        for(char cypher_char: cyphers){

                            if(cypher_char == input_char){
                                input_text.at(input_index) = alphabets.at(cypher_index);
                            }

                            cypher_index++;
                        }

                        input_index++;
                    }

                }
                    cout << " Your decyphered Text is : " << input_text << endl;
                break;
            case 'C':
            case 'c':
                cout << "\nEnter text to cypher (less than 1001 characters) : ";
                getline(cin,input_text);
                {
                
                    size_t input_index{0};
                    for(char input_char: input_text){

                        size_t alpha_index{0};
                        for(char alpha_char: alphabets){

                            if(alpha_char == input_char){
                                input_text.at(input_index) = cyphers.at(alpha_index);
                            }

                            alpha_index++;
                        }

                        input_index++;
                    }

                }
                cout << " Your cyphered Text is : " << input_text << endl;
                break;

            default:
                cout << "\t\t\t\t\t\t\t\t\tInvalid Option! " << selected << " try again. " << endl;
        }



    }while(selection.at(0) != "Q"[0] && selection.at(0) != "q"[0] && selection.at(0));


    return 0;

}