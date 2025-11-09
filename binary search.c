#include <stdio.h>

void findAllOccurrences(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid, count = 0;
    int foundIndex = -1;

    // Binary search to find one occurrence
    while (low <= high) {
        count++;
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex == -1) {
        printf("Element not found\n");
        printf("Comparisons made: %d\n", count);
        return;
    }

    // Scan left
    int left = foundIndex;
 while (left >= 0 && arr[left] == target) {
        left--;
        count++;
    }

    // Scan right
    int right = foundIndex + 1;
    while (right < size && arr[right] == target) {
        right++;
        count++;
    }

    // Print all indices
    printf("Element %d found at indices: ", target);
    for (int i = left + 1; i < right; i++) {
        printf("%d ", i);
    }
    printf("\nTotal comparisons made: %d\n", count);
}

int main() {
    int size, target;

    // Take array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Take array elements (must be sorted)
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Take target value
    printf("Enter the target value to search: ");
    scanf("%d", &target);

    findAllOccurrences(arr, size, target);

    return 0;
}
