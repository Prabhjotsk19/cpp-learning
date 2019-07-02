#include "main.hpp"

int main()
{
	mixture array_int = {'s'} ; //, 'b'};
	cout << "-char " << array_int.name << " -string " << array_int.letter << " -int "
	<< array_int.number << " -float " << array_int.number1 << " -double "
	<< array_int.number2 << " \n";
	
	mixture next = {'1'};
	cout << "-char " << next.name << " -string " << next.letter << " -int "
	<< next.number << " -float " << next.number1 << " -double "
	<< next.number2 << " -array " << next.number_array  << "\n";

	Fruit Mango = {"Mango", {34, 23, 2, 23}};
	cout << Mango.name << " \n" << Mango.stock[0] << "\n"
	<< Mango.stock[4] << "\n" << Mango.stock[1] << "\n" ;

	/*
	int for_int_pointer = 3445;
	//char for_char_pointer = '2';
	Address textbook = { '2', &for_int_pointer };
	// value stores in pointers i.e. is address of for_int_pointer and for_char_pointer
	printf("%u\n", textbook.character_pt);
	printf("%u\n", textbook.int_pt );
	// to print value stores in for_char_pointer and for_int_pointer using pointers 
	printf("%u\n", *textbook.character_pt);
	printf("%u\n", *textbook.int_pt );
	

	// array of structures
	Fruit asia[10];
	asia[0].name = "bengal";
	asia[0].stock = 12000;
	cout << asia[0].name << "\n";
	*/

	// pointers to structures
	AlimarahTypes asia = {"Asia", 455};
	AlimarahTypes *pointerToStructure ;
	pointerToStructure = &asia;
	cout << pointerToStructure << "\n" << &asia << "\n"
	<< &asia.type << "\n";

	if (&asia == &asia.type)
	{
		printf("WOW!" );
	}

	return 0;

}