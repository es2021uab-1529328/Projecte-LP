#pragma once
#include "PuntDeInteresBase.h"
#include <string>
class PuntDeInteresRestaurantSolucio :
    public PuntDeInteresBase
{
public :
    unsigned int getColor();
private:
    std::string m_cuisine; // Tipus de cuina
    bool m_wheelchair; // Facilita accés a persones amb mobilitat reduïda.
};

