#pragma once
#include "PuntDeInteresBase.h"
#include <string>

using namespace std;

class PuntDeInteresBotigaSolucio :
    public PuntDeInteresBase
{
public:
    unsigned int getColor();
private:
    std::string m_shop;
};

