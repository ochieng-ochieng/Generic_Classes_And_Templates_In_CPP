/*This example uses two generic data types in a
class definition*/
#include<iostream>
using namespace  std;

template<class Type1, class Type2> class MyClass{
    Type1 i;
    Type2 j;
public:
    MyClass(Type1 a, Type2 b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << ' ' << j << "\n";
    }
};

int main()
{
    MyClass<int, double>ob1(10, 0.23);
    MyClass<char, char*>ob2('X', "Templates add power.");

    ob1.show();//show int, double
    ob2.show();//show char, char*

}
