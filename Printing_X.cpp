#include <bits/stdc++.h>
using namespace std;
// Misbahul Amin
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num / 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < (num - 2 * i - 2); j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }
    for (int i = 0; i < num / 2; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    for (int i = num / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < (num - 2 * i - 2); j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }
    return 0;
}
