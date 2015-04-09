#include <iostream>
#include <type_traits>
using namespace std;

int main()
{
    cout << is_rvalue_reference<int>::value << endl;
    cout << is_lvalue_reference<int>::value << endl;
    cout << is_reference<int>::value << endl;
    cout << is_rvalue_reference<int&>::value << endl;
    cout << is_lvalue_reference<int&>::value << endl;
    cout << is_reference<int&>::value << endl;
    cout << is_rvalue_reference<int&&>::value << endl;
    cout << is_lvalue_reference<int&&>::value << endl;
    cout << is_reference<int&&>::value << endl;
    return 0;
}
