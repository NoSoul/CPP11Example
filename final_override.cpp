#include <stdio.h>

class A
{
public:
    virtual ~A()
    {
    }
    virtual void Fun1()
    {
        puts("A::Fun1");
    }
    virtual void Fun2()final
    {
        puts("A::Fun2");
    }
};

class B: public A
{
public:
    virtual void Fun1()override
    {
        puts("B::Fun1");
    }
    void Fun3()
    {
        puts("B::Fun3");
    }
};

int main()
{
    B b;
    b.Fun1();
    b.Fun2();
    A *a = new A;
    a->Fun1();
    a->Fun2();
    delete a;
    a = new B();
    a->Fun1();
    a->Fun2();
    delete a;
    return 0;
}
