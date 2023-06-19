#include<bits/stdc++.h>
using namespace std;
//Misbahul Amin
int main() {
    int a, b, c;
    cin >> a;
    vector<int> array(a);
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }
    cin >> b;
    vector<int> array2(b);
    for (int i = 0; i < b; i++) {
        cin >> array2[i];
    }
    cin >> c;
    array.insert(array.begin() + c, array2.begin(), array2.end());
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    return 0;
}
