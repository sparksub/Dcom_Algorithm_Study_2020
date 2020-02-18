#include <iostream>
using namespace std;

int bump[1005];
int fill_box(int n)
{
    if(n == 0) return 1;
    else if(n == 1) return 1;
    else if(bump[n] > 0) return bump[n];
    else
    {
        bump[n] = fill_box(n-1) % 10007 + fill_box(n-2) % 10007;
        return bump[n];
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fill_box(n)%10007;
    return 0;
}
