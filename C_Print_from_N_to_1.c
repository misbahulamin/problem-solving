#include <stdio.h>
void printValobasha(int n)
{
    printf("%d ", n);
    if(n==1) return;
    printValobasha(n-1);
}

int main()
{
    
    int n;
    scanf("%d", &n);
    printValobasha(n);
    return 0;
}