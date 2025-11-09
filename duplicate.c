#include <stdio.h>

int findDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return nums[i];
            }
        }
    }
    return -1; // Should never reach here if input guarantees a duplicate
}

int main() {
    int nums[] = {1, 3, 4, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    int duplicate = findDuplicate(nums, size);
    printf("Duplicate number is: %d\n", duplicate);
    return 0;
}
