#include <stdio.h>

int binarySearch(int nums[], int size, int target) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    // Test Case 1 - Typical case
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    printf("Test Case 1: %d\n",
           binarySearch(nums1, 6, target1));


    // Test Case 2 - Edge case: target not present
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    printf("Test Case 2: %d\n",
           binarySearch(nums2, 6, target2));

    return 0;
}