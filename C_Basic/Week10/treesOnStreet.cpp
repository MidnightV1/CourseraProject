#include <iostream>
using namespace std;

int main() {
    int trees[10001] = { 0 }, streetLength = 0, areaNum = 0, areaStartNum = 0, areaEndNum = 0, treesRemain = 0; 

    //获取初始化数据
    cin >> streetLength >> areaNum;

    //初始化数组，数组中1代表有树，0代表没有
    for (int i = 0; i <= streetLength; i++) {
        trees[i] = 1;
    }

    //获取各区域端点数据，并更新树的信息
    while (true) {
        cin >> areaStartNum >> areaEndNum;

        for (int i = areaStartNum; i <= areaEndNum; i++) {
            if (trees[i] == 1) {
                trees[i] = 0;
            }
        }
        areaNum--;

        if (areaNum == 0) {
            break;
        }
    }

    // 获取最终结果
    for (int j = 0; j <= streetLength; j++) {
        treesRemain += trees[j];
    }

    cout << treesRemain;

    return 0;
}