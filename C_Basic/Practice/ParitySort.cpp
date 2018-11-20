#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];    //��ȡ��������
    }

    //���ȣ�������ż���ֱ�����������ߺ��ұ�
    cout << "��ʼ����" << endl;
    int l = 0, r = 9;   //��left �� right �ֱ�ָ����������
    while (l <= r) {
        bool leftIsOdd = a[l] % 2 == 1;     // ����Ϊ��
        bool rightIsEven = a[r] % 2 == 0;   // ż��Ϊ��
        if (leftIsOdd) {            //��������������������
            l++;
        }
        else if (rightIsEven) {     //����ұ�����ż��������
            r--;
        }
        else if (!leftIsOdd && !rightIsEven) {  //����������򽻻�����λ��
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    //���������֣�l��ߣ�ð�ݣ����˳������򽻻�
    int start = 0, end = l;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //��ż������ð�ݣ�l�ұߣ������˳������򽻻�
    start = l, end = 10;
    for (int i = start; i < end - 1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //������
    cout << "����Ϊ���" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}