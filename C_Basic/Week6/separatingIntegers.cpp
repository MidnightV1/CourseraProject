#include <iostream>
using namespace std;

int main() {
    int num, hundreds, tens, digits;

    // 获取输入
    cin >> num;

    // 计算各位数值
    hundreds = num / 100;
    tens = (num - hundreds * 100) / 10;
    digits = num - hundreds * 100 - tens * 10;

    // 输出结果
    cout << hundreds << endl;
    cout << tens << endl;
    cout << digits << endl;

    return 0;
}