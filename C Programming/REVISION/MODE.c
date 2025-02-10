// #include <stdio.h>

// int main() {
//     int n, i, j, maxCount = 0, mode;
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];

//     // Input elements
//     printf("Enter %d elements: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Finding mode
//     for (i = 0; i < n; i++) {
//         int count = 0;
//         for (j = 0; j < n; j++) {
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }
//         if (count > maxCount) {
//             maxCount = count;
//             mode = arr[i];
//         }
//     }

//     // Display result
//     if (maxCount > 1) {
//         printf("Mode of the given data: %d (appears %d times)\n", mode, maxCount);
//     } else {
//         printf("No mode found (all values appear only once)\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i, modalClass;
    float L, f1, f0, f2, h, mode;

    printf("Enter the number of classes: ");
    scanf("%d", &n);

    float lower[n], upper[n], freq[n];

    // Input class intervals and their frequencies
    for (i = 0; i < n; i++) {
        printf("Enter lower and upper limit of class %d: ", i + 1);
        scanf("%f %f", &lower[i], &upper[i]);
        printf("Enter frequency of class %d: ", i + 1);
        scanf("%f", &freq[i]);
    }

    // Find modal class (highest frequency)
    modalClass = 0;
    for (i = 1; i < n; i++) {
        if (freq[i] > freq[modalClass]) {
            modalClass = i;
        }
    }

    // Assign values for calculation
    L = lower[modalClass];   // Lower boundary of modal class
    f1 = freq[modalClass];   // Frequency of modal class
    f0 = (modalClass > 0) ? freq[modalClass - 1] : 0;  // Preceding frequency
    f2 = (modalClass < n - 1) ? freq[modalClass + 1] : 0; // Succeeding frequency
    h = upper[modalClass] - lower[modalClass];  // Class width

    // Calculate mode
    mode = L + ((f1 - f0) / (2 * f1 - f0 - f2)) * h;

    // Display result
    printf("\nMode of the grouped data: %.2f\n", mode);

    return 0;
}
