#include <iostream>
using namespace std;

int main() {
    int numberOfBucket, h, r;
    float volumeOfBucket;  // �ݻ�����������˲��ø�����
    int waterNeedDrink = 20;

    // ��ȡͰ����ȼ��뾶
    cin >> h >> r;

    // ����Ͱ���ݻ�����λ�Ǻ���
    volumeOfBucket = (3.14159 * r * r * h);

    // ����Ҫ�ȶ���Ͱˮ��ת��Ϊ�����
    numberOfBucket = waterNeedDrink * 1000 / volumeOfBucket + 1; // �ݻ�һ����Ϊ�����������Ҫ��һͰ��ת��Ϊ��С��λ���м��㣬���ⶪʧ����
    
    // ������
    cout << numberOfBucket;

    return 0;
}