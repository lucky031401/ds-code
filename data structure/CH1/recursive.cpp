#include <iostream>
using namespace std;
int c(int x,int y);
int main()
{
    cout<<c(13,5);
    return 0;
}

int c(int x,int y)
{
    if(x==y ||y==0)return 1; 
    else return c(x-1,y)+c(x-1,y-1);
}