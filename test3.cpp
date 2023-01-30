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
    system("pause");
    return 0;
}