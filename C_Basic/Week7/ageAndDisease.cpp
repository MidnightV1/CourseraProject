#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // �Ȼ�ȡ�������벢���������ηֲ�����
    int n, age, rangeCount1 = 0, rangeCount2 = 0, rangeCount3 = 0, rangeCount4 = 0; 
    /* rangeCount��Ӧ���䣺
    rangeCount1: 1�� - 18��
    rangeCount2: 19�� - 35��
    rangeCount3: 36�� - 60��
    rangeCount4: 60�� -
    */

    cin >> n; // ��ȡ��������
    for (int i = 0; i < n; i++) {
        cin >> age; // �����ȡ���䲢�ж���������
        if (age >= 1 && age <= 18)
            rangeCount1 += 1;
        else if (age >= 19 && age <= 35)
            rangeCount2 += 1;
        else if (age >= 36 && age <= 60)
            rangeCount3 += 1;
        else
            rangeCount4 += 1;
    }

    // ����������ռ��
    double ageProportion1 = 0.00, ageProportion2 = 0.00, ageProportion3 = 0.00, ageProportion4 = 0.00;

    ageProportion1 = double(rangeCount1) / n * 100; // ��������ת����Ҫ�Ȱ�rangeCount������תΪʵ�Ͳ��ܻ�ȡʵ�͵Ľ��
    ageProportion2 = double(rangeCount2) / n * 100;
    ageProportion3 = double(rangeCount3) / n * 100;
    ageProportion4 = double(rangeCount4) / n * 100;

    //������
    cout << "1-18: " << fixed << setprecision(2) << ageProportion1 << "%" << endl;
    cout << "19-35: " << fixed << setprecision(2) << ageProportion2 << "%" << endl;
    cout << "36-60: " << fixed << setprecision(2) << ageProportion3 << "%" << endl;
    cout << "60-: " << fixed << setprecision(2) << ageProportion4 << "%" << endl;

    return 0;
}