#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int sum = 0;
    int i = 1;
    while (i <= N) {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}