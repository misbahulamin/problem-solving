/******************************************************************************

                    Name: Mibahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangsu, China
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n -1;
    int k = 1;
    for(int j =1; j<=n; j++)
    {
        for(int i=0; i<s; i++)
        {
            printf(" ");
        }
        for(int i = 1; i<=k; i++)
        {
            printf("%d", j);
        }
        s--;
        k++;
        printf("\n");
    }

    return 0;
}
