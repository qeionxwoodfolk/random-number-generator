#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main()
{

    cout << "Hello Welcome to the random number generator "<< endl;
    cout << "This can be used for betting, and all of your random number needs" << endl;
    // seed the random number generator
    srand(time(0));

    // generate a random number between 1 and 10
    

    int randomNumber = rand() % 1000 + 1;
    cout << " Your Random number is " << randomNumber << endl;

    return 0;
}

