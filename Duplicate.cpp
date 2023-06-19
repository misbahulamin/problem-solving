#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j<n; j++)
        {
            if(array[i]==array[j])
            {
                count = 1;
                break;
            }
        }
    }
    if(count == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}