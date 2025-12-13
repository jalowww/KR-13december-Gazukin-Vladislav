#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    int year;
public:
    void setTitle(string a){
        title = a;
    }
    void setYear(int b){
        year = b;
    }
    string getTitle(){
        return title;
    }
    int getYear(){
        return year;
    }
};
int main(){
    Book lel;
    lel.setTitle("C++");
    lel.setYear(2025);
    cout << lel.getTitle() << " " << lel.getYear();
    return 0;
}