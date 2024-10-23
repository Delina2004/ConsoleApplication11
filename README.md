Customer Number Validator

This C++ project validates customer numbers based on the following format:

The customer number must consist of exactly 6 characters.
The first 2 characters must be alphabetic (A-Z or a-z).
The next 4 characters must be digits (0-9).

File Structure

CustomerNumberValidator.hpp
This header file contains the function declaration of validateCustomerNumber().

CustomerNumberValidator.cpp
This source file contains the function implementation of validateCustomerNumber().

main.cpp
This file contains the main function, which prompts the user for a customer number and checks if it is valid or not.

Code Explanation

validateCustomerNumber() function:

This function takes a string as input and checks:
The length of the string must be 6 characters.
The first two characters must be alphabetic using isalpha().
The last four characters must be digits using isdigit().
