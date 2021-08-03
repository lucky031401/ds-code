#include <iostream>
using namespace std;

template <class T>
T sum(T* data,const int SIZE)
{
    T sum = 0;
    for(int i = 0;i<SIZE;i++)
    {
        sum+=data[i];
    }
    return sum;
}
int main()
{
    int data1[10] = {1,2,3,4,5,6,7,8,9,10};
    float data2[10] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
    int k;
    float n;
    cout<<sum<int>(data1,10)<<endl;
    cout<<sum<float>(data2,10)<<endl;
    return 0;
}
