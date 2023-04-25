#include <stdio.h>

int Search(int arr[], int x, int n) {
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] > x ) {
            right = mid - 1;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int i, j, num, find, n, result;

    printf("enter the size of the integer = ");
    scanf("%d", &num);

    int arr[num];

    printf("enter %d numbers.\n", num);

    for (i = 0; i < num; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input array is: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted integer are: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = sizeof(arr) / sizeof(arr[0]);

    printf("size of integer %d\n", n);
    printf("Enter the number you want to search:\n");
    scanf("%d", &find);

    result = Search(arr, find, n);

    if (result == -1) {
        printf("Number is not in array.\n");
    }
    else {
        printf("Number is found in index %d.\n", result);
    }

    return 0;
}
