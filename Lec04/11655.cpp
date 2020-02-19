#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin, s);

    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'M')
            s[i] = s[i] + 13;
        else if(s[i] > 'M' && s[i] <= 'Z')
            s[i] = 'A' + 12 - ('Z' - s[i]);
        else if(s[i] >= 'a' && s[i] <= 'm')
            s[i] = s[i] + 13;
        else if(s[i] > 'm' && s[i] <= 'z')
            s[i] = 'a' + 12 - ('z' - s[i]);
    }

    cout << s;
}
