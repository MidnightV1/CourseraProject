#include <iostream>
using namespace std;

int main() {
    int N = 0, medianLeft = 0, medianRight = 0, data[15000] = { 0 }, groupNum = 0, result[15000] = { 0 };

    while (true) {
        cin >> N;

        if (N != 0) {   // ���N!=0���������
            // ��ȡ����
            for (int i = 0; i < N; i++) {
                cin >> data[i];
            }

            // ������λ������NΪ����ʱ���պô���N/2��������/С����λ����NΪż��ʱ����������N/2�������N/2 + 1������ƽ��ֵ��Ϊ��λ��
            // �ȶ�ÿ�����������н��бȽϣ��ҳ��������������ĸ���
            int count, target = N / 2;
            for (int i = 0; i < N; i++) {
                count = 0; // ��ʼ��������
                for (int j = 0; j < N; j++) {
                    if (data[j] > data[i]) {
                        count++;
                    }
                }

                // ��N/2λ��
                if (count == target) {
                    medianLeft = data[i];
                    continue;
                }

                // ��N/2 + 1λ��
                else if (count == target - 1) {
                    medianRight = data[i];
                    continue;
                }

                // ������ҵ��˾ͽ�������
                if (medianLeft != 0 && medianRight != 0) {
                    break;
                }
            }

            // ����N����ż���ж���λ�����
            if (N % 2 == 1) {
                result[groupNum] = medianLeft;
                groupNum++;
            }
            else if (N % 2 == 0) {
                result[groupNum] = (medianLeft + medianRight) / 2;
                groupNum++;
            }
        }

        else {  // ���N=0����ֹ���벢������
            for (int i = 0; i < groupNum; i++) {
                cout << result[i] << endl;
            }
            break;
        }
    }

    return 0;
}