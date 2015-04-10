#include <stdio.h>
#include <iostream>
using namespace std;

void FunA(const int &a)
{
    printf("%s const Lvalue ref %d\n", __func__, a);
}

void FunA(const int &&a)
{
    printf("%s cosnt Rvale ref %d\n", __func__, a);
}

void FunA(int &a)
{
    printf("%s Lvalue ref %d\n", __func__, a);
}

void FunA(int &&a)
{
    printf("%s Rvalue ref %d\n", __func__, a);
}

void FunA(double &a)
{
    printf("%s Lvalue ref %lf\n", __func__, a);
}

void FunA(const double &a)
{
    printf("%s cosnt Lvalue ref %lf\n", __func__, a);
}

template<typename P>
void PerfectForward(P &&parm)
{
    FunA(forward<P>(parm));
}

int main()
{
    int a = 1;
    const int b = 2;
    double c = 0.2;
    PerfectForward(a);
    PerfectForward(move(a));
    PerfectForward(b);
    PerfectForward(move(b));
    PerfectForward(c);
    PerfectForward(move(c));
    return 0;
}
