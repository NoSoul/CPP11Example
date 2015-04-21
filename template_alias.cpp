#include <stdio.h>
#include <map>
#include <type_traits>

typedef unsigned int UINT;
using uint = unsigned int;
template<typename T> using MyType = std::map<T, char*>;
MyType<int> Map0;
MyType<double> Map1;

int main()
{
    printf("%d\n", std::is_same<UINT, uint>::value);
    return 0;
}
