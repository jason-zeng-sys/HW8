// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


//  my comment
CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a;
    }
    else
    {
        return a + b;
    }
    
}
