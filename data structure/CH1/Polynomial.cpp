#include <iostream>
using namespace std;
class Shape{
    //protected 代表父子元素可以繼承的
    protected:
        int width,height;
    public:
        Shape(int a=0,int b=0){
            width = a;
            height = b;
        }
    virtual int area() = 0;    
};
class rectangle:public Shape{
    public:
        //繼承父類別建構子
        rectangle(int a = 0,int b = 0):Shape(a,b){}
        //自訂義函數
        int area(){
            return(width*height);
        }
};
class triangle:public Shape{
    public:
        triangle(int a = 0,int b = 0):Shape(a,b){}
        int area(){
            return (width*height/2);
        }
};
int main()
{
    rectangle r1(10,3);
    triangle t1(10,3);
    cout<<"rectangle area:"<<r1.area()<<endl;
    cout<<"triangle area:"<<t1.area()<<endl;
    return 0;
}