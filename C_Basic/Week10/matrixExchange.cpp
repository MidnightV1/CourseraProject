#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[5][5] = { 0 }, temp[5], n, m;
    
    //��������
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }

    //����n��m
    cin >> n >> m;
    if (n > 4 || m > 4) {
        cout << "error";
    }
    else {
        //��������
        for (int i = 0; i < 5; i++) {
            temp[i] = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = temp[i];
        }
               
        //�������
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << setw(4) << a[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}