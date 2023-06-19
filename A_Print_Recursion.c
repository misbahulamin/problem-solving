/******************************************************************************

                    Name: Misbahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangsu, China
*******************************************************************************/
#include <stdio.h>
void printValobasha(int n)
{
    
    if(n == 0) return;
    printf("I love Recursion\n");
    printValobasha(n-1);
}

int main()
{
    
    int n;
    scanf("%d", &n);
    printValobasha(n);
    return 0;
}
