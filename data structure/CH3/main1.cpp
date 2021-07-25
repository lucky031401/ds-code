#include <iostream>
#include <stdlib.h>
#include "String.h"
using namespace std;

int main()
{
    char c[] = "yourcatiscuteabaaa";
    String s(c);
    cout<<s.Find("y");
    return 0;
}
