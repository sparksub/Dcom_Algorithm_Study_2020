#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    queue<int> Q;
    for(int i = 1; i < N+1; i++)
        Q.push(i);
    cout << "<";
    while(!Q.empty())
    {
        if(Q.size() == 1)
            break;
        for(int i = 1; i < K; i++)
        {
            int f;
            f = Q.front();
            Q.push(f);
            Q.pop();
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front() << ">";
}