#include <iostream>
using namespace std;

unsigned int memo[100];
unsigned int Fibo(int N)
{
    memo[0] = 0;
    memo[1] = 1;
    for(int i = 2; i <= N; i++)
    {
        memo[i] = memo[i-2] + memo[i-1];
    }
    return memo[N];
}
int main() {

    int n;
    cin >> n;
    cout << Fibo(n);

}

