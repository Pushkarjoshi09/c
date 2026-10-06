#include <stdio.h>

int main() {

    int hashSet[100] = {0};

    int arr[] = {10, 20, 30, 20, 40, 10};
    int n = 6;

    for (int i = 0; i < n; i++) {

        if (hashSet[arr[i]] == 1) {
            printf("%d is duplicate\n", arr[i]);
        }
        else {
            hashSet[arr[i]] = 1;
            printf("%d added\n", arr[i]);
        }
    }

    return 0;
}
