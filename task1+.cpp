#include <iostream>
using namespace std;
int main(){
    double r;
    const double Pi = 3.14159;
    cin >> r;
    double C = 2 * Pi * r;
    double S = Pi * r * r;
    cout << C << " " << S;
    return 0;
}
