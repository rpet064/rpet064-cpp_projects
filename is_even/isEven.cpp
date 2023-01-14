#include <iostream>
#include <string> 
using namespace std;

void checkIsEven(int numInput)
{
    if (numInput % 2 == 0){
        std::cout << numInput << " is even!" << "\n";
    } else {
        std::cout << "Sorry, " << numInput << " is not even" << "\n";
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
    checkIsEven(numInput);

    // catch if user puts in letter instead of number
    if (!std::cin.good())
    {
        throw std::invalid_argument( "Why did you put in a letter?" );
    }
    return 0;
}