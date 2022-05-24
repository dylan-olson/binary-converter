// convert binary to decimal 
#include <iostream>
#include <string>
#include <cmath>


int main()
{

    // variables 
    std::string binaryValue, originalB; 
    double decimalValue = 0;
    int power = 0;

    // input
    std::cout << "Enter Binary Value: ";
    std::getline(std::cin, binaryValue);

    // save original value 
    originalB = binaryValue;

    // reverse string 
   reverse(binaryValue.begin(), binaryValue.end());

    // loop
    for ( int i = 0; i < binaryValue.length(); i++ ) {
        if (binaryValue[i] == '1') {
            decimalValue += pow(2, power);
            power += 1;
        } else {
            power += 1;
        }
    }

    // output 
    std::cout << "Binary: " << originalB << std::endl;
    std::cout << "Decimal: " << decimalValue << std::endl;

    return 0;
}