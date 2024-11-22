// Write a function that recieves 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().

#include <stdio.h>
#include <math.h>

// Function to calculate sum, average, and standard deviation
void calculate(int numbers[], int size, int *sum, float *average, float *std_dev) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += numbers[i];
    }

    *average = *sum / (float)size;

    float variance = 0;
    for (int i = 0; i < size; i++) {
        variance += pow(numbers[i] - *average, 2);
    }
    variance /= size;
    *std_dev = sqrt(variance);
}

int main() {
    int numbers[5];
    int sum;
    float average, std_dev;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    calculate(numbers, 5, &sum, &average, &std_dev);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}