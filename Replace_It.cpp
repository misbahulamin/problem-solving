#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, x;
        cin >> s >> x;
        int siz = x.length();
        while(s.find(x)!=-1)
        {
            s.replace(s.find(x), siz, "$");
            //cout << s << endl;
        }
        cout << s << endl;
    }
    return 0;
}