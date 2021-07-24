#include "polynomial.h"
#include <iostream>
#include <cmath>
using namespace std;
Polynomial::Polynomial()
{
    //P(x) = 0
    capacity = 1;
    terms = 0;
    termArray = new Term[capacity];
}
Polynomial::~Polynomial(){}
void Polynomial::NewTerm(const float theCoeff,const int theExp)
{
    if(terms == capacity){
        capacity*=2;
        Term *temp = new Term[capacity];
        copy(termArray,termArray+terms, temp);
        delete [] termArray;
        termArray = temp;
    }
    termArray[terms].coef = theCoeff;
    termArray[terms++].exp = theExp;
}; 

float Polynomial::Eval(float f)
{
    int i=0;
    float sum=0.0;
    while(i!=terms){
        sum+=pow(f,termArray[i].exp)*termArray[i].coef;
        i++;
    }
    return sum;
}

Polynomial Polynomial::operator+ (const Polynomial& _rhs)
{
    Polynomial c;
    int aPos = 0,bPos = 0;
    int i = 0;
    while((aPos<terms)&&(bPos<_rhs.terms)){
        if(termArray[aPos].exp==_rhs.termArray[bPos].exp){
            cout<<i<<"condition both:"<<aPos<<endl;
            float t = termArray[aPos].coef + _rhs.termArray[bPos].coef;
            c.NewTerm(t,termArray[aPos].exp);
            aPos++;
            bPos++;
        }
        else if (termArray[aPos].exp<_rhs.termArray[bPos].exp)
        {
            cout<<i<<"condition aPos:"<<aPos<<endl;
            c.NewTerm(termArray[aPos].coef,termArray[aPos].exp);
            cout<<c.termArray[aPos].exp;
            aPos++;
        }
        else
        {
            cout<<i<<"condition:bPos"<<bPos<<endl;
            c.NewTerm(_rhs.termArray[bPos].coef,_rhs.termArray[bPos].exp);
            bPos++;
        }
        i++;
    }
    for (aPos; aPos < terms; aPos++)
        c.NewTerm(termArray[aPos].coef,termArray[aPos].exp);
    for (bPos; bPos < _rhs.terms; bPos++)
        c.NewTerm(_rhs.termArray[bPos].coef,_rhs.termArray[bPos].exp);
    return c;
}

int Polynomial::getTerms()
{
    int aPos = 0;
    for(aPos;aPos<terms;aPos++){
       cout<<"term:"<<aPos<<" ;"<<"coef:"<<termArray[aPos].coef<<" ;"<<"exp:"<<termArray[aPos].exp<<" ;"<<endl;
    }
    return terms;
}

int Polynomial::getCapacity()
{
    return capacity;
}