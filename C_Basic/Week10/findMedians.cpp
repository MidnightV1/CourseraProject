#include <iostream>
using namespace std;

int main() {
    int N = 0, medianLeft = 0, medianRight = 0, data[15000] = { 0 }, groupNum = 0, result[15000] = { 0 };

    while (true) {
        cin >> N;

        if (N != 0) {   // 如果N!=0则持续输入
            // 获取数据
            for (int i = 0; i < N; i++) {
                cin >> data[i];
            }

            // 根据中位数规则，N为奇数时，刚好存在N/2个数大于/小于中位数；N为偶数时，则需计算第N/2个数与第N/2 + 1个数的平均值作为中位数
            // 先对每个数在数组中进行比较，找出比这个数大的数的个数
            int count, target = N / 2;
            for (int i = 0; i < N; i++) {
                count = 0; // 初始化计数器
                for (int j = 0; j < N; j++) {
                    if (data[j] > data[i]) {
                        count++;
                    }
                }

                // 第N/2位数
                if (count == target) {
                    medianLeft = data[i];
                    continue;
                }

                // 第N/2 + 1位数
                else if (count == target - 1) {
                    medianRight = data[i];
                    continue;
                }

                // 如果都找到了就结束查找
                if (medianLeft != 0 && medianRight != 0) {
                    break;
                }
            }

            // 按照N的奇偶性判断中位数结果
            if (N % 2 == 1) {
                result[groupNum] = medianLeft;
                groupNum++;
            }
            else if (N % 2 == 0) {
                result[groupNum] = (medianLeft + medianRight) / 2;
                groupNum++;
            }
        }

        else {  // 如果N=0则终止输入并输出结果
            for (int i = 0; i < groupNum; i++) {
                cout << result[i] << endl;
            }
            break;
        }
    }

    return 0;
}