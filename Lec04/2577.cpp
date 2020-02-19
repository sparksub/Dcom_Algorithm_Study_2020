#include <iostream>
using namespace std;

int result[10] = {0};

int main() {
    int A, B, C, n;
    cin >> A >> B >> C;

    n = A * B * C;

    while(n != 0)
    {
        result[n%10] += 1;
        n /= 10;
    }

    for(int i : result)
        cout << i << '\n';

}
