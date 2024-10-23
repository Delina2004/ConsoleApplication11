#include <iostream>
#include "CustomerNumberValidator.hpp"

using namespace std;

int main() {
    string customerNumber;

    cout << "Enter a customer number: ";
    cin >> customerNumber;

    if (validateCustomerNumber(customerNumber)) {
        cout << "Customer number is valid." << endl;
    }
    else {
        cout << "Customer number is invalid." << endl;
    }

    return 0;
}
