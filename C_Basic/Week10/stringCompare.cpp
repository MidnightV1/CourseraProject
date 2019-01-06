#include <iostream>
using namespace std;

int main() {
    char s1[80], s2[80], result;
    int i = 0;

    cout << "Enter first sentence" << endl;
    cin.getline(s1, 80);
    cout << "Enter second sentence" << endl;
    cin.getline(s2, 80);

    while ((s1[i] != '\0' && (s1[i] == s2[i])) || s1[i] - s2[i] == 32 || s2[i] - s1[i] == 32) {
        i++;
    }

    if (s1[i] > 96)
        s1[i] = s1[i] - 32;
    else if (s2[i] > 96)
        s2[i] = s2[i] - 32;
    
    if (s1[i] > s2[i])
        result = '>';
    else if (s1[i] < s2[i])
        result = '<';
    else
        result = '=';

    cout << result << endl;

    return 0;
}