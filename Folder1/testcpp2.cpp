#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    for (int i = 10; i < 20; i = i + 2) {
        v.push_back(i);
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
    cout << "Capacity of v: " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << "Capacity of v after call shrink to fit function: " << v.capacity() << endl;
    system("pause");
    return 0;
}