#include <iostream>
#include <cstring>
#include <cctype>


using std::cin;
using std::cout;
using std::endl;

int main (){

    char alphabets[54] {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char cyphers[54] {"XCVBNMSDFGrtyuiopa:df>bnmQWERghjklzxcTYUIIHJKLZq<eOPA"};
    char input_text[1001];//hello
    char selection[1000];

    cout << std::boolalpha;
    cout << "\n------------------ WELCOME TO SUBSTITUTION CYPHER(c-style)!!! -------------------\n";
    cout << "\a|\t\t\t\t\t\t\t\t\t\t|\n---------------------------------------------------------------------------------\n";

    do{
        cout << "\tEnter: \n";
        cout << "\tD => Decipher text\n";
        cout << "\tC => Cypher text\n";
        cout << "\tQ => quit\n";
        cout << "\t================= your selection: ";
        cin.getline(selection, 1000);

        char selected{selection[0]};


        switch (selected){
            case 'Q':
            case 'q':
                cout << "Goodbye...";
                break;
            case 'D':
            case 'd':
                cout << "\nEnter text to decypher (less than 1001 characters) : ";
                cin.getline(input_text,1001);
                {
                
                    size_t input_index{0};
                    for(char input_char: input_text){

                        size_t cypher_index{0};
                        for(char cypher_char: cyphers){

                            if(cypher_char == input_char){
                                input_text[input_index] = alphabets[cypher_index];
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
                cin.getline(input_text,1001);
                {
                
                    size_t input_index{0};
                    for(char input_char: input_text){

                        size_t alpha_index{0};
                        for(char alpha_char: alphabets){

                            if(alpha_char == input_char){
                                input_text[input_index] = cyphers[alpha_index];
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



    }while(selection[0] != "Q"[0] && selection[0] != "q"[0] && selection[0]);


    return 0;

}