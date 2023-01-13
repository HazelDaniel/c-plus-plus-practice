#include <iostream>
#include <cstring>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main (){

    // char alphabets[53] {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    // char cyphers[53] {"xWGmanIkYyqOpiPVBHMsdDhATEXwgMANiKyYQoPIpvbhmSDdHate"};
    // char input_text [1000] {};//how are you today?
    // char selection[1] {};

    // cout << std::boolalpha;

    // do{
    //     cout << "\n Press: \n";
    //     cout << "D => Decipher text\n";
    //     cout << "C => Cypher text\n";
    //     cout << "Q => quit\n";
    //     cout << "================= your selection: ";
    //     cin.getline(selection,1);

    //     char selected{selection[0]};

    //     switch (selected){
    //         case 'Q':
    //         case 'q':
    //             break;
    //         case 'D':
    //         case 'd':
    //             cout << "Enter text to decypher (less than 1001 characters) : ";
    //             cin.getline(input_text,1000);
    //             {

    //             char assigned_input_text[strlen(input_text) + 1];

    //             for(size_t i{0}; i < strlen(input_text); i++){
    //                 for(size_t cypher_index{0}; cypher_index < strlen(cyphers); cypher_index++){
    //                     char cypher_char {cyphers[cypher_index]};
    //                     if(cypher_char == input_text[i]){
    //                         cout << cyphers[cypher_index] << " " << i << endl;
    //                         assigned_input_text[i] = alphabets[cypher_index];
    //                     }
    //                 }
    //             }

    //             cout << " Your cyphered Text is : " << assigned_input_text << endl;
    //             }
    //             break;
    //         case 'C':
    //         case 'c':
    //             cout << "Enter text to cypher (less than 1001 characters) : ";
    //             cin.getline(input_text,1000);
    //             {

    //             char assigned_input_text[strlen(input_text) + 1];

    //             for(size_t i{0}; i < strlen(input_text); i++){
    //                 for(size_t alpha_index{0}; alpha_index < strlen(alphabets); alpha_index++){
    //                     char alpha_char {alphabets[alpha_index]};
    //                     if(alpha_char == input_text[i]){
    //                         cout << cyphers[alpha_index] << " " << i << endl;
    //                         assigned_input_text[i] = cyphers[alpha_index];
    //                     }
    //                 }
    //             }

    //             cout << " Your cyphered Text is : " << assigned_input_text << endl;
    //             }

    //             break;

    //         default:
    //             cout << "Invalid Option! " << selected << " try again. " << endl;
    //     }



    // }while(selection[0] != "Q"[0] && selection[0] != "q"[0] && selection[0]);


    return 0;

}