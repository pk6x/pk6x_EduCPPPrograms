#pragma once
#include <iostream>

class Object
{
public:

    int CalcResult(int a, int b);

};

int Object::CalcResult(int a, int b)
{
    return a + b;
   
} 