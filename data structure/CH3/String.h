#ifndef STRING_H
#define STRING_H
#include <iostream>
class String
{
    public:
    String(const char* init);
    bool operator==(String t);
    bool operator!();
    int Length();
    int Find(const char* p);
    void PrintString();
    void FailureFunction();
    private:
    char* StringArray;
    int* f;
};
#endif