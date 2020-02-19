#include <iostream>
#include <string>
using namespace std;

int N[26];

int main() {
    string s;

    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        N[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
        cout << N[i] << ' ';
}
