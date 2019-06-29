//overload a function template declaration
#include<iostream>
using namespace  std;

//first version of  f() template
template<class X>void f(X a)
{
    cout << "Inside f(X a)\n";
}

//second version of  f() template
template<class X, class Y>void f(X a, Y b)
{
    cout << "Inside f(X a, Y b)\n";
}

int main()
{
    f(10);//calls f(X)
    f(10, 20);//calls f(X, Y)

    return 0;
}

