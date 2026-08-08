#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number:";
    cin >> a;
    int b;
    cout << "Enter another number:";
    cin >> b;
    int sum = a + b;
    cout << "Sum of two numbers is: " << sum << endl;
    int product = a * b;
    cout << "Product of two numbers is: " << product << endl;
    int difference = a - b;
    cout << "Difference of two numbers is: " << difference << endl;
    int quotient = a / b;
    cout << "Quotient of two numbers is: " << quotient << endl;
    int remainder = a % b;
    cout << "Remainder of two numbers is: " << remainder << endl;
    return 0;
}