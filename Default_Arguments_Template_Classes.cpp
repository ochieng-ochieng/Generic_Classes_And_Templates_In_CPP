//A generic safe array example.
#include<iostream>
#include<cstdlib>
using namespace  std;

//Here ,int sizee is a non-type argument
template<class X = int, int sizee = 10> class AType{
    X a[sizee];//length of array is passed in sizee
public:
    AType()
    {
        register int i;
        for(i = 0; i < sizee; i++)
            a[i] = i;
    }
    X &operator[](int i);

};

//provide range checking for X.
template<class X, int sizee> X  &AType<X, sizee>::operator[](int i)
{
   if(i < 0 || i > sizee - 1)
   {
       cout << "\nIndex value of ";
       cout << i << " is out-of-bounds.\n";
       exit(1);
   }

   return a[i];
}

int main()
{
    AType<int ,100> ob1;//integer array of size 100
    AType<double> ob2;//double array ,default size
    AType<>defarray;//default  to int array of size 10

    int i;

    cout << "Integer array: ";
    for(i=0; i<100; i++) ob1[i] = i;
    for(i=0; i<100; i++) cout << ob1[i] << " ";
    cout << "\n\n";

    cout << "Double array: ";
    for(i=0; i<10; i++) ob2[i] = (double) i/3;
    for(i=0; i<10; i++) cout << ob2[i] << " ";
    cout << '\n' << endl;

    cout << "defarray array: ";
    for(i=0; i<10; i++) defarray[i] = i;
    for(i=0; i<10; i++) cout << defarray[i] << " ";
    cout << '\n';

    ob1[12] = 100; // generates runtime error


    return 0;
}


