#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int maxOdd = 0, minEven = 100, result, num;

    // ��ȡ���룬���ҵ��������
    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num % 2 == 1 && num > maxOdd)
            maxOdd = num;
        else if (num % 2 == 0 && num < minEven) {
            minEven = num;
        }
    }

    // �������ֵ���
    result = abs(maxOdd - minEven);
    cout << result;

    return 0; 
}