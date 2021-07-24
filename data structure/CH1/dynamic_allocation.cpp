#include <iostream>
int main(){
    int *y = new int;
    delete y;
    int *data = new int [10];
    delete []data;
    return 0;
}