#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print (int* arr_ptr , unsigned int size);
int* apply_all ( const int* arr1_ptr, size_t size1, const int* arr2_ptr, size_t size2);

int main (){

    int arr_1 [] {1,2,5,3,6,0};
    int arr_2 [] {100, 200, 300};

    cout << "The resulting array in the array multiplication of : " ;
    print(arr_1, 6);
    cout << " and : ";
    print(arr_2,3);

    int* compound_arr_ptr = apply_all(arr_1,6,arr_2,3);
    
    cout << "is : " << endl;
    print(compound_arr_ptr,18);

    delete [] compound_arr_ptr;

    return 0;
}

void print (int* arr_ptr , unsigned int size){
    cout << "[ ";
    for(size_t i {0}; i  < size; i++){
        cout << *(arr_ptr + i) << " ";
    }
    cout << "]" << endl;

}

int* apply_all ( const int* arr1_ptr, size_t size1, const  int* arr2_ptr, size_t size2){

    int* compound_arr_ptr {nullptr};

    compound_arr_ptr = new int [size1 * size2];
    int compound_arr_counter{0};
    
    for(size_t arr1_ind{0}; arr1_ind < size1; arr1_ind ++){

        int arr1_el {*(arr1_ptr + arr1_ind)};

        for(size_t arr2_ind{0}; arr2_ind < size2; arr2_ind ++){
            *(compound_arr_ptr + compound_arr_counter) = arr1_el * (*(arr2_ptr + arr2_ind));
            compound_arr_counter ++;
        }
    }

    return compound_arr_ptr;

}