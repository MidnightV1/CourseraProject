#include <iostream>
using namespace std;

int main() {
    //��ȡ����
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    //ð�ݣ����������˳��ͬ�ͽ���
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 10 - i; j++) {
            //�뵥��ð�����򷽷���ͬ�����Ӷ���ż���������ж�
            //������Ϊż�����ұ�Ϊ��������ҲҪ�ߵ�˳��
            bool leftIsEven = a[j - 1] % 2 == 0;
            bool rightIsEven = a[j] % 2 == 0;
            if ((leftIsEven && !rightIsEven) ||     //���Ϊż�����ұ߲���ż��ʱ
                (leftIsEven == rightIsEven && a[j - 1] > a[j])) {       //�������߶�Ϊż����ǰ�߱Ⱥ�ߴ�ʱ������˳��
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //������
    cout << "����Ϊ������" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}