#include <iostream>
using namespace std;

int main() {
    int n, score[1000], highestScore;

    // ��ȡ�ɼ�����
    cin >> n;
    
    // ���ɼ��浽��������
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    // ѭ��������߷�
    highestScore = score[0];
    for (int i = 1; i < n; i++) {
        if (highestScore < score[i])
            highestScore = score[i];
    }

    // ������
    cout << highestScore;

    return 0;
}