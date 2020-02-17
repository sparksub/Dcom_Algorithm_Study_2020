#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    queue<int> q;
    while(n--)
    {
        string str;
        int num;
        cin >> str;
        if(str == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if(str == "pop")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(str == "size")
            cout << q.size() << '\n';
        else if(str == "empty")
            cout << (q.empty()? 1:0) << '\n';
        else if(str == "front")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if(str == "back")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
}