#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int evenCtn = 0, oddCtn = 0;
        for (int i = 0; i < n; i++)
        {
            if(array[i]%2==0)
            {
                evenCtn++;
            }
            else
                oddCtn++;
        }
        //cout<<evenCtn<<" "<<oddCtn<<endl;
        
        int a = n/2;
        if(n % 2 !=0)
            cout << -1 << endl;
        else if(evenCtn == n || oddCtn == n)
        {
            cout<<a<<endl;
        }
        
        else if(evenCtn==oddCtn)
            cout << 0 << endl;

        else if(evenCtn>oddCtn)
            cout << a - oddCtn << endl;
        else
            cout << a - evenCtn << endl;  
    }
    return 0;
}