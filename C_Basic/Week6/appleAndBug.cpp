#include <iostream>
using namespace std;

int main() {
    // ��ȡ�������
    int n, x, y;
    cin >> n >> x >> y;

    // ������ӳ�ƻ��������
    int eatenApple;
    if (y % x == 0 && y != 0)
        eatenApple = y / x;
    else if (y % x != 0)
        eatenApple = y / x + 1;
    
    // ���ʣ��ƻ������
    int remain = n - eatenApple;
    if (remain > 0)
        cout << remain;
    else
        cout << 0;

    return 0;
}