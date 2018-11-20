#include <iostream>
using namespace std;

int main() {
    int n, a[1000]; //一共n个数，n不超过1000，数组a来保存这些数
    cin >> n;
    // 输入n个数
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //冒泡，开始比较两个数的大小，顺序错了则交换
    cout << "排序开始" << endl;

    for (int i = 0; i < n - 1; i++) {       //多次进行单轮的冒泡，保证所有数字都按照顺序排列
        for (int j = 1; j < n - i; j++) {   //单轮冒泡过程
            if (a[j - 1] > a[j]) {          //如果前面的数比后面的大，则交换位置
                int temp = a[j];            //引入中间变量temp，做两个数的位置交换
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //依次输出结果
    cout << "以下为排序结果" << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}