// code for array decay
#include <iostream>
using namespace std;

void aDecay(int* p)
{
    cout << "Modified size of array is by "
            " passing by value: ";
    cout << sizeof(p) << endl;
}

int main()
{
    int a[7] = {
        1, 2, 3, 4, 5, 6, 7,
    };

    cout << "Actual size of array is: ";
    cout << sizeof(a) << endl;

    aDecay(a);

    return 0;
}
