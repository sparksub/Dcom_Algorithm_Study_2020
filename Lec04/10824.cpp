#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C, D;
    string num1 ,num2;
    long long int result;

    cin >> A >> B >> C >> D;

    num1 = to_string(A) + to_string(B);
    num2 = to_string(C) + to_string(D);

    result = stoll(num1) + stoll(num2);

    cout << result;

    return 0;
}
