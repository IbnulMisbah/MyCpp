/*
 * Bismillahir Rahmanir Rahim ..
 * I will learn how to recive input from user .
 */
#include <iostream>
#include <cstdlib>

using namespace std ;

int main () {

    float width , high , area , outside ;
    
    // Input Prompt = [Zogan Zachona]
    cout << "Type the value of width : " ;
    cin >> width ;

    // Input Prompt = [Zogan Zachona]
    cout << "Type the value of hight : " ;
    cin >> high ;

    area = width * high ;
    outside = 2 * ( width + high );

    cout << "The area of rectangle is ";
    cout << area << " squre meter ." << endl ;

    cout << "The outside of rectangle is ";
    cout << outside << " meter ." << endl ;

    return EXIT_SUCCESS ;

}
