#include <stdio.h>

template<typename T>
class Ptr
{
public:
    Ptr(T *p)
    {
        _instance = p;
    }
    operator int()const
    {
        if(_instance) {
            return 2;
        }
        return 1;
    }
    explicit operator double()const
    {
        if(_instance) {
            return 0.5;
        }
        return 0.1;
    }
private:
    T *_instance;
};

int main()
{
    int a;
    Ptr<int> p(&a);
    Ptr<double> pd(0);
    printf("%d\n", p + pd);
    printf("%lf\n", (double)(p + pd));
    printf("%lf\n", (double)p + pd);
    printf("%lf\n", (double)p + (double)pd);
    return 0;
}
