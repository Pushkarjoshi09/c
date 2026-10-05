#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
