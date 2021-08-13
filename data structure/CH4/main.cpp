#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
     Stack <int> a(11);
     Queue <int> t(3);
     a.Push(10);
     //cout<<a.Top()<<endl;
     a.Push(31);
     a.Push(22);
     a.Pop();
     //cout<<a.Top()<<endl;
     t.Push(10);
     cout<<t.Front()<<endl;
     t.Push(3);
     t.Pop();
     cout<<t.Front()<<endl;
     cout<<t.Rear()<<endl;
     t.Push(6);
     t.Push(10);
     t.Push(32);
     t.Push(16);
     cout<<t.Rear();
    return 0;
}