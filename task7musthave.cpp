#include <fstream>
using namespace std;
int main() {
    ofstream file("output.txt");
    file << "Hello, File I/O!";
    file.close();
    return 0;
}