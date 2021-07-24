#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Matrix.h"
#include "String.h"
using namespace std;

int main()
{
    ofstream outFile("my.out",ios::out);
    Matrix a(5,5),b(5,5),c(5,5);
    a.Random();
    b.Random();
    c.Random();
    a.Print_Matrix();
    cout<<endl;
    c.Print_Matrix();
    cout<<endl;
    //a=a+b;
    b=a*c;
    b.Print_Matrix();
    return 0;
}