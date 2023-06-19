/******************************************************************************

                    Name: Mibahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangsu, China
*******************************************************************************/
#include <stdio.h>

int count_before_zero(int array[], int siz)
{
    int cnt = 0;
    for(int i =0 ; i<siz ; i++)
    {
        if(array[i]==0)
        {
            break;
        }
        else cnt++;
    }
    return cnt;
}


int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
 
    int result = count_before_zero(array, n);
    printf("%d", result);

    return 0;
}
