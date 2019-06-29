#include<iostream>
using namespace std;

template<class Type1, class Type2>void myfunc(Type1 x, Type2 y)
{
    cout << x << ' ' << y << endl;
}

int main()
{
    myfunc(10, "I like C++");
    myfunc(98.6, 19L);

    return 0;
}
