// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     for (int i = 0; i < size / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5,6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     reverseArray(arr, size);

//     printf("Reversed array: ");
//     printArray(arr, size);

//     return 0;
// }
#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7};
    int size = 7;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
