//demonstrate class  specialization
#include<iostream>
using namespace  std;

template<class T> class MyClass{
    T x;
public:
    MyClass(T a)
    {
        cout << "Inside generic MyClass\n";
        x = a;
    }
    T getx()
    {
        return x;
    }
};

//Explicit specialization for int.
template<> class MyClass<int>{
    int x;
public:
   MyClass(int a)
   {
       cout << "Inside MyClass<int> specialization.\n";
       x = a;
   }
   int getx()
   {
       return x;
   }
};

int main()
{
   MyClass<double>d(10.1);
   cout << "double: " << d.getx() << "\n\n";

   MyClass<int>i(5);
   cout << "int: " << i.getx() << "\n";

    return 0;
}
