// drg-CurrencyConverter : Defines the entry point for the console application.
// By: David Garza
// Date: 20200210
// Description: Converting USD to Euros

#include <stdafx.h>
#include <iostream>

int main()
{
    std::cout << "Hello World!";
    
    // Stage 2: Variables
    float fltUSD = 0.0;
    float fltResult = 0.0;
    
    // Stage 4: Input
    std::cout << "\nPlease enter the amount of USD to convert to Euros: ";
    std::cin >> fltUSD;

    // Stage 3: Processing
    fltResult = fltUSD * 0.92;

    // Stage 1: Output
    std::cout << "\nThe conversion amount is: " << fltResult;         
}
