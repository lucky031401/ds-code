#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
private:
    int **a,rows,cols;
public:
    Matrix(int r,int c);
    Matrix Transpose(void);
    void Random();
    void Print_Matrix();
    Matrix operator+(const Matrix&);
    Matrix operator*(const Matrix&);
    ~Matrix();
};
class MatrixTerm;
class SparseMatrix{
    public:
    SparseMatrix(int r,int c,int t);
    SparseMatrix Transpose(void);
    SparseMatrix operator+(const SparseMatrix&);
    SparseMatrix operator*(const SparseMatrix&);
    private:
    int rows,cols,terms,capacity;
    MatrixTerm *smArray;
};
class MatrixTerm{
    friend class SparseMatrix;
    private:
    int row,col,value;
};

#endif