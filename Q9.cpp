#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2)
        cout << "Greater among the 2 is: " << num1;
    else if (num2 > num1)
        cout << "Greate among the 2 is: " << num2;
    else
        cout << "Both numbers are equal";
    return 0;
}