#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int maxOdd = 0, minEven = 100, result, num;

    // 获取输入，并找到最大奇数
    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num % 2 == 1 && num > maxOdd)
            maxOdd = num;
        else if (num % 2 == 0 && num < minEven) {
            minEven = num;
        }
    }

    // 计算绝对值结果
    result = abs(maxOdd - minEven);
    cout << result;

    return 0; 
}