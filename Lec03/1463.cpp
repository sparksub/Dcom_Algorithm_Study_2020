#include <iostream>
using namespace std;

int dp[1000005];
int make_one(int N)
{
    if(N == 1)
        return 0;
    if(dp[N] > 0)
        return dp[N];
    dp[N] = make_one(N-1) + 1;
    if(N%2 == 0)
    {
        int temp = make_one(N/2) + 1;
        if(dp[N] > temp)
            dp[N] = temp;
    }
    if(N%3 == 0)
    {
        int temp = make_one(N/3) + 1;
        if(dp[N] > temp)
            dp[N] = temp;
    }
    return dp[N];
}

int main()
{
    int n;
    cin >> n;
    cout << make_one(n);
}