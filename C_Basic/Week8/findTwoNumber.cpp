#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0, a[1000];
    bool isFind = false;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                isFind = true;
            }
        }
    }
    
    if (isFind == false)
        cout << "no" << endl;
    else
        cout << "yes" << endl;

    return 0;
}