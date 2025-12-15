#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream file("input.txt");
    string a;
    while (getline(file, a)){
        cout << a << "\n";
    }
    file.close();
    return 0;

}

//Я перепутал файл во время прикрепления сюда, пока готовился к зачету заметил, пойму если не засчитается
