/******************************************************************************

                    Name: Mibahul Amin
                    Department: Computer Science and Technology
                    Nantong University, Nantong City, Jiangshu, China
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        int array[4];
        for(int i=1; i<=3; i++)
        {
            cin>>array[i];
        }
        int a = array[k];
        if(a==0)
        {
            cout<<"NO"<<endl;
        }
        else if(array[a]==0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

    return 0;
}
