#include <stdio.h>

int remove_Duplicates(int* nums, int numsSize) {
    if (numsSize == 0)
     return 0;
    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
int main() {
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = 10;

    int k = remove_Duplicates(nums, size);
    printf("Number of unique elements: %d\n", k);
    printf("Modified array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
