#include <iostream>
using namespace std;

int main() {
    int trees[10001] = { 0 }, streetLength = 0, areaNum = 0, areaStartNum = 0, areaEndNum = 0, treesRemain = 0; 

    //��ȡ��ʼ������
    cin >> streetLength >> areaNum;

    //��ʼ�����飬������1����������0����û��
    for (int i = 0; i <= streetLength; i++) {
        trees[i] = 1;
    }

    //��ȡ������˵����ݣ�������������Ϣ
    while (true) {
        cin >> areaStartNum >> areaEndNum;

        for (int i = areaStartNum; i <= areaEndNum; i++) {
            if (trees[i] == 1) {
                trees[i] = 0;
            }
        }
        areaNum--;

        if (areaNum == 0) {
            break;
        }
    }

    // ��ȡ���ս��
    for (int j = 0; j <= streetLength; j++) {
        treesRemain += trees[j];
    }

    cout << treesRemain;

    return 0;
}