#include <iostream>
using namespace std;

int main() {
    char s[500], word;
    int firstLetter = 0, lastLetter = 0, wordLength = 0, longestLength = 0;
    
    cout << "Enter a sentence:" << endl;
    cin.getline(s, 500);

    for (int i = 0; i < 500; i++) {
        if (s[i] == ' ' || s[i] == '.') {
            wordLength = i - firstLetter;
            if (wordLength > longestLength) {
                longestLength = wordLength;
                lastLetter = i;
            }
            firstLetter = i + 1;
            if (s[i] == '.')
                break;
        }
    }

    //Êä³ö½á¹û
    int j = longestLength;
    for (j; j > 0; j--) {
        cout << s[lastLetter - longestLength];
        longestLength--;
    }

    return 0;
}