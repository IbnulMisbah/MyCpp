/*
 * Bismillahir Rahmanir Rahim ..
 * Now I will learn Self Referential Assignment .
 */

#include <iostream> 
#include <cstdlib>

using namespace std ;

int main () {

    int TheValue = 10 ;

    cout << "TheValue = " << TheValue << endl ;

    TheValue = TheValue + 15 ;
    cout << "TheValue = " << TheValue << endl ;

    TheValue = TheValue * 3 + 4 ;
    cout << "TheValue = " << TheValue << endl ;

    TheValue = TheValue + 60 * 100 / 10 ;
    cout << "TheValue = " << TheValue << endl ;

    return EXIT_SUCCESS ;

}
