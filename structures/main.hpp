#include <iostream>
#include <cstdio>

using namespace std;

// structures

struct mixture
{
	char name;
	int number;
	float number1;
	double number2;
	char letter[10];
	int number_array[10];
};

struct procedure
{
	char name ;
	char name1[10];
	int total;	
};

// array in structures declaration
struct Fruit
{
	char name[10];
	int stock[10];
};

// pointers in structures declaration
struct Address
{
	char *character_pt;
	int *int_pt;
};

// for array of structures
struct AlimarahTypes
{
	char type[10];
	int $price;
};


