// 12S23041 - Lisbeth Panjaitan

#include <stdio.h>

int main() {
    int n, i;
    int numbers[100]; // Array to hold the numbers
    double sum = 0.0; // Variable to hold the sum of the numbers

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Add the number to the sum
    }

    // Assume the first number is the smallest and largest
    int min = numbers[0];
    int max = numbers[0];

    // Loop through the array to find the actual min and max
    for(i = 1; i < n; i++) {
        if(numbers[i] < min) {
            min = numbers[i];
        }
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    double average = sum / n; // Calculate the average

    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", average); // Print the average with 2 digits of precision

    return 0;
}
