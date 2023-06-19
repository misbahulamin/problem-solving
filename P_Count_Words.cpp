#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool insideWord = false;
    int ctn = 0;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(insideWord==false)
            {
                ctn++;
            }
            insideWord = true;
        }
        else
            insideWord = false;
    }
    cout << ctn << endl;
    return 0;
}