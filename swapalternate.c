#include <stdio.h>

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) 
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    swapAlternate(arr, size);
    printf("Array after swapping alternate elements: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}