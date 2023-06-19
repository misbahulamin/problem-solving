#include <stdio.h>
void printValobasha(int n)
{
    if(n==0) return;
    printValobasha(n-1);
    printf("%d\n", n);
}

int main()
{
    
    int n;
    scanf("%d", &n);
    printValobasha(n);
    return 0;
}