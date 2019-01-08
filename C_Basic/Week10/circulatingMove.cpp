#include <iostream>
using namespace std;

int main() {
    //获取参数
    int n = 0, m = 0, a[100] = { 0 }, temp = 0;
    cin >> n >> m;

    //获取数列
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    //开始交换
    for (int i = m; i > 0; i--) {
         temp = a[n - 1];
         for (int j = n - 1; j > 0; j--) {
             a[j] = a[j - 1];
         }
         a[0] = temp;
    }

    //输出结果
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}