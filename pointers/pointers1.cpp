#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	// pointers -> special variable 
	// store addresses of variables

	// Declaration and Initialization of Pointers

	int firstValue, secondValue ;
	int * myPointer;
	myPointer = &firstValue;    // myPointer points to firstValue 
	*myPointer = 45;			// value of firstValue is changed using myPointer
	myPointer = &secondValue;	// now myPointer points to secondValue
	*myPointer = 23;			// value of secondValue is changed uisng myPointer
	cout << "firstValue is : " << firstValue << "\n"
	<< "secondValue is : " << secondValue << "\n";

	int *pointer1, *pointer2;
	// cout << pointer1 << " " << pointer2 << "\n"; --> segmentation error
	// now below statement initialize my pointers
	pointer1 = pointer2;        				 // pointer1 = pointer2 (value of pointer is copied)
	*pointer1 = 22;
	*pointer2 = 234;							 // updated value of both pointer1 and pointer2
	cout << pointer1 << " " << pointer2 << "\n"; // now pointer1 and pointer2 points to same location
	cout << *pointer1 << " " << *pointer2 << "\n";

	// Pointers and Arrays
	// Pointers and Arrays suppport same set of operations with same meaning for both.
	// the main difference being that Pointers can be assigned new addresses while arrays can't.
	int arr[5];
	int *pointer_to_arr;

	pointer_to_arr = arr;  // valid statement but arr = pointer_to_arr is not a valid statement
	*pointer_to_arr = 10;
	pointer_to_arr++;  *pointer_to_arr = 20;    // increment pointer so that it points to next location in memery of type int
	pointer_to_arr = &arr[2];  *pointer_to_arr = 30;
	pointer_to_arr = arr + 3;  *pointer_to_arr = 40;
	pointer_to_arr = arr;      *(pointer_to_arr + 4) = 50;

	/*for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << ", " ;  --> show Segmentation Error
	}
	*/

	// Pointer Arithmetics
	char *mychar;
	short *myshort;
	long *mylong;

	printf("%d\n", mychar);
	printf("%d\n", myshort);
	printf("%d\n", mylong);

	++mychar;          // similar to mychar = mychar + 1
	++myshort;		   // similar to myshort = myshort + 1
	++mylong;		   // similar to mylong = mylong + 1

	printf("%d\n", mychar);
	printf("%d\n", myshort);
	printf("%d\n", mylong);	

	// four types of combinations of pointer and increment operators
	int number = 34;
	int *pointer = &number;

	cout << *pointer++ << "\n"
	<< *++pointer << "\n"
	<< (*pointer)++ << "\n"
	<< ++(*pointer) << "\n";

	int num1 = 1, num2 = 1; 					// *p1++ == *p2++ is similar to *p1 == *p2; *p1++; *p2++; 
	int *p1 = &num1, *p2 = &num2;
	cout << *p1<< " " << *p2 << "\n";
	if (*p1++ ==  *p2++) cout << "great! \n";
	cout << *p1 << " " << *p2<< "\n";
	return 0;
}