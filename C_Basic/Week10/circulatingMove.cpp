#include <iostream>
using namespace std;

int main() {
    //��ȡ����
    int n = 0, m = 0, a[100] = { 0 }, temp = 0;
    cin >> n >> m;

    //��ȡ����
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    //��ʼ����
    for (int i = m; i > 0; i--) {
         temp = a[n - 1];
         for (int j = n - 1; j > 0; j--) {
             a[j] = a[j - 1];
         }
         a[0] = temp;
    }

    //������
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}