#include <iostream>
#include <stack>
#include <string>
using namespace std;

int T;
string data;
stack<char> s;

int main()
{
    cin >> T;
    cin.ignore();
    while(T--)
    {
        getline(cin, data);
        data += '\n';
        for(char ch : data)
        {
            if(ch == '\n' || ch == ' ')
            {
                while(!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            } else
            {
                s.push(ch);
            }
        }
    }
}
