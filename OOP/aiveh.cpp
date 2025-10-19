#include<iostream>
using namespace std;
class Number {
    int n;
public:
    Number(int n=0) { this->n = n; }
    Number& setValue(int n) {
        this->n = n;
        return *this;   // return reference to current object
    }
    void display() { cout << n << endl; }
};
int main() {
    Number obj;
    obj.setValue(10).display(); // method chaining
}
