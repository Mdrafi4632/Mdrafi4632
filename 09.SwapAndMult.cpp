#include <iostream>

using namespace std;

// Function which reads in 2 integers from the user
void get2integers (int& num1, int& num2) {
     cin >> num1 >> num2;
}

// print 2 intergers after all the calculation with a space
void print2integers(int& num1, int& num2) {
    cout << num1 << " " << num2 << endl;
}

// function used for the swap
void swap (int& num1, int& num2) {
    int swap = num1;
    num1 = num2;
    num2 = swap;
}

// function used for the sawp and multiply
void swapAndMult (int& num1, int& num2, int mult) {
    swap(num1, num2);
    num1 *= mult;
    num2 *= mult;
}

int main() {
    int num1, num2, mult;

    // output of 2 integers
    get2integers(num1, num2);
    cout << "Input two numbers: ";
    // print 2 intergers
    print2integers(num1, num2);

    swap(num1, num2);
    // output for swaping 2 integers
    cout << "After swap: " << endl;
    print2integers(num1, num2);

    cin >> mult;
    // out for multiplying function
    cout << "Enter the multiplier: ";
    cout << mult << endl;

    swapAndMult(num1, num2, mult);
    // the final result after all calculations
    cout << "After swap and mult: " << endl; 
    print2integers(num1, num2);

    return 0;
}