#include "House.h"

int main()
{
	Build_House* simple_home = new Build_House;
	simple_home->Build(create_SimpleHouse());
	cout << "Price your home " << simple_home->Quantity() << " $";
	Build_House* elite_home = new Build_House;
	elite_home->Build(create_EliteHouse());
	cout << "Price your home " << elite_home->Quantity() << " $";

}