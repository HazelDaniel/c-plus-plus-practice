#include <iostream>

//////// ARRAYS

using std::cout;
using std::cin;
using std::endl;

int main (){
	// ONE DIMENTIONAL ARRAYS
	char char_array [10] {'a'};
	cout << char_array[0] << endl;
	cout << char_array[1] << endl;
	cout << char_array[2] << endl;
	cout << char_array[3] << endl;
	cout << char_array[4] << endl;
	
	int int_array [] {1,2,3};
	cout << int_array[0] << endl;
	cout << int_array[1] << endl;
	cout << int_array[2] << endl;
	// both int and float arrays get filled with 0s on partial initialization (when the number of elemnts declared is not reached)
	float float_array [10] {0};
	cout << float_array[0] << endl;
	cout << float_array[1] << endl;
	cout << float_array[2] << endl;
	// MULTI-DIMENTIONAL ARRAYS
	// 2d
	double double_2d_array [4] [2] {0};
	cout << double_2d_array[0][0] << " - " << double_2d_array[0][1] << endl;
	cout << double_2d_array[1][0] << " - " << double_2d_array[1][1] << endl;
	cout << double_2d_array[2][0] << " - " << double_2d_array[2][1] << endl;
	cout << double_2d_array[3][0] << " - " << double_2d_array[3][1] << endl;
	// 3d
	int char_3d_array [3][2][2] {
		{1,2,3,4},
		{7,8,9,10},
		{13,14,15,16}
	};
	cout << "index 0 =============================:\n";
	cout << char_3d_array[0][0][0] << " - " << char_3d_array[0][1][0] << endl;
	cout << char_3d_array[1][0][0] << " - " << char_3d_array[1][1][0] << endl;
	cout << char_3d_array[2][0][0] << " - " << char_3d_array[2][1][0] << endl;
	cout << "index 1 =============================:\n";
	cout << char_3d_array[0][0][1] << " - " << char_3d_array[0][1][1] << endl;
	cout << char_3d_array[1][0][1] << " - " << char_3d_array[1][1][1] << endl;
	cout << char_3d_array[2][0][1] << " - " << char_3d_array[2][1][1] << endl;
	// cout << "index 2 =============================:\n";
	// cout << char_3d_array[0][0][2] << " - " << char_3d_array[0][1][2] << endl;
	// cout << char_3d_array[1][0][2] << " - " << char_3d_array[1][1][2] << endl;
	// cout << char_3d_array[2][0][2] << " - " << char_3d_array[2][1][2] << endl;
	// cout << "index 3 =============================:\n";
	// cout << char_3d_array[0][0][3] << " - " << char_3d_array[0][1][3] << endl;
	// cout << char_3d_array[1][0][3] << " - " << char_3d_array[1][1][3] << endl;
	// cout << char_3d_array[2][0][3] << " - " << char_3d_array[2][1][3] << endl;
	
	// getting array inputs
	float float_array_for_input [3] {0};
	cout << "enter three array (elements separated by a space)" << endl;
	cin >> float_array_for_input[0];
	cin >> float_array_for_input[1];
	cin >> float_array_for_input[2];
	cout << "the three elements you entered are : " << float_array_for_input[0] << ", " <<  float_array_for_input[1] << ", " << float_array_for_input[2] << endl;
	
	
	return 0;
    
}