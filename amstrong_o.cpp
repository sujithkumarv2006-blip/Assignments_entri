#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int digits = 0;
    int sum = 0;

    // 1. Count the total number of digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // 2. Calculate the sum of digits raised to the power of total digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        // Using round() avoids floating-point precision issues with pow()
        sum += round(pow(digit, digits));
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    cout << "Armstrong numbers between 1 and 1000: ";

    for (int i = 1; i <= 10000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}