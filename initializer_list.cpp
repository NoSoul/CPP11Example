#include <stdio.h>
#include <vector>
#include <map>
using namespace std;

void Fun(initializer_list<int> l)
{
    puts(__func__);
    for(auto it : l) {
        printf("%d ", it);
    }
    puts("");
}

int main()
{
    int a = (3 + 4);
    int b = {3 + 4};
    int c(3 + 4);
    int d{3 + 4};
    printf("%d %d %d %d\n", a, b, c, d);
    vector<int> Vectort = {1, 5, 3};
    for(auto i : Vectort) {
        printf("%d ", Vectort[i]);
    }
    puts("");
    map<int, float> Map{{1, 0.1}, {3, 0.2}};
    for(auto i : Map) {
        printf("<%d,%f> ", i.first, i.second);
    }
    puts("");
    Fun({1, 7});
    Fun({});
    return 0;
}
