#include <iostream>
#include <string>
using namespace std;
int main() {
    string t;
    getline(cin, t);
    cout << t.length() << " letters, ";
    cout << t[0] << " - first letter";
    return 0;
}