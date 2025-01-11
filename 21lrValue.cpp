/*
 * Bismillahir Rahmanir Rahim ..
 * Now I will talk about left and right value ..
 * In cpp program ..
 */
#include <iostream>
#include <cstdlib>

using namespace std ;

int main() {

    int left , right , value = 9 ;
    
    /*
     * In cpp prgramming value assignment ,
     lvalue = rvalue ;
     * The lvalue have to remain on memory .
     * The rvalue have to contain a quantity .
     * so lets see some incorrect assignment :
     3 = x ;
     x+3 = y ;
     */

    right = value ;

    //lvalue = rvalue ;
    left = right ;

    cout << "Left value = " << left << endl ;
    cout << "Right value = " << right << endl ;

    return EXIT_SUCCESS ;

}
