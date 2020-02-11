// drg-CurrencyConverter : Defines the entry point for the console application.
// By: David Garza
// Date: 20200210
// Description: Converting USD to Euros

#include <iostream> // C++

int main()
{
    std::cout << "Hello World!";
    
    // Stage 2: Variables
    float USD{};
    float result;
    
    // Stage 4: Input
    std::cout << "\nPlease enter the amount of USD to convert to Euros: ";
    std::cin >> USD;

    // Stage 3: Processing
    result = USD * (0.92);

    // Stage 1: Output
    std::cout << "\nThe conversion amount is: " << result;         
}
