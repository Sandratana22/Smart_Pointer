// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "array_operations.h"

using namespace std; 

int main() {
    calculateArray::intNumbers();
    int total = calculateArray::Sum();

    cout << "The sum of the array is: " << total << endl;

    return 0;
}
