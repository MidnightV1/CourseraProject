#include <iostream>
using namespace std;

int n, x, y;
int main() {
    // 获取输入参数
    cin >> n >> x >> y;

    // 计算虫子吃苹果的数量
    int eatenApple;
    if (y % x == 0 && y != 0)
        eatenApple = y / x;
    else if (y % x != 0)
        eatenApple = y / x + 1;
    
    // 输出剩余苹果数量
    int remain = n - eatenApple;
    if (remain > 0)
        cout << remain;
    else
        cout << 0;

    return 0;
}