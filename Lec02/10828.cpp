#include <iostream>
#include <stack>
#include <string>
using namespace std;

int num;
stack<int> s;

int main()
{
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        string com;
        cin >> com;

        if(com == "push")
        {
            int N;
            cin >> N;
            s.push(N);
        }
        else if(com == "pop")
        {
            if(s.empty())
                cout << -1 << endl;
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if(com == "size")
            cout << s.size() << endl;
        else if(com == "empty")
        {
            if(s.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if(com == "top")
        {
            if(s.empty())
                cout << -1 << endl;
            else
                cout << s.top() << endl;
        }
    }
}
