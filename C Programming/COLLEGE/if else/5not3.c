// // WAP TO DISPLAY ALL THE NUMBER BETWEEN 1 TO 100 THAT ARE DIVISIBLE BY 5 BUT NOT BY 3
// #include<stdio.h>
// int main(){
//     int n;
//     for(int i=1;i<=100;i++)
//     {
//        if(i%5==0 && i%3!=0)
//        {
//         printf("%d\n",i);
//        }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("%d is even",n);
//     }
//     else
//     {
//         printf("%d is odd",n);
//     }
//     return 0;
// }
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}