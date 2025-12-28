/* Algorithm Challenge & Problem Solving
* 48 - Custom Floor Function (Without Built-in floor)
*
* This program implements a custom floor algorithm without using the built-in floor() function in C++.
*
* Floor Rule:
* - For positive numbers, floor returns the integer part only.
* - For negative numbers, floor returns the next smaller integer (further away from zero).
*
* Examples:
*  10.5  -> 10
* -10.5  -> -11
*
* This challenge strengthens understanding of number systems, type casting, and mathematical edge cases.
*/

#include <iostream>
#include <cmath>

using namespace std;

int MyFloor(float Number)
{
    // If the number is positive, simply return the integer part
    // Example: 10.5 -> 10
    if (Number > 0)
        return int(Number);

    // If the number is negative, subtract 1 from the integer part
    // Example: -10.5 -> -11 (floor moves away from zero)
    else
        return int(Number) - 1;
}

float ReadNumber()
{
    float Number;

    // Read a floating-point number from the user
    cout << "Enter Float Number\n";
    cin >> Number;

    return Number;
}

int main()
{
    float Number = ReadNumber();

    // Display custom floor result
    cout << "My Floor = " << MyFloor(Number) << endl;

    // Display C++ built-in floor result for comparison
    cout << "C++ Floor = " << floor(Number) << endl;

    return 0;
}
