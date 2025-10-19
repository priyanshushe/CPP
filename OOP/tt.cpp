#include <iostream>
using namespace std;

template <class T>
class Box {
    T value;
public:
    Box(T v) { value = v; }
    T show() { return value; }
};

int main() {
    Box<int> b1(100);       // works with int
    Box<double> b2(99.99);  // works with double
    Box<string> b3("C++");  // works with string

    //b1.show();
    cout<<b1.show()<<endl;
    b2.show();
    cout<<b2.show()<<endl;
    b3.show();
    cout<<b3.show()<<endl;

    return 0;
}
