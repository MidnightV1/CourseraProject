#include <iostream>
using namespace std;

int main() {
    int amount = 0, money_100 = 0, money_50 = 0, money_20 = 0, money_10 = 0, money_5 = 0, money_1 = 0;

    //获取金额
    cin >> amount;
    money_100 = amount / 100;
    money_50 = (amount - money_100 * 100) / 50;
    money_20 = (amount - money_100 * 100 - money_50 * 50) / 20;
    money_10 = (amount - money_100 * 100 - money_50 * 50 - money_20 * 20) / 10;
    money_5 = (amount - money_100 * 100 - money_50 * 50 - money_20 * 20 - money_10 * 10) / 5;
    money_1 = amount - money_100 * 100 - money_50 * 50 - money_20 * 20 - money_10 * 10 - money_5 * 5;

    //输出结果
    cout << money_100 << endl;
    cout << money_50 << endl;
    cout << money_20 << endl;
    cout << money_10 << endl;
    cout << money_5 << endl;
    cout << money_1 << endl;

    return 0;
}