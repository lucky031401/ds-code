#include <iostream>
using namespace std;
int binary_search(int* A,const int x,const int n);
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10,};
    int x;
    cin>>x;
    if(binary_search(a,x,10)==-1)cout<<x<<" is not found"<<endl;
    else cout<<"found x:"<<binary_search(a,x,10)<<endl;
    return 0;
}

int binary_search(int* A,const int x,const int n)
{
    int middle = n/2;
    int left = 0;
    int right = n-1;
    while(left<=right){
        middle = (left + right)/2;
        if(x>A[middle])right = middle-1;
        else if (x<A[middle])left = middle+1;
        else return middle;
    }
    return -1;
}