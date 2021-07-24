#include <iostream>
#include <algorithm>
#include "SparseMatrix.h"
#include "Matrix.h"
#include <cstdlib>
#include <ctime>
SparseMatrix::SparseMatrix(int r,int c,int t)
{
    rows = r;
    cols = c;
    terms = t;
    capacity = t;
    smArray = new MatrixTerm[capacity];
}
SparseMatrix SparseMatrix::Transpose()
{

}
SparseMatrix SparseMatrix::operator+(const SparseMatrix& _rhs)
{

}
