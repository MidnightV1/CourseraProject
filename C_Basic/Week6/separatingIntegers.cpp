#include <iostream>
using namespace std;

int main() {
    int num, hundreds, tens, digits;

    // ��ȡ����
    cin >> num;

    // �����λ��ֵ
    hundreds = num / 100;
    tens = (num - hundreds * 100) / 10;
    digits = num - hundreds * 100 - tens * 10;

    // ������
    cout << hundreds << endl;
    cout << tens << endl;
    cout << digits << endl;

    return 0;
}