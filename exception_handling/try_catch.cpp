#include <iostream>
using namespace std;

// division of number1 by number2
int division(int number1, int number2){
	if (number2 != 0){
		return number1/number2;
	}
	else{
		throw number2;    // Throw point
	}
}

// test function to understand multiple catch statements
void test(int x){
	try{
		if (x == 1) throw x ; // throw a int type exception
		else if (x == 0) throw 'x' ; // throw a char type exception
		else if (x == -1) throw 1.0 ; // throw a double type exception
		else if (x == 2) throw "string"; // throw string type exception
	}
	catch(int ){
		cout << "Catch a int Exception! \n";
	}
	catch(char ){
		cout << "Catch a char Exception! \n";
	}
	catch(double ){
		cout << "Catch a double Exception \n";
	}
	catch (...){
		cout << "Catch any another Exception! \n";
	}
}

// test1 to understand the concept of rethrowing a exception
void test1(int num){
	try{
		if (num == 1) throw 1; // throw a int exception 
		else cout << "True \n" ;  // rethrowing a exception it will execute to next catch block outside of this group
	}
	catch(int){  // Catch a int
		cout << "caught a int exception inside function! \n";
		throw ; // Rethrowing Exception
	}
}


int main(){
	// Exception handling

	int a, b;
	cout << "Enter the values of a and b : \n";
	cin >> a >> b;
	int x = a-b;
	cout << "x is :" << x << endl;
	
	try{
		if(x != 0){
			cout << "Result of a/x is : " << a/x << endl;
		}
		else{          // There is an exception 
			throw(x);  // Throws int object
		}
	}

	catch(int ){       // Exception Caught
		cout << "Exception Caught! i.e x = 0\n";
	}

	// throw statement are executed only when they are called inside try block
	try
	{
		cout << division(1, 2) << "\n"; // calling division()
		division(1, 0);
	} 
	catch(...)     // eclipses(...) are used to handle all types of exceptions
	{
		cout << "exception is Caught\n" // exception is caught
		<< "CAN'T DIVIDE BY 0\n";
	}

	//  MULTIPLE CATCH STATEMENTS
	test(1);
	test(2);
	test(-1);
	test(0);

	// 	RETHROWING A EXCEPTION
	try{
		test1(1);
	}
	catch(int ){
		cout << "This statement executes after throw of catch of test1! \n";
	}


	return 0;
}

