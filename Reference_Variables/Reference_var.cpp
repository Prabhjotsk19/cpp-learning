#include <iostream>
using namespace std;


struct user_data
{
	string name;
	int age;
};


// Modify the age of person
void modify_age(user_data &person){
	person.age = 12;
}


// swap two numbers
void swap(int &x, int &y){
	int temp = x;
	x = y; 
	y = temp;
}


// function return reference to x or y
int & Returning_by_Refrerence(int &x, int &y){
	if (x > y)	return x; // it means int & x = ... ;
	else return y;
}


int main(){
	// Refernce Variables
	int number = 34;


	// Refernce to number
	int & num = number;
	// both the varibles number and num refer to same data object in the memory
	cout << num << " " << number << endl;
	cout << &num << " " << &number << endl;

	// changing num also changing number
	num = 23;
	cout << num << " " << number << endl;

	string fruit = "Mango";
	const string & ref_fruit = fruit;
	cout << fruit << " " << ref_fruit << endl;

	// ref_fruit = "Orange"; // ref_fruit is declared constant but fruit does not
	fruit = "Orange";
	cout << fruit << " " << ref_fruit << endl;

	// Refernce Variables must be initialized at the time of declaration
	// int & num1 -> error : 'num1' declared as reference but not initialized ;


	// Reference to arrays
	int n[10];
	n[9] = 12;
	int & x = n[9]; // xis alias for n[9] -> last element of array n[10]
	cout << x << endl;

	// initialize reference to a literal 
	//char & a = '\n';
	//cout << "c++ is a easy language!" << a;  
	

	// reference to pointers 
	int m = 23;
	int * p = &m; // pointer point to m
	int & number1 = *p; // number1 refer to pointer p but indirectly to m 
	cout << m << " " << *p << " " << number1 << endl;

	// More 
	// int & number2 = 34; // creates a int object number2 with value 34


	// Reference to structures
	user_data person1 = {"John", 23};
	user_data & person1_reference = person1;
	cout << person1.name << " " << person1_reference.name << endl;

	// reference to structures in functions parametres
	modify_age(person1);
	cout << person1.age << " " << person1_reference.age << endl;


	// Reference to classes
	// later on


	// Major Application in passing arguments to functions
	// Call by Reference

	int a = 23 , b = 324;
	cout << "Value of a and b before swapping is : " << a << " " << b << "\n";
	swap(a, b); // value of x and y is changed in function swap()
	// but x and y are reference for a and b respectively so value of a and b also
	cout << "Value of a and b after swapping is : " << a << " " << b << "\n";


	// Returning values by refer
	int digit1 = 34, digit2 = 67;
	int greater_digit = Returning_by_Refrerence(digit1, digit2);
	int a1 ;
	Returning_by_Refrerence(digit1, digit2) = 12;
	cout << digit2 << endl;
	cout << greater_digit << endl;

	


	return 0;
}


/*
References Variables are other name for my variables

References -> Characteristics (vs Pointers)
1. no NULL references
2. Once initialized and created can't be changed their value
3. must be initialized when declared
4. are of same type of initialized variables
*/
