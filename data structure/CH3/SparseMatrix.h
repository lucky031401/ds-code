#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H
#include <iostream>
class MatrixTerm;
class SparseMatrix
{
    public:
    SparseMatrix(int r,int c,int t);
    //r:rows,c:columns,t:capacity for nonzero item
    SparseMatrix Transpose();
    SparseMatrix operator+(const SparseMatrix&);
    SparseMatrix operator*(const SparseMatrix&);
    void Random();
    private:
    MatrixTerm *smArray;
    int rows,cols,terms,capacity;
};

class MatrixTerm
{
    friend class SparseMatrix;
    private:
    int row,col,value;
};
#endif
