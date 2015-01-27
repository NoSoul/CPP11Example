#include <stdio.h>

class A
{
public:
    A()
    {
    }
    A(int a)
    {
        _a = a;
    }
    A(int a, double b)
    {
        _a = a;
        _b = b;
    }
    A(int a, double b, char c)
    {
        _a = a;
        _b = b;
        _c = c;
    }
private:
    int _a = 0;
    double _b = 0;
    char _c = 0;
};

class B: public A
{
public:
    using A::A;
    void Fun()
    {
        printf("%d\n", d);
    }
private:
    int d = 1;
};


int main()
{
    B b1;
    B b2(1);
    B b3(1, 2);
    B b4(1, 2, 3);
    printf("%p %p %p %p\n", &b1, &b2, &b3, &b4);
    b1.Fun();
    return 0;
}
