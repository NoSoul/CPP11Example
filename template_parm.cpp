#include <iostream>
using namespace std;

template <class T>
class X {};

template <class T>
void Y(T& t)
{
    cout << &t << endl;
};

class A {};
typedef struct {} B;
A a;
B b;

int main()
{
    struct C {} c;
    X<A> x1;
    X<B> x2;
    X<C> x3;
    Y(a);
    Y(b);
    Y(c);
    cout << &x1 << " " << &x2 << " " << &x3 << endl;
    return 0;
}
