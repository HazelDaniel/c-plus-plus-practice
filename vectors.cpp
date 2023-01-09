#include <iostream>
#include <vector>

using namespace std;

int main (){

    // 1 DIMENSIONAL VECTORS
    vector <int> characters(4);
    // cout << characters.at(0) << endl;
    characters.push_back(1);
    // cout << characters.at(4);
    vector <int> int_vectors(0);
    int append_vector1{0};
    int append_vector2{0};
    cout << "Enter two integers separated by whitespace : " << endl;
    cin >> append_vector1;
    cin >> append_vector2;
    int_vectors.push_back(append_vector1);
    int_vectors.push_back(append_vector2);
    cout << "The " << int_vectors.size() << " integers you entered are : " << append_vector1 << " and " << append_vector2 << endl;
    cout << "New list : " << int_vectors.at(0) << " , " << int_vectors.at(1) << endl;

    // 2 DIMENSIONAL VECTORS
    cout << "============== 2D Vectors =============\n";
    vector<vector<int>> int_vectors_2d {
        {1,2,3},
        {0},
        {7,8,9}
    };
    cout << int_vectors_2d.at(0).at(0) << endl;
    int_vectors_2d.at(1).push_back(2);
    cout << int_vectors_2d.at(1).at(1) << endl;

    // 3 DIMENSIONAL VECTORS. HACK: I think they are more like nested vectors.
    cout << "============== 3D Vectors =============\n";
    vector<vector<vector<int>>> int_vectors_3d {
        {
            {1,2,3},
            {4,5,6}
        },
        {
            {7,8,9},
            {10,11,12}
        },
        {
            {13,14,15},
        }
    };
    cout << int_vectors_3d.at(0).at(0).at(2) << endl;
    int_vectors_3d.at(2).push_back(int_vectors);
    cout << "accessing inputted integers from a 3d array:" << endl << int_vectors_3d.at(2).at(1).at(0) << endl << int_vectors_3d.at(2).at(1).at(1) << endl;

    return 0;
	
}