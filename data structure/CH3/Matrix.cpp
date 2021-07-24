#include <iostream>
#include "Matrix.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
Matrix::Matrix(int r,int c)
{
    //initialize matrix to all 0
    rows = r;
    cols = c;
    a = new int*[rows];
    for(int i = 0;i < rows; i++)a[i] = new int[cols];
}

void Matrix::Random()
{
    srand(time(NULL));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            a[i][j]=rand()%10;
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0;i < cols;i++)delete [] a[i];
    delete [] a;
}

Matrix Matrix::operator+(const Matrix& _rhs){
    Matrix c(rows,cols);
    if((_rhs.cols!=cols)||(_rhs.rows!=rows))throw invalid_argument("wrong row and col");
    else{
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                c.a[i][j]=a[i][j]+_rhs.a[i][j];
            }
        }
    return c;
    }
}

void Matrix::Print_Matrix()
{
    for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<"\t"<<a[i][j];
            }
            cout<<endl;
        }
}

Matrix Matrix::operator*(const Matrix& _rhs)
{
    Matrix c(rows,_rhs.cols);
    int m = rows,n = cols,p = _rhs.cols,sum=0,i,j,k;
    for(i=0;i<p;i++){
        for(j=0;j<n;j++){
            sum=0;
            for(k=0;k<n;k++)sum+=a[i][k]*_rhs.a[k][j];
            c.a[i][j]=sum;
        }
    }
    return c;
}