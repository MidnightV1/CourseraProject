#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];    //获取输入数组
    }

    //首先，把奇数偶数分别放在数组的左边和右边
    cout << "开始排序" << endl;
    int l = 0, r = 9;   //用left 和 right 分别指向数组两端
    while (l <= r) {
        bool leftIsOdd = a[l] % 2 == 1;     // 奇数为真
        bool rightIsEven = a[r] % 2 == 0;   // 偶数为真
        if (leftIsOdd) {            //如果左边碰到奇数，跳过
            l++;
        }
        else if (rightIsEven) {     //如果右边碰到偶数，跳过
            r--;
        }
        else if (!leftIsOdd && !rightIsEven) {  //其它情况，则交换两边位置
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    //对奇数部分（l左边）冒泡，如果顺序错了则交换
    int start = 0, end = l;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //对偶数部分冒泡（l右边），如果顺序错了则交换
    start = l, end = 10;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //输出结果
    cout << "以下为结果" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}