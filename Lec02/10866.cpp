#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    deque<int> D;

    while(N--)
    {
        string str;
        cin >> str;
        int num;
        if(str == "push_front")
        {
            cin >> num;
            D.push_front(num);
        }
        else if(str == "push_back")
        {
            cin >> num;
            D.push_back(num);
        }
        else if(str == "pop_front")
        {
            if(D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.front() << '\n';
                D.pop_front();
            }

        }
        else if(str == "pop_back")
        {
            if(D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.back() << '\n';
                D.pop_back();
            }
        }
        else if(str == "size")
            cout << D.size() << '\n';
        else if(str == "empty")
        {
            if(D.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(str == "front")
        {
            if(D.empty())
                cout << -1 << '\n';
            else
                cout << D.front() << '\n';
        }
        else if(str == "back")
        {
            if(D.empty())
                cout << -1 << '\n';
            else
                cout << D.back() << '\n';
        }
    }
}