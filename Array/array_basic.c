#include <stdio.h>

int main()
{
    // Array Implementation in C
    int size;
    printf("Welcome to Basics of Array\n");
    printf("Enter the size of the array you want\n");
    scanf("%d", &size);
    int array1[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element in array\n", (i + 1));
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Your element in array[%d] is %d\n", i, array1[i]);
    
    }

    return 0;
}
