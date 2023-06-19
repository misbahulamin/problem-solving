#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    long long int array[n], array2[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    array2[0] = array[0];
    for (int i = 1; i < n; i++)
    {
        array2[i] = array2[i - 1] + array[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << array2[i] << " ";
    }
    return 0;
}
