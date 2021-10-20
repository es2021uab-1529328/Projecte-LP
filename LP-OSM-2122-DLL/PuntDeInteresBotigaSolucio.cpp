#include "PuntDeInteresBotigaSolucio.h"
using namespace std;
unsigned int PuntDeInteresBotigaSolucio::getColor()
{
    // no es pot fer un switch case (?)
	if (m_shop == "supermarket")
		return 0xA5BE00;
	else if (m_shop == "tobacco")
		return 0xFFAD69;
	else if (m_shop == "bakery")
		return 0xFFAD69;
	else
		return 0xEFD6AC;
}
