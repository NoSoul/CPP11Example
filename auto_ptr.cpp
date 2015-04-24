#include <stdio.h>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> up1(new int(11));
    printf("%d\n", *up1);
    unique_ptr<int> up2 = move(up1);
    printf("%d\n", *up2);
    up2.reset();
    shared_ptr<int> sp1(new int(22));
    shared_ptr<int> sp2 = sp1;
    printf("%d %d\n", *sp1, *sp2);
    sp1.reset();
    printf("%d\n", *sp2);
    weak_ptr<int> wp = sp2;
    auto sp3 = wp.lock();
    if(sp3 == nullptr) {
        printf("null\n");
    } else {
        printf("still %d\n", *sp3);
    }
    sp2.reset();
    sp3.reset();
    sp3 = wp.lock();
    if(sp3 == nullptr) {
        printf("null\n");
    } else {
        printf("still %d\n", *sp3);
    }
    return 0;
}
