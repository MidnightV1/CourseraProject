#include <iostream>
using namespace std;

int main() {
    int n, a[1000]; //һ��n������n������1000������a��������Щ��
    cin >> n;
    // ����n����
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //ð�ݣ���ʼ�Ƚ��������Ĵ�С��˳������򽻻�
    cout << "����ʼ" << endl;

    for (int i = 0; i < n - 1; i++) {       //��ν��е��ֵ�ð�ݣ���֤�������ֶ�����˳������
        for (int j = 1; j < n - i; j++) {   //����ð�ݹ���
            if (a[j - 1] > a[j]) {          //���ǰ������Ⱥ���Ĵ��򽻻�λ��
                int temp = a[j];            //�����м����temp������������λ�ý���
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    //����������
    cout << "����Ϊ������" << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}