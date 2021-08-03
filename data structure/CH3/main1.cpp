#include <iostream>
#include <stdlib.h>
#include "String.h"
using namespace std;

int main()
{
    char c[] = "yourcatiscute";
    String s(c);
    cout<<s.Find("cat");
    return 0;
}
