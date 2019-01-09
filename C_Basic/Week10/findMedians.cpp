#include <iostream>
using namespace std;

int main() {
    int N = 0, k = 0, medianLeft = 0, medianRight = 0, data[15000] = { 0 }, groupNum = 1, result[15000] = { 0 };

    while (true) {
        cin >> N;

        if (N == 0) {   // 如果N=0则终止输入并输出结果
            for (int i = 0; i < groupNum - 1; i++) {
                cout << result[i] << endl;
            }
            break;
        }
        else {
            // 获取数据
            for (int i = 0; i < N; i++) {
                cin >> data[i]; 
            }

            // 计算中位数的位置k，若N为奇数，则中位数所在位置为k+1；若N为偶数，则中位数为k与k+1的平均值。
            k = N / 2;

            //先计算一组数中K+1的值与K的值
            int count = 0, target = N - k - 1;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (data[j] < data[i]) {
                        count++;
                    }
                }
                // 根据N的奇偶性决定后续处理
                if (count == target) {
                    medianLeft = data[i];
                    count = 0;
                    continue;
                }
                else if (count == target + 1) {
                    medianRight = data[i];
                    count = 0;
                    continue;
                }
                else
                    count = 0;
            }

            // 按照N的奇偶性判断中位数结果
            if (N % 2 == 1) {
                result[groupNum - 1] = medianLeft;
                groupNum++;
            }
            else if (N % 2 == 0) {
                result[groupNum - 1] = (medianLeft + medianRight) / 2;
                groupNum++;
            }
        }
    }

    return 0;
}