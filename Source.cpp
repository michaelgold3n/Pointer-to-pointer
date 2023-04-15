
#include <iostream>
using namespace std;

int main()
{
	int x = 5; //assigns 5 to variable x with the data type integer
	int *p = &x; //assigns *p to be a reference variable to x
	*p = 6; //assigning the value of 6 to the x variable because *p is an integer which is also a reference variable to x
	int **q = &p; //assigns the pointer **q as a reference vairable to p which is really a reference variable to x
	int ***r = &q; //assigns the pointer ***r as a reference vairable to q which is really a reference variable to x
	cout << *p << endl; //outputs the value of 6
	cout << *q << endl; //shows the memory address
	cout << **q << endl; //outputs the value of 6
	cout << *(*r) << endl; //shows the memory address
	cout << *(*(*r)) << endl; //outputs the value of 6
	***r = 10; //assigns the x variable the number of 10
	cout << x << endl; //outputs the value of 10
	**q = *p + 2; //we assign 12 to x
	cout << x << endl; //outputs the value of 12
	return 0;
}//end main
