/*
 * Bismillahir Rahmanir Rahim ..
 * Now I will learn value assignment on cpp ..
 */
#include <iostream>
#include <cstdlib>

using namespace std ;

int main () {

    float target = 3 ;
    float source = 5 ;

    cout << "Target = " << target << endl ;
    cout << "Source = " << source << endl ;

    target = source ;
    
    cout << "Target = " << target << endl ;
    cout << "Source = " << source << endl ;
    
    source = target * 3 ;
    target = source / 2 ;

    cout << "Target = " << target << endl ;
    cout << "Source = " << source << endl ;

    return EXIT_SUCCESS ;

}
