#include "external_template.h"
template void Fun<int>(int);
//extern template void Fun<int>(int);

int main()
{
    for(int i = 0; i < 10000; ++i)
    {
        Fun(i);
    }
    return 0;
}
