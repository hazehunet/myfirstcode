#include <stdio.h>

int main() {
    int n;

    printf("%d 번째 정수를 입력하시오: ",n);
    scanf("%d", &n);

    // Step 2: Initialize an array to store the elements
    int array[n];

    // Step 3: Use a loop to get each element from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Step 4: Sort the arranum_elementsy in descending order
    for (int i = 0; i <  - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Step 5: Print the sorted array
    printf("Array elements from largest to smallest:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}