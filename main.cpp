/***************************
 * Alex Hoffmann
 * 3/7/17
 * Chapter 5 Program
 ****************************/

#include <iostream>

using namespace std;

int main() {

    int firstNum;
    int secondNum;
    int i;

    cout << "Enter two numbers." << endl;
    cout << "First number must be less than the second number you enter." << endl;
    cout << "Enter two numbers" << endl;

    cin >> firstNum >> secondNum;

    i = firstNum;

    while (i < secondNum)
    {
        cout << i << endl;

        i = i + 1;
    }

    return 0;
}
