#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a == 1 || a == 3 || a == 5) //当日期为1、3、5时输出NO
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}