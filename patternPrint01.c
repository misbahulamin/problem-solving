/******************************************************************************

                    Name: Mibahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangsu, China
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        
        for(int j = 1; j<=k; j++)
        {
            printf("%d", j);
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    //printf("\n");
    k = k -4;
    
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        
        for(int j = 1; j<=k; j++)
        {
            printf("%d", j);
        }
        k = k - 2;
        printf("\n");
    }

    return 0;
}
