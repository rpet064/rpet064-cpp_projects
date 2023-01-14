#include <iostream>
#include <string> 
using namespace std;

// 
void checkIsPrime(int numInput)
{
    if (numInput == 2){
        std::cout << numInput << " is a prime number" << "\n";
    } else if (numInput == 1) {
        std::cout << "Sorry, " << numInput << " is not prime number" << "\n";
    } else if (numInput % 2 == 0) {
        std::cout << "Sorry, " << numInput << " is not prime number" << "\n";
    } else {
        std::cout << numInput << " is a prime number" << "\n";
    }
}

int getNumberInput()
{
    int numInput {};
    std::cout << "Please enter a number" << "\n";
    std::cin >> numInput;
    return numInput;
}

int main()
{
    int numInput {};
    numInput = getNumberInput();
    checkIsPrime(numInput);

    // catch if user puts in letter instead of number
    if (!std::cin.good())
    {
        throw std::invalid_argument( "Why did you put in a letter?");
    }
    return 0;
}