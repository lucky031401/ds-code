#include "rectangle.h"
#include <iostream>
using namespace std;

int rectangle::GetHeight(){return height;}
int rectangle::GetWidth(){return width;} 
rectangle::rectangle()
{
    height = 1;
    width = 1;
}
rectangle::~rectangle()
{
    xLow = yLow = height = width = 0;
}
rectangle::rectangle(int a,int b)
{
    height = a;
    width = b;
}

rectangle::rectangle(const rectangle& _src)
{
    height = _src.height;
    width = _src.width;
}

bool rectangle::operator==(const rectangle& _rhs)
{
    //"this" 代表本身對象
    if(this == &_rhs)return true;
    if((width == _rhs.width)&&(height == _rhs.height))return true;
    else return false;
}

rectangle& rectangle::operator = (const rectangle& _rhs)
{
    
    if(this == &_rhs)return(*this);
    height = _rhs.height;
    width = _rhs.width;
    return(*this);
}