#include<iostream>
using namespace std;

auto calculatePI(int n) {
    return 4/((n + 1) * (n + 2) * (n + 3));
}
int main() {
    int number;
    cout << "Enter the place up to which you want to calculate value" << endl;
    cin >> number;
    long double res = 3;
    int i = 0;
    while (i < number) {
        double num = calculatePI(i);
        if (i % 2 == 0)
            res += num;
        else
            res -= num;
        ++i;
    }
    cout << res;
}
