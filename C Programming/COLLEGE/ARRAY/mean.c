#include <stdio.h>

int main() 
{
    int n, i;
    float sum = 0, mean;  
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float data[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &data[i]);
        sum += data[i]; // Adding each element to sum
    }

    mean = sum / n; // Calculating mean

    printf("Mean of the given data = %.2f\n", mean);

    return 0;
}
