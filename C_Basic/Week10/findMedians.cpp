#include <iostream>
using namespace std;

int main() {
    int N = 0, k = 0, medianLeft = 0, medianRight = 0, data[15000] = { 0 }, groupNum = 1, result[15000] = { 0 };

    while (true) {
        cin >> N;

        if (N == 0) {   // ���N=0����ֹ���벢������
            for (int i = 0; i < groupNum - 1; i++) {
                cout << result[i] << endl;
            }
            break;
        }
        else {
            // ��ȡ����
            for (int i = 0; i < N; i++) {
                cin >> data[i]; 
            }

            // ������λ����λ��k����NΪ����������λ������λ��Ϊk+1����NΪż��������λ��Ϊk��k+1��ƽ��ֵ��
            k = N / 2;

            //�ȼ���һ������K+1��ֵ��K��ֵ
            int count = 0, target = N - k - 1;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (data[j] < data[i]) {
                        count++;
                    }
                }
                // ����N����ż�Ծ�����������
                if (count == target) {
                    medianLeft = data[i];
                    count = 0;
                    continue;
                }
                else if (count == target + 1) {
                    medianRight = data[i];
                    count = 0;
                    continue;
                }
                else
                    count = 0;
            }

            // ����N����ż���ж���λ�����
            if (N % 2 == 1) {
                result[groupNum - 1] = medianLeft;
                groupNum++;
            }
            else if (N % 2 == 0) {
                result[groupNum - 1] = (medianLeft + medianRight) / 2;
                groupNum++;
            }
        }
    }

    return 0;
}