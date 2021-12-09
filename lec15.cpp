#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//root sample
/*	
	cout << "|Cube output" << endl;
	cout << "|The cube of 8 is: " << pow (8,3) << endl; // outputs cube using pow function
	
cout << endl;

	cout << "|Square-root output" << endl;
	cout << "|The square-root of 8 is: " << sqrt (8) << endl;
	cout << "|The square-root of 8 is: " << pow (8, 1/2) << endl;
	
cout << endl;

	cout << "|Cube-root output" << endl;
	cout << "|The cube-root of 8 is: " << cbrt(8) << endl;
	cout << "|The cube-root of 8 is: " << pow (8, 1/3) << endl;
*/

//root code, with input
int x;

	cout << "Please input a number:" << endl;
		cin >> x;
//instruct and takes input from user, stored in variable 'x' ^
cout << endl;
//outputs the square, and cube root of the value stored in 'x' v
	cout << "The square root of your input is: " << sqrt(x) << endl;
	cout << "The cube root of your input is: " << cbrt(x) << endl; 

return 0;
}
