#include <iostream>
using namespace std;

int main() {
    int maxOdd = 0, minEven = 100, result, num;

    // ��ȡ���룬���ҵ������������Сż��
    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num % 2 == 1 && num > maxOdd)
            maxOdd = num;
        else if (num % 2 == 0 && num < minEven) {
            minEven = num;
        }
    }

    // �������ֵ���
    result = maxOdd - minEven;
    if (result < 0)
        result = 0 - result;
    cout << result;

    return 0; 
}