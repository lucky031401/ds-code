#ifndef RECTANGLE_H
#define RECTANGLE_H
class rectangle
{
public:
    //constructor without parameters
    rectangle();
    //constructor with parameters
    rectangle(int a,int b);
    //copy constructor, call by reference 
    rectangle(const rectangle&);
    ~rectangle();
    bool operator==(const rectangle&);
    rectangle& operator = (const rectangle&);
    int GetHeight();
    int GetWidth();
//data encapsulation
private:
    int xLow,yLow,height,width;
};
#endif