#include <iostream>
using namespace std;

int main(){
    int N = 0, K = 0;
 
    while (cin >> N >> K) {
        int M = 1; 
        double price = 200.0;

        for (M; M <= 20; M++) {
            if (double(N * M) - price < 0)
                price = price * (1.0 + double(K) / 100);
            else if (double(N * M) - price >= 0) {
                cout << M << endl;
                break;
            }
        }
        if (M > 20)
            cout << "Impossible" << endl;        
    }
    return 0;
}