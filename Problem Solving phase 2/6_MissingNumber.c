#include <stdio.h>
#include <stdlib.h>

// Function to find the missing number
int missingNumber(int* nums, int numsSize) {
    int expected_sum = numsSize * (numsSize + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < numsSize; i++) {
        actual_sum += nums[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int nums_size;
    printf("Enter the number of elements: ");
    scanf("%d", &nums_size);

    int* nums = (int*)malloc(nums_size * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < nums_size; i++) {
        scanf("%d", &nums[i]);
    }

    int missing_number = missingNumber(nums, nums_size);
    printf("Missing number: %d\n", missing_number);

    free(nums);
    return 0;
}
