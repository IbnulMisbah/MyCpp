							//Bismillahir Rahmanir Rahim

#include <iostream>					//Including Header files
#include <cstdlib>  											

using namespace std ;				//Standard namespace including

int main()

{
	//Now we will iearn about Variable [Cholok] , who's value [Man] can be changed.
	//Like the following program without varibles , which is not fine :
	//Suppos a four angel's doirgho 5 meter o prostho 3 meter :
	
	cout << "Ayoter khetrofol holo " << 5 * 3 << " borgometer." << endl ; 		//Khetrofol
	cout << "Ayoter porishima holo " << 2 * ( 5 + 3 ) << " meter." << endl ; 	//Porishima

	//Now we will make same program with Variable :

	//Variable Declaration [Cholok Ghoshona] .
	int doirgho , prostho , khetrofol , porishima ;

	//Value Assign [Man Aropon]
	doirgho = 5 ;
	prostho = 3 ;

	//Formula [Sutro]
	khetrofol = doirgho * prostho ;
	porishima = 2 * ( doirgho + prostho ) ;

	//Result Printing [Folafol Chapa]
	cout << "Ayoter khetrofol holo " << khetrofol << " borgometer." << endl ;		//Khetrofol
	cout << "Ayoter porishoma holo " << porishima << " meter." << endl ;			//Porishima
	

	return EXIT_SUCCESS ;
}

//A program with variable is very beautyfull and easy to understand.
