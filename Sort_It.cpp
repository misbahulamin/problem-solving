#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int clas;
        char section;
        int id;
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
            cin >> array[i].name >> array[i].clas >> array[i].section >>array[i].id>> array[i].mathMarks >> array[i].englishMarks;
        }

        for (int i = 0; i < t - 1; i++)
        {
            for (int j = i + 1; j < t; j++)
            {
                if((array[i].mathMarks + array[i].englishMarks) < (array[j].mathMarks + array[j].englishMarks))
                {
                    swap(array[i], array[j]);
                }
                if((array[i].mathMarks + array[i].englishMarks) == (array[j].mathMarks + array[j].englishMarks) && array[i].id > array[j].id)
                {
                    swap(array[i], array[j]);
                }
            }
        }
        for (int i = 0; i < t; i++)
        {

            cout << array[i].name << " " << array[i].clas << " " << array[i].section << " " << array[i].id<<" "<< array[i].mathMarks << " " << array[i].englishMarks << endl;
            // cin >> array[i].name >> array[i].clas >> array[i].section >> array[i].mathMarks >> array[i].englishMarks;
        }
        return 0;
}