#include <stdio.h>
void quickSort(int arr[], int low, int high) {
    while (low < high) {
        int i = low, j = high;
        int pivot = arr[low];
        while (i < j) {
            while (i < j && arr[j] >= pivot) j--;
            while (i < j && arr[i] <= pivot) i++;
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        arr[low] = arr[i];
        arr[i] = pivot;
        if (i - low < high - i) {
            quickSort(arr, low, i - 1);
            low = i + 1;
        } else {
            quickSort(arr, i + 1, high);
            high = i - 1;
        }
    }
}
int main() {
    int n, i = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    while (i < n) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    printf("Original array: ");
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    quickSort(arr, 0, n - 1);
    i = 0;
    printf("\nSorted array: ");
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}
