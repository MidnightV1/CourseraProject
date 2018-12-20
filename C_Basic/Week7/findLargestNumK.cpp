#include <iostream>
using namespace std;

int main() {
    int n, k, a[1000];

    // 获取参数
    cin >> n >> k;

    // 获取数组
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 开始挑选合适的数
    // 第k大的数意味着有且只有 n - k个数比第k位的数小
    int count = 0, target = n - k; // 设一个计数位记录小于某数的个数
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] < a[i]) //将第i个数与整个数组进行比较，并记录比它小的数的个数
                count += 1;
        }
        // 如果count等于n-k，则这个数就是第k大的，否则重置计数并开始比较下一个数
        if (count == target) { 
            cout << a[i];
            break;
        }
        else
            count = 0;           
    }
    return 0;
}