#include <iostream>
#include <cstdio>
using namespace std;

// display1() function to understand concept of passing array elements to functoins
// call by value
void display1(int array_element){
	cout << array_element << "\n";
}

// display2() function to understand concept of passing array elements to functoins
// call by reference
void display2(int *array_element){
	cout << *array_element << "\n";
}

void display_complete_array(int *baseAddress_arr, int length_of_arr){
	for (int i=0; i<length_of_arr; i++){
		cout << *baseAddress_arr << "\n";
		baseAddress_arr++;  // increment pointer to point to next element

	}
}

int main(){
	// Arrays 
	
	int names[3] = {12, 23, 4};
	
	int length_names = sizeof(names)/sizeof(names[0]);

	// Passing arrays elements to functions
	// call by value
	for (int i=0; i<length_names; i++){
		// call by value
		display1(names[i]);

		// call by refernce 
		display2(&names[i]);
	}

	cout << "\n";
	display_complete_array(names, length_names);

	return 0;
}