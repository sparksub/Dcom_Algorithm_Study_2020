#include <iostream>
#include <string>
#include <list>
using namespace std;

list<string> result;

int main() {
    string str;
    cin >> str;
    int len = str.length();

    for(int i = 0; i < len; i++)
        result.push_back(str.substr(i, len));

    result.sort();

    for(string res: result)
        cout << res << '\n';

    return 0;
}
