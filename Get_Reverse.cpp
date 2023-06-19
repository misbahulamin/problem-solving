#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int clas;
        char section;
        int mathMarks;
        int englishMarks;
};
int main()
{
        int t;
        cin >> t;
        Person array[t];
        for (int i = 0; i < t; i++)
        {
            cin >> array[i].name >> array[i].clas >> array[i].section >> array[i].mathMarks >> array[i].englishMarks;
        }
        for (int i = t-1; i >= 0; i--)
        {
            cout << array[i].name << " " << array[i].clas << " " << array[i].section << " " << array[i].mathMarks << " " << array[i].englishMarks << endl;
            //cin >> array[i].name >> array[i].clas >> array[i].section >> array[i].mathMarks >> array[i].englishMarks;
        }
        return 0;
}