#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {

    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    // Test Case 1 - Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");


    // Test Case 2 - Edge case
    char s2[] = "a";
    char t2[] = "b";

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    return 0;
}