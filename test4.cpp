#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    int a = 10;
    cout << a << endl;
    int b = 20;
    cout << b << endl;
    int c = 30;
    cout << c << endl;
    int d = 40;
    cout << d << endl;
    int e = 50;
    cout << e << endl;
    int k = 60;
    cout << k << endl;
    int l = k - e;
    cout << l << endl;
    system("pause");
    return 0;
}