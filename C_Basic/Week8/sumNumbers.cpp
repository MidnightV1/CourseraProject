#include <iostream>
using namespace std;

int main() {
    int a = 0, temp = 0, result = 0;

    for (int i = 0; i < 6; i++) {
        if (i == 0)
            cin >> a;
        else {
            cin >> temp;
            if (temp < a)
                result += temp;
        }            
    }
    
    cout << result;

    return 0;
}