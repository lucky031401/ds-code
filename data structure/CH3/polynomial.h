#ifndef POLYNOMIAL_H
#define POLYNPMIAL_H

#include <iostream>
class Term;
class Polynomial{
public:
    Polynomial ();
    ~Polynomial();
    Polynomial operator+(const Polynomial&);
    void NewTerm(const float theCoeff,const int theExp);
    float Eval(float f);
    int getTerms();
    int getCapacity();
    private:
    Term *termArray;
    int capacity;
    int terms;
};

class Term{
friend Polynomial;
private:
    float coef;//coefficient
    int exp;//expotiential
};
#endif
