							//Bismillahir Rahmanir Rahim.

#include <iostream>
#include <cstdlib>

using namespace std ;

int main()

{
	//Now we will learn about Constant , whos value can not be changed .
	//we make a program that will show area of a circle .

	//Variable Declaration & initial value assignment [Adi man aropon]

	int beshardho = 5 ;				//Integer number [Purnok Songkha]

	//Now we will use const perameter , the pai constant can't be changed .
	float const pai = 3.1416 ;		//Floating-Point n [Sochol Bindu sonkha] or Fraction [Bhognok]
	
	//Variable Declaration : Formula [Sutro]
	float khetrofol = pai * beshardho * beshardho ;

	//Result printing
	cout << " Britter khetrofol holo " << khetrofol << " borgometer." << endl ;

	return EXIT_SUCCESS ;
}

//Variable can be changed many times but Constant can't be changed nomore after declaration .
