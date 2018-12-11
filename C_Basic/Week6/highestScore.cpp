#include <iostream>
using namespace std;

int main() {
    int n, score[1000], highestScore;

    // 获取成绩数量
    cin >> n;
    
    // 将成绩存到数组里面
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    // 循环查找最高分
    highestScore = score[0];
    for (int i = 1; i < n; i++) {
        if (highestScore < score[i])
            highestScore = score[i];
    }

    // 输出结果
    cout << highestScore;

    return 0;
}