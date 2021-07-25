#include <iostream>
#include "String.h"
String::String(const char* init)
{
    StringArray = new char[sizeof(*init)/sizeof(init[0])];
     for(size_t i= 0;init[i]!='\0';i++){
        StringArray[i] = init[i];
     }
    
     f = new int[Length()];
     FailureFunction();
}
int String::Length()
{
    int i = 0;
    for(i= 0;StringArray[i]!='\0';i++);
    return i;
}
void String::PrintString()
{
    std::cout<<StringArray;
}

int String::Find(const char* p)
{
    int posP = 0,posS = 0;
    String pat(p);
    while((posP<pat.Length())&&(posS<Length())){
        if(pat.StringArray[posP]==StringArray[posS]){
            posP++;
            posS++;
        }
        else{
            if(posP == 0)posS++;
            else posP=pat.f[posP-1]+1;
        }
    };
    if(posP < pat.Length())return -1;
    else return posS - pat.Length();
}

void String::FailureFunction()
{
    int lengthP = Length();
    f[0]=-1;
    for(int j = 1;j<lengthP;j++){
        int i = f[j-1];
        while((StringArray[j])!=(StringArray[i+1]) && (i>=0))i = f[i];
        if(StringArray[j] == StringArray[i+1])f[j] = i+1;
        else f[j] = -1;
    }
}