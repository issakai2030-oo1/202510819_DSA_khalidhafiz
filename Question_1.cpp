
#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "\033[33m";

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "\033[0m";

    // Calling the function
    swapNumbers(&x, &y);
    cout << "\033[32m";

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "\033[0m";

    return 0;
}
