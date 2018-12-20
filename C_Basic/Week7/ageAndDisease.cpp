#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 先获取数据输入并计算个年龄段分布数量
    int n, age, rangeCount1 = 0, rangeCount2 = 0, rangeCount3 = 0, rangeCount4 = 0; 
    /* rangeCount对应区间：
    rangeCount1: 1岁 - 18岁
    rangeCount2: 19岁 - 35岁
    rangeCount3: 36岁 - 60岁
    rangeCount4: 60岁 -
    */

    cin >> n; // 获取数据总数
    for (int i = 0; i < n; i++) {
        cin >> age; // 逐个获取年龄并判断所在区间
        if (age >= 1 && age <= 18)
            rangeCount1 += 1;
        else if (age >= 19 && age <= 35)
            rangeCount2 += 1;
        else if (age >= 36 && age <= 60)
            rangeCount3 += 1;
        else
            rangeCount4 += 1;
    }

    // 计算各年龄段占比
    double ageProportion1 = 0.00, ageProportion2 = 0.00, ageProportion3 = 0.00, ageProportion4 = 0.00;

    ageProportion1 = double(rangeCount1) / n * 100; // 数据类型转换，要先把rangeCount由整型转为实型才能获取实型的结果
    ageProportion2 = double(rangeCount2) / n * 100;
    ageProportion3 = double(rangeCount3) / n * 100;
    ageProportion4 = double(rangeCount4) / n * 100;

    //输出结果
    cout << "1-18: " << fixed << setprecision(2) << ageProportion1 << "%" << endl;
    cout << "19-35: " << fixed << setprecision(2) << ageProportion2 << "%" << endl;
    cout << "36-60: " << fixed << setprecision(2) << ageProportion3 << "%" << endl;
    cout << "60-: " << fixed << setprecision(2) << ageProportion4 << "%" << endl;

    return 0;
}