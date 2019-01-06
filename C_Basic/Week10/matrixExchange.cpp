#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[5][5], temp[5],n ,m;
    
    //输入数组
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }

    //输入n和m
    cin >> n >> m;
    if (n > 4 || m > 4)
        cout << "error" << endl;
    else {
        //交换数组
        for (int i = 0; i < 5; i++) {
            temp[i] = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = temp[i];
        }
               
        //输出数组
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++)
                cout << setw(4) << a[i][j];
            cout << endl;
        }
    }

    return 0;
           
}