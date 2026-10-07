#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 50;

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}
