#include <stdio.h>
#include <type_traits>
using namespace std;

enum class PRA : char {C1 = 1, C2};
enum class PRB : unsigned int {D1 = 1, C2, Dbig = 0xfffff0U};
enum PRC {C2 = 1};

int main()
{
    printf("%lu\n", sizeof(PRA::C1));
    printf("%u\n", PRB::Dbig);
    printf("%lu\n", sizeof(PRB::D1));
    printf("%lu\n", sizeof(PRB::Dbig));
    printf("%d\n", is_pod<PRA>::value);
    printf("%d\n", is_pod<PRB>::value);
    PRC a = C2;
    PRA b = PRA::C2;
    printf("%d %d\n", a, b);
    return 0;
}
