#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// add two numbers by using stringstream concepts
int add(string num1, string num2){
	int number1 = 0 , number2 = 0, total = 0;
	stringstream(num1) >> number1;
	stringstream(num2) >> number2; 
	total = number1 + number2;
	return total;
}

// Print string characters -> call by value
void print_call_value(string str1, int length_of_str1){
	cout << "Print string characters \n";
	for (int i = 0; i < length_of_str1; ++i){
		cout << str1[i] << " ";
	}
}

// Print string characters -> call by refernce
void print_call_reference(string *str2, int length_of_str2){
	cout << "Print string characters \n";
	for (int i = 0; i < length_of_str2; ++i){
		cout << str2[i] << " ";
	}
}

int main(){

	// Method 1 / c type strings
	char user_name[] = "Prabhjot Singh";
	cout << user_name << "\n";

	// Method 2 / ctype strings
	// initialiaztion of a string using below method requires null character at end
	// otherwise it will show irrelevent results
	char user_name1[] = {'1', '2', '3', '\0'};
	cout << user_name1 << endl;

	// Method 3 / in c++ standard library
	string fruits = "Mango";
	cout << fruits << endl;

	string name;
	string Father_name;

	// getline(input_stream, name_of_location_to_store_string);
	// input from user response
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "your name is : " << name << "\n";

	// get input from user
	cout << "Enter your Father's name: ";
	// how to add delimiter in getline()
	getline(cin, Father_name);  
	cout << "Your Father's name is :" << Father_name << "\n";
	
	// More on String inputs
	string stringLength, stringWidth;
	float length = 0;
	float width = 0;
	float area = 0;

	cout << "Enter the Length of room : ";
	// get the length as string
	getline(cin, stringLength);
	// convert to a float
	stringstream(stringLength) >> length;
	cout << "Enter the Width of room : ";
	// get the width as a string
	getline(cin, stringWidth);
	// convert to a float
	stringstream(stringWidth) >> width;

	area = length*width;
	cout << "Area of Room is : " << area << endl;

	// add two numbers
	cout << "Addition of Length and Width is : " 
	<< add(stringLength, stringWidth) << "\n";

	// Convert string to double
	double mydouble; 
	string any_number;
	cout << "Enter any_number : ";
	// get any_number as a string
	getline(cin, any_number);
	// convert any_number to a double
	stringstream(any_number) >> mydouble;
	cout << "any_number in double is " << mydouble << endl;

	// Operations on strings
	string str = "prabh";

	// push_back(character) -> insert a character at end of string
	str.push_back('2');
	cout << "str string after push_back operation is : " << str << endl; 
	// pop_back() -> delete a character from end of string
	str.pop_back();
	cout << "str string after pop_back operation is : " << str << endl; 
	// resize(size) -> change the size of a string
	str.resize(2);
	cout << "str string after resize operation is : " << str << endl; 
	// capacity of string return capacity allocated to string
	// which is equal to string or more than size of string
	cout << "capacity of string is : " << str.capacity() << endl; 
	// shrink_to_fit is ont working 
	str.shrink_to_fit();
	cout << "new capacity of string is : " << str.capacity() << endl; 
	/*
	 begin()
	 end()
	 rbegin()
	 rend()
	 using iterators
	 */

	char lines[10];
	cout << "Enter the lines you want to enter we will show that on screen: " << endl;
	// cin.get(name_of_string, maximum_size_of_array)
	cin.get(lines, 10);
	cout << lines << "\n";

	// Length or size of a string
	cout << fruits.size() << "\n";
	// Print character of a string 
	int length_of_fruits = fruits.size();
	for (int i = 0; i < length_of_fruits; ++i)
	{
		cout << fruits[i] << " " ;
	}

	cout << "\n";
	// Passing strings to Functions
	print_call_value(fruits, length_of_fruits);
	//print_call_refernce()
	// print_call_reference(&fruits, length_of_fruits);

	// print base address of fruits string
	cout <<"\n" << &fruits ;
	// print string fruits from index 0 to the end
	cout <<"\n" << &fruits[0];
	// print string fruits from index 2 to the end
	cout <<"\n" << &fruits[2];

	// Array of Strings
	// 3 different ways to create

	// Method 1 / 2D array
	// char name[no. of strings][maxsize of these strings]
	char TwoDimensionalarr[3][5] = {"prab", "jot", "sing"};

	// Method 2 / string keyword
	string colors[4] = {"Blue", "Yellow", "Red"};

	// Method 3 / vectors
	cout << endl;
	return 0;
}