// Bismillahir Rahmanir Rahim ..
// Now I solve the 7th problem ..

#include <iostream>
#include <cstdlib>

using namespace std ;

int main() {

    int const second1 = 1 ;
    int const minute1 = 60;
    int const houre1 = minute1 * 60 ;

    int time = 7 * houre1 + 15 * minute1 + 39 * second1 ;

    cout << "Total time to complete the work is " << time << " seconds ." << endl ;

    return EXIT_SUCCESS ;

}
