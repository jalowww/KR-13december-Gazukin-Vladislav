#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
public:
    void sound() {
        cout << "Some sound";
    }
};
class Dog: public Animal{
public:
    void sound(){
        cout << "Woof!";
    }
};
int main() {
    Dog a;
    a.sound();
    return 0;
}