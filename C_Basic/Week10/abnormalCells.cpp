#include <iostream>
using namespace std;

int main() {
    int N = 0, abnormalCellNum = 0, a[100][100] = { 0 };
    //�������������
    cin >> N;

    //�����������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> a[i][j];
    }

    //�ж��Ƿ�Ϊ�쳣ϸ��
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            if (a[i - 1][j] - a[i][j] >= 50 && a[i + 1][j] - a[i][j] >= 50 && a[i][j - 1] - a[i][j] >= 50 && a[i][j + 1] - a[i][j] >= 50)
                abnormalCellNum++;
        }
    }

    //������
    cout << abnormalCellNum << endl;

    return 0;
}