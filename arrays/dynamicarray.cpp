#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    // initializing a dynamic array
    int* arr = new int[size];  // allocate memory
    // initializing array elements
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;  // corrected index

    // printing the array elements
    cout << "Elements of the array are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // freeing-up memory space by deleting arr
    delete[] arr;

    return 0;
}
