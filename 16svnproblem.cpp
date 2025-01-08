// Bismillahir Rahmanir Rahim ..
// Now i wll solve 7th problem again .

#include <iostream>
#include <cstdlib>

using namespace std ;

int main() {

    int houre = 7 , minute = 15 , second = 39 ;

    int const minuteinhoure = 60 , secondinminute = 60 ;

    int totalmin = houre * minuteinhoure + minute ;

    int totalsec = totalmin * secondinminute + second ;

    cout << "Total seconds is " << totalsec << endl; 

    return EXIT_SUCCESS ;
}
