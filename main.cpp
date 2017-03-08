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
    int sum;

    cout << "Enter two numbers." << endl;
    cout << "First number must be less than the second number you enter." << endl;
    cout << "Enter numbers:" << endl;

    cin >> firstNum >> secondNum;

    i = firstNum;

    // Output odd integers between first and second num
    while (i <= secondNum)
    {
        if (i % 2 != 0){
            cout << i << endl;
        }

        i += 1;
    }

    i = firstNum;
    sum = 0;

    // Output sum of all even integers between first and second num
    while (i <= secondNum)
    {
        if (i % 2 == 0){
            sum += i;
        }

        i += 1;
    }

    cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << sum << endl;

    return 0;
}
