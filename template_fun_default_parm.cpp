#include <iostream>
using namespace std;

template <class T1>
void Fun1(T1 t1)
{
    cout << t1 << endl;
}

template <class T1, class T2 = double>
void Fun2(T1 t1 = 0, T2 t2 = 0)
{
    cout << t1 << " " << t2 << endl;
}

int main()
{
    Fun1(0);
    Fun1(1.0f);
    Fun1('a');
    Fun2(1, 2);
    Fun2(3.1f, 4.1f);
    Fun2('a', 'b');
    Fun2('c', 1);
    Fun2(2, 3.1f);

    //why "template <class T1 = double, class T2>" cannot deduce on gcc 4.8.1
    Fun2(3);
    return 0;
}
