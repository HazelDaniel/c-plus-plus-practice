#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main (){

    int score{};
    char grade{};

    cout << "INPUT YOUR GRADE SCORE (0 - 100) : " << endl;
    cin >> score;
    
    if(score && score > -1 && score <= 100){
        if(score >= 70){
        grade = 'A';
        cout << "Congrats! you got an " << grade << (score >= 90 ? "+" : "") << endl;
        }else if (score >= 60){
            grade = 'B';
            cout << "Nice score! that's a " << grade << endl;
        }else if (score >= 50){
            grade = 'C';
            cout << "Good but it's an average . grade : " << grade << endl;
        }else if(score >= 45){
            grade = 'D';
            cout << "That's almost average, you got lucky. grade : " << grade << endl;
        }else if (score >= 40){
            grade = 'E';
            cout << "Hey that's a bad score! Try harder next time. grade : " << grade << endl;
        }else {
            grade = 'F';

            char confirmation {};

            cout << "Are you sure (Y/N)?" << endl;
            cin >> confirmation;

            switch(confirmation){
                case 'Y':
                case 'y':
                    cout << "Oh! that's too bad. try harder next time" << endl;
                    break;
                case 'N':
                case 'n':
                    cout << "try again!" << endl;
                    break;
                default:
                    cout << "Wrong input!" << endl;
            }

        }
    }else{
        cout << "INVALID SCORE!" << endl;
    }

    return 0;

}
