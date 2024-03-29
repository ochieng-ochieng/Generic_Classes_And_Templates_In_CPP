//This class demonstrates a generic stack
#include<iostream>
using namespace  std;

const int SIZE = 10;

//create a generic stack class
template<class StackType> class Stack{
    StackType stck[SIZE];//holds the stack
    int tos ;//index of top-of-stack
public:
    Stack()
    {
        tos = 0;//initialize stack
    }
    void push(StackType ob);//push object on stack
    StackType pop();//pop object from stack
};

//push an object
//template<> void Stack<> ::push() {}
template<class StackType> void Stack<StackType>::push(StackType ob)
 {
    if(tos == SIZE)
    {
        cout << "Stack is full.\n";
        return;
    }
    stck[tos] = ob;
    tos++;
 }

 //pop an object
 template<class StackType> StackType Stack<StackType>::pop()
 {
    if(tos == 0)
    {
        cout << "Stack is empty.\n";
        return 0; //return null on empty stack
    }
    tos--;
    return stck[tos];
 }

 int main()
 {
     //Demonstrate character stacks
     Stack<char>s1, s2;//create two character stacks
     int i;

     s1.push('a');
     s2.push('x');
     s1.push('b');
     s2.push('y');
     s1.push('c');
     s2.push('z');

     for(i=0; i<3; i++) cout << "Pop s1: " << s1.pop() << "\n";
     for(i=0; i<3; i++) cout << "Pop s2: " << s2.pop() << "\n";

     cout << endl << endl;

     //demonstrate double stacks
     Stack<double>ds1, ds2; //create two double stack

     ds1.push(1.1);
     ds2.push(2.2);
     ds1.push(3.3);
     ds2.push(4.4);
     ds1.push(5.5);
     ds2.push(6.6);

     for(i=0; i<3; i++) cout << "Pop ds1: " << ds1.pop() << "\n";
     for(i=0; i<3; i++) cout << "Pop ds2: " << ds2.pop() << "\n";

     return 0;
 }
