#include <iostream>
using namespace std;

int main() {
    //获取输入
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    //冒泡，如果两个数顺序不同就交换
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 10 - i; j++) {
            //与单纯冒泡排序方法不同，增加对奇偶数条件的判断
            //如果左边为偶数，右边为奇数，则也要颠倒顺序
            bool leftIsEven = a[j - 1] % 2 == 0;
            bool rightIsEven = a[j] % 2 == 0;
            if ((leftIsEven && !rightIsEven) ||     //左边为偶数且右边不是偶数时
                (leftIsEven == rightIsEven && a[j - 1] > a[j])) {       //或者两边都为偶数且前边比后边大时，交换顺序
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //输出结果
    cout << "以下为排序结果" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}