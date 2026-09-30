#include <stdio.h>

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No solution\n");
}

int main() {

    // Test Case 1 - Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;

    printf("Test Case 1: ");
    twoSum(nums1, 4, target1);


    // Test Case 2 - Edge case
    int nums2[] = {3, 3};
    int target2 = 6;

    printf("Test Case 2: ");
    twoSum(nums2, 2, target2);

    return 0;
}