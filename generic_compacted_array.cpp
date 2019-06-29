//A generic array compaction function
#include<iostream>
using namespace  std;

template<class X>void compact(
                              X *items, //a pointer to array to be compacted
                              int counter, //number of items in array
                              int start, //starting index of compacted region
                              int endd //ending index of compacted region
                              )
{
    register int i;

    for(i = endd + 1; i < counter; i++, start++)
        items[start] = items[i];

    //For the sake of illustration, the remainder of
    //the array will be zeroed
    for(;start<counter;start++)items[start] = (X) 0;
}

int main()
{
    int nums[7] = {0, 1, 2, 3, 4, 5, 6};
    char str[18] = "Generic Functions";
    int i;

    cout << "Here is uncompacted integer array: ";
    for(i=0; i<7; i++)
        cout << nums[i] << ' ';

    cout << endl;
    cout << endl;

    cout << "Here is uncompacted string: ";
    for(i=0; i<18; i++)
        cout << str[i] << ' ';

    cout << endl;
    cout << endl;

    compact(nums, 7, 2, 4);
    compact(str, 18, 6, 10);

    cout << "Here is compacted integer array: ";
    for(i=0; i<7; i++)
        cout << nums[i] << ' ';

    cout << endl;
    cout << "Here is compacted string: ";
    for(i=0; i<18; i++)
        cout << str[i] << ' ';
    cout << endl;

    return 0;
}
