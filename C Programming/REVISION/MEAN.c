// #include <stdio.h>
// int main() {
//     int n, i;
//     float sum = 0, mean;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     float arr[n];
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%f", &arr[i]);
//         sum += arr[i];
//     }
//     mean = sum / n; 
//     printf("Mean of the given data = %.2f\n", mean);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i;
    float sum_fx = 0, sum_f = 0, mean;

    printf("Enter the number of class intervals: ");
    scanf("%d", &n);

    float lower[n], upper[n], frequency[n], midpoint[n];

    // Input class intervals and frequency
    printf("Enter lower bound, upper bound, and frequency for each class interval:\n");
    for (i = 0; i < n; i++) {
        printf("Class %d (Lower Upper Frequency): ", i + 1);
        scanf("%f %f %f", &lower[i], &upper[i], &frequency[i]);

        // Calculate midpoint
        midpoint[i] = (lower[i] + upper[i]) / 2;

        // Calculate sum of (f_i * x_i)
        sum_fx += frequency[i] * midpoint[i];

        // Calculate sum of frequencies
        sum_f += frequency[i];
    }

    // Calculate mean
    mean = sum_fx / sum_f;

    // Display the result
    printf("\nMean of the given grouped data = %.2f\n", mean);

    return 0;
}

