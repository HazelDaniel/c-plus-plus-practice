#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// PROTOTYPES
void cypher_text(std::string input,const vector<string> &dict);
void decypher_text(std::string input,const vector<string> &dict);

int main (){

    vector<string> cypher_dictionary {{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},{"XCVBNMSDFGrtyuiopa:df>bnmQ WERghjklzxcTYUI<HJKLZqeOPA"}};
    
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
                decypher_text(input_text,cypher_dictionary);
                break;
            case 'C':
            case 'c':
                cypher_text(input_text,cypher_dictionary);
                break;

            default:
                cout << "\t\t\t\t\t\t\t\t\tInvalid Option! " << selected << " try again. " << endl;
        }


    }while(selection.at(0) != "Q"[0] && selection.at(0) != "q"[0] && selection.at(0));

    return 0;

}

void cypher_text(std::string input_text,const vector<string> &dictionary){

    string alphabets {dictionary.at(0)};
    string cyphers {dictionary.at(1)};

    cout << "\nEnter text to cypher (less than 1001 characters) : ";
    getline(cin,input_text);
    
    size_t input_index{0};

    for(char input_char: input_text){

        size_t alpha_index {alphabets.find(input_char)};

        if(alpha_index != string::npos){
            input_text.at(input_index) = cyphers.at(alpha_index);
        }else{
            continue;
        }

        input_index++;
    }

    cout << " Your cyphered Text is : " << input_text << endl;
    
}

void decypher_text(std::string input_text,const vector<string> &dictionary){

    string alphabets {dictionary.at(0)};
    string cyphers {dictionary.at(1)};

    cout << "\nEnter text to cypher (less than 1001 characters) : ";
    getline(cin,input_text);
    
    size_t input_index{0};

    for(char input_char: input_text){

        size_t cypher_index{cyphers.find(input_char)};

        if(cypher_index != string::npos){
            input_text.at(input_index) = alphabets.at(cypher_index);
        }else{
            continue;
        }

        input_index++;
    }

    cout << " Your decyphered Text is : " << input_text << endl;
    
}