#include <iostream>
using namespace std;

int main() {
    int n, k, a[1000];

    // ��ȡ����
    cin >> n >> k;

    // ��ȡ����
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // ��ʼ��ѡ���ʵ���
    // ��k�������ζ������ֻ�� n - k�����ȵ�kλ����С
    int count = 0, target = n - k; // ��һ������λ��¼С��ĳ���ĸ���
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] < a[i]) //����i����������������бȽϣ�����¼����С�����ĸ���
                count += 1;
        }
        // ���count����n-k������������ǵ�k��ģ��������ü�������ʼ�Ƚ���һ����
        if (count == target) { 
            cout << a[i];
            break;
        }
        else
            count = 0;           
    }
    return 0;
}