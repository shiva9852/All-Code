
#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;           
    int **ptr_to_ptr = &ptr; 
    printf("Value of x: %d\n", x);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Value of *ptr: %d\n", *ptr);
    printf("Value of ptr_to_ptr: %p\n", (void *)ptr_to_ptr);
    printf("Value of *ptr_to_ptr: %p\n", (void *)*ptr_to_ptr);
    printf("Value of **ptr_to_ptr: %d\n", **ptr_to_ptr);

    **ptr_to_ptr = 20;
    printf("Value of x after change: %d\n", x);
    return 0;
}
