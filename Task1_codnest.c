#include <stdio.h>
#include <stdlib.h>

void merge_arrays(int* nums1, int m, int* nums2, int n) {
    int arr1 = m - 1;
    int arr2 = n - 1;
    int arrf = m + n - 1;
    while (arr1 >= 0 && arr2 >= 0) {
        if (nums1[arr1] > nums2[arr2]) {
            nums1[arrf] = nums1[arr1];
            arr1--;
        } else {
            nums1[arrf] = nums2[arr2];
            arr2--;
        }
        arrf--;
    }
    while (arr2 >= 0) {
        nums1[arrf] = nums2[arr2];
        arr2--;
        arrf--;
    }
}
int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};
    int m = 3, n = 3;
    merge_arrays(nums1, m, nums2, n);
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    return 0;
}
