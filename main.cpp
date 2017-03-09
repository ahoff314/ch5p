/***************************
 * Alex Hoffmann
 * 3/9/17
 * Chapter 5 Program
 ****************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int firstNum;
    int secondNum;
    int i;
    int sum;
    int squareSum;

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

        i++;
    }

    i = firstNum;
    sum = 0;

    // Output sum of all even integers between first and second num
    while (i <= secondNum)
    {
        if (i % 2 == 0){
            sum += i;
        }

        i++;
    }

    cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << sum << endl;

    // Output squares of values 1 to 10

    i = 0;
    while (i <= 10){
        cout << i << " " << pow (i, 2) << endl;
        i++;
    }

    // Output square of sum of odd integers
    i = firstNum;
    squareSum = 0;

    while (i <= secondNum)
    {
        if (i % 2 != 0){
            squareSum += pow(i,2);
        }

        i++;
    }

    cout << "Sum of squares of odd integers between " << firstNum << " and " << secondNum << " = " << squareSum << endl;


    // Output all uppercase letters

    i =65;
    while (i <= 90) {

        cout << static_cast<char>(i) << endl;
        i ++;
    }

    return 0;

}
