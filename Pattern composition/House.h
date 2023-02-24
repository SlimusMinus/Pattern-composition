#pragma once
#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

class House
{
public:
	virtual void Build(House*) { assert(false); };
	virtual int Quantity() = 0;
	int num_Roof, num_Windows, num_Walls, num_Floor, num_pool;
	int Get_roof();
	int Get_windows();
	int get_walls();
	int Get_floor();
	int Get_pools();
};

class Roof : public House
{
	int Quantity() override { return 1000; }
};

class Windows : public House
{
	int Quantity() override { return 200; }
};

class Walls : public House
{
	int Quantity() override { return 550; }
};

class Floor : public House
{
	int Quantity() override { return 600; }
};
class Pool : public House
{
	int Quantity() override { return 1600; }
};

class Build_House : public House
{
private:
	vector <House*> home;

public:
	void Build(House* hm) { home.push_back(hm); }
	int Quantity() override;
};

Build_House* create_SimpleHouse();
Build_House* create_EliteHouse();