#include <iostream>
#include "rectangle.h"
using namespace std;
int main(){
    rectangle r(2,5),s(3,3);
    rectangle *t = &s;//t is a pointer to class object s
    if(r.GetHeight()*r.GetWidth()>t->GetHeight()*t->GetWidth())cout<<"r";
    else cout<<"s";
    cout<< "has the greater area"<<endl;
    rectangle o;
    //without parameter
    cout<<o.GetWidth()<<endl;
    rectangle ref(r);
    cout<<ref.GetWidth();
    if(r==ref)cout<<"true";
    else cout<<"false";
    return 0;
}