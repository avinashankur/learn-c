#include <stdio.h>

int findMostFrequent(int arr[], int size) {
    int maxFrequency = 0, mostFrequent = arr[0];

    for (int i = 0; i < size; i++) {
        int frequency = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency++;

                arr[j] = -1;
            }
        }

        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}

int main() {
    int numbers[] = {1, 2, 2, 3, 4, 2, 5, 2, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = findMostFrequent(numbers, size);

    printf("The most frequent element is: %d\n", result);

    return 0;
}
