#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // int res = a * a;
    // int result = a * a;
    // for (int ctn = 4; ctn <=  b; ctn = ctn + 2)
    // {
    //     result = result + (result * res);
    // }
    // cout << result << endl;
    int result = 0;
    int ctn = 0;
    while(b!=0)
    {

        int res = pow(a, ctn);
        result = result + res;
        ctn = ctn + 2;
        b = b - 2;
    }
    cout << result << enld;
    return 0;
}