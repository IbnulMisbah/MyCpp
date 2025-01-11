/*
 * Bismillahir Rahmanir Rahim ..
 * Its a solve program of 9th problem ..
 */
#include <iostream>
#include <cstdlib>

using namespace std ;

int main() {

    float first , middle , last ,Addition ;

    cout << "Please type a number : ";
    cin >> first ;

    cout << "Please type more number : ";
    cin >> middle ;

    cout << "Please type more number : ";
    cin >> last ;
    
    Addition = first + middle + last ;

    cout << "The First number = " << first << endl ;
    cout << "The Middle number = " << middle << endl ;
    cout << "The Last number = " << last << endl ;
    cout << "Addition of 3 numbers = " << Addition << endl ;

    return EXIT_SUCCESS ;

}
