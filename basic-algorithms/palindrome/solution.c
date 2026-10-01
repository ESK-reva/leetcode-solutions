#include <stdio.h>

int isPalindrome(int x) {

    if (x < 0) {
        return 0;
    }

    int original = x;
    long long reverse = 0;

    while (x != 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }

    return original == reverse;
}

int main() {

    // Test Case 1 - Typical case
    int num1 = 121;

    printf("Test Case 1: %s\n",
           isPalindrome(num1) ? "true" : "false");


    // Test Case 2 - Edge case
    int num2 = -121;

    printf("Test Case 2: %s\n",
           isPalindrome(num2) ? "true" : "false");

    return 0;
}