#include <stdio.h>
#include <type_traits>
using namespace std;

class A
{
public:
    A() = default;
    //A(const A &a) = delete;
};

int main()
{
    A a;
    A b(a);
    printf("%d\n", is_pod<A>::value);
    return 0;
}
