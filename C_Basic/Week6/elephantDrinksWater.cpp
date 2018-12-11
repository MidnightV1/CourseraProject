#include <iostream>
using namespace std;

int main() {
    int numberOfBucket, h, r;
    float volumeOfBucket;  // 容积非整数，因此采用浮点数
    int waterNeedDrink = 20;

    // 获取桶的深度及半径
    cin >> h >> r;

    // 计算桶的容积，单位是毫升
    volumeOfBucket = (3.14159 * r * r * h);

    // 计算要喝多少桶水并转化为升输出
    numberOfBucket = waterNeedDrink * 1000 / volumeOfBucket + 1; // 容积一定不为整数，因此需要加一桶；转化为最小单位进行计算，避免丢失精度
    
    // 输出结果
    cout << numberOfBucket;

    return 0;
}