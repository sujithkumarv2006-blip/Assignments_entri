#include <iostream>


int main() {
    int originalNum, num, reversed_Num = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    // to print Negative numbers are not palindromes
    if (num < 0) {
        std::cout <<" Entered number "<< num << " is not a palindrome." << std::endl;
        return 0;
    }

    originalNum = num;

    //to reverse the number
    while (num != 0) 
    {
        remainder = num % 10;                           // for getting the last digit
        reversed_Num = reversed_Num * 10 + remainder;   // creating reversed Number
        num /= 10;                                      // for removing the last digit
    }

    // Comparing the original number with the reversed number
    if (originalNum == reversed_Num) {
        std::cout <<" Entered number "<< originalNum << " is a palindrome." << std::endl;
    } else {
        std::cout <<" Entered number "<< originalNum << " is not a palindrome." << std::endl;
    }

    return 0;
}
