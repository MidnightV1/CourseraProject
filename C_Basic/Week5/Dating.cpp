#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a == 1 || a == 3 || a == 5) //������Ϊ1��3��5ʱ���NO
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}