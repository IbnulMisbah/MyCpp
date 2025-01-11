/*
 * Bismillahir Rahmanir Rahim ..
 * I have learnt value swapping in cpp ..
 * I will change value from first to last ..
 * And last to first by middle ..
 */
#include <iostream>
#include <cstdlib>

using namespace std ;

int main() {

    int first = 17 ;
    int last = 13 ;
    
    cout << "First = " << first << endl ;
    cout << "Last = " << last << endl ;

    /*
     * Now we will exchange the value 
     * Between first and last .
     * we can do by this :
     first = 13 ;
     last = 17 ;
     * But its not correct way .
     * so lets go , we do this .
     */
    int middle = 0 ;

    middle = first ;
    first = last ;
    last = middle ;

    cout << "First = " << first << endl ;
    cout << "Last = " << last << endl ;
}
