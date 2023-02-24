#include "House.h"

int Build_House::Quantity()
{
	int all_part = 0;
	for (size_t i = 0; i < home.size(); i++)
		all_part += home[i]->Quantity();
	return all_part;
}

Build_House* create_SimpleHouse()
{
	cout << "Now we build simple home " << endl;
	Build_House* cr = new Build_House;
	int num_roof = cr->Get_roof();
	int num_windows = cr->Get_windows();
	int num_walls = cr->get_walls();
	int num_floor = cr->Get_floor();
	cout << "Simple house have:" << endl;
	for (int i = 0; i < num_roof; i++)
		cr->Build(new Roof);
	cout << num_roof << " roofs" << endl;
	for (int i = 0; i < num_windows; i++)
		cr->Build(new Windows);
	cout << num_windows << " windows" << endl;
	for (int i = 0; i < num_walls; i++)
		cr->Build(new Walls);
	cout << num_walls << " walls" << endl;
	for (int i = 0; i < num_floor; i++)
		cr->Build(new Floor);
	cout << num_floor << " floor" << endl;
	return cr;
}

Build_House* create_EliteHouse()
{
	cout << "\n\nNow we build elite home " << endl;
	Build_House* cr = new Build_House;
	int num_roof = cr->Get_roof();
	int num_windows = cr->Get_windows();
	int num_walls = cr->get_walls();
	int num_floor = cr->Get_floor();
	int num_pool = cr->Get_pools();
	
	cout << "Elite house have:" << endl;
	for (int i = 0; i < num_roof; i++)
		cr->Build(new Roof);
	cout << num_roof << " roofs" << endl;
	for (int i = 0; i < num_windows; i++)
		cr->Build(new Windows);
	cout << num_windows << " windows" << endl;
	for (int i = 0; i < num_walls; i++)
		cr->Build(new Walls);
	cout << num_walls << " walls" << endl;
	for (int i = 0; i < num_floor; i++)
		cr->Build(new Floor);
	cout << num_floor << " floor" << endl;
	for (int i = 0; i < num_pool; i++)
		cr->Build(new Pool);
	cout << num_pool << " pool" << endl;
	return cr;
}

int House::Get_roof()
{
	cout << "Enter quantity roofs in your house ";
	cin >> num_Roof;
	return num_Roof;
}

int House::Get_windows()
{
	cout << "Enter quantity windows in your house ";
	cin >> num_Windows;
	return num_Windows;
}

int House::get_walls()
{
	cout << "Enter quantity walls in your house ";
	cin >> num_Walls;
	return num_Walls;
}

int House::Get_floor()
{
	cout << "Enter quantity floor in your house ";
	cin >> num_Floor;
	return num_Floor;
}

int House::Get_pools()
{
	cout << "Enter quantity pools in your house ";
	cin >> num_pool;
	return num_pool;
}
