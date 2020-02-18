#include <iostream>
using namespace std;

long long int Fibo(int N);
long long int memo[100];

int main() {

    int n;
    cin >> n;
    cout << Fibo(n);
}

long long int Fibo(int N)
{
    if(N == 0)
        return 0;
    else if(N == 1)
        return 1;
    else
    {
        if(memo[N] > 0)
            return memo[N];
        else
        {
            memo[N] = Fibo(N-1) + Fibo(N -2);
            return memo[N];
        }
    }
}