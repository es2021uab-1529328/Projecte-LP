#include "PuntDeInteresRestaurantSolucio.h"

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
	if (m_wheelchair)
	{
		if (m_cuisine == "pizza")
			return 0x03FCBA;
		else
			return 0x251351;
	}
	else if (m_cuisine == "chinese")
		return 0xA6D9F7;
	else
		return int();
}
