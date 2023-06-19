/******************************************************************************

                    Name: Mibahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangsu, China
*******************************************************************************/
// Call by Reference

#include <stdio.h>

// Function Prototype
void change_value(int* x, int* y);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    change_value(&a, &b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}

// Function to swap two variables by references
void change_value(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x=%d y=%d\n", *x, *y);
}

/*
Output:
x=20 y=10
a=20 b=10

*/
