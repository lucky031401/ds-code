#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
     Stack <int> a(11);
     a.Push(10);
     cout<<a.Top()<<endl;
     a.Push(31);
     a.Push(22);
     a.Pop();
     cout<<a.Top()<<endl;
    return 0;
}