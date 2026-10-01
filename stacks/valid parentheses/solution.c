#include <stdio.h>
#include <string.h>

int isValid(char s[]) {

    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }

        // Closing brackets
        else {

            if (top == -1) {
                return 0;
            }

            char topChar = stack[top--];

            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == ']' && topChar != '[') ||
                (s[i] == '}' && topChar != '{')) {

                return 0;
            }
        }
    }

    return top == -1;
}

int main() {

    // Test Case 1 - Typical case
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n",
           isValid(s1) ? "true" : "false");


    // Test Case 2 - Edge case
    char s2[] = "(]";

    printf("Test Case 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}