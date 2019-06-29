//A generic safe array example.
#include<iostream>
#include<cstdlib>
using namespace  std;

const int SIZE = 10;

template<class X> class AType{
    X a[SIZE];
public:
    AType()
    {
        register int i;
        for(i = 0; i < SIZE; i++)
            a[i] = i;
    }
    X &operator[](int i);

};

//provide range checking for X.
template<class X> X  &AType<X>::operator[](int i)
{
   if(i < 0 || i > SIZE - 1)
   {
       cout << "\nIndex value of ";
       cout << i << " is out-of-bounds.\n";
       exit(1);
   }

   return a[i];
}

int main()
{
    AType<int> ob1;//integer array
    AType<double> ob2;//double array

    int i;

    cout << "Integer array: ";
    for(i=0; i<SIZE; i++) ob1[i] = i;
    for(i=0; i<SIZE; i++) cout << ob1[i] << " ";
    cout << "\n\n";

    cout << "Double array: ";
    for(i=0; i<SIZE; i++) ob2[i] = (double) i/3;
    for(i=0; i<SIZE; i++) cout << ob2[i] << " ";
    cout << '\n' << endl;

    ob1[12] = 100; // generates runtime error


    return 0;
}
