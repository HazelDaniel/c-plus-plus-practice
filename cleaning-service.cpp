#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (){
    const double charge_per_small_room {25};
    const double charge_per_large_room {35};
    const float tax_rate {0.06};
    const int num_days_valid {30};

    int num_small_rooms {0};
    int num_large_rooms {0};

    cout << "How many small rooms would you like cleaned?" << endl;
    cin >> num_small_rooms;
    cout << "How many large rooms would you like cleaned?" << endl;
    cin >> num_large_rooms;
    cout << "Number of small rooms : " << num_small_rooms << endl;
    cout << "Number of large rooms : " << num_large_rooms << endl;
    double charge_for_small_rooms = charge_per_small_room * num_small_rooms;
    double charge_for_large_rooms = charge_per_large_room * num_large_rooms;
    cout << "Price per small room : $" << charge_per_small_room << endl;
    cout << "Price per large room : $" << charge_per_large_room << endl;
    double cost = charge_for_large_rooms + charge_for_small_rooms;
    cout << "Cost : $" << cost << endl;
    double tax = cost * tax_rate;
    cout << "Tax : $" << tax << endl;
    cout << "===================================\n";
    cout << "Total estimate : $" << cost + tax << endl;
    cout << "This estimate is valid for : " << num_days_valid << " days" << endl;
    return 0;

}