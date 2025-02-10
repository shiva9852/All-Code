// #include <stdio.h>

// // Function to sort the array (Bubble Sort)
// void sortArray(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n, i;
//     float median;

//     // Input number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Input elements
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Sort the array
//     sortArray(arr, n);

//     // Calculate median
//     if (n % 2 == 0) {
//         // Even case: Average of two middle elements
//         median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
//     } else {
//         // Odd case: Middle element
//         median = arr[n / 2];
//     }

//     // Output the median
//     printf("Median of the data: %.2f\n", median);

//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i, N = 0, median_class_index;
    float L, F = 0, f, h, median;

    printf("Enter the number of classes: ");
    scanf("%d", &n);

    float lower[n], upper[n], freq[n], cum_freq[n];

    // Input class intervals and frequencies
    for (i = 0; i < n; i++) {
        printf("Enter lower and upper limit of class %d: ", i + 1);
        scanf("%f %f", &lower[i], &upper[i]);

        printf("Enter frequency of class %d: ", i + 1);
        scanf("%f", &freq[i]);

        // Calculate cumulative frequency
        N += freq[i];
        cum_freq[i] = N;
    }

    // Find median class
    int N_by_2 = N / 2;
    for (i = 0; i < n; i++) {
        if (cum_freq[i] >= N_by_2) {
            median_class_index = i;
            break;
        }
    }

    // Assign values for formula
    L = lower[median_class_index];   // Lower boundary of median class
    f = freq[median_class_index];    // Frequency of median class
    F = (median_class_index == 0) ? 0 : cum_freq[median_class_index - 1]; // Cumulative frequency before median class
    h = upper[median_class_index] - lower[median_class_index]; // Class width

    // Calculate Median
    median = L + ((N_by_2 - F) / f) * h;

    // Display result
    printf("\nMedian of the grouped data: %.2f\n", median);

    return 0;
}
