// Jordan Steer-Furderer
// CIS 25
// This program determines how many classes per semester Keanu will miss due to his
// Hearthstone habit. It works by generating a random number between 0 and 2.
//#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
using namespace std;


// This function generates the random number
int missesClassProb() {
    return (0 + (rand() % 2));
    }

// This function logs if he missed class or not, and only if the result is 1 does it represent
//a missed class.
int doesKeanuMissClass() {
    int randoNum = missesClassProb();
    if (randoNum <= 1) {
    return (randoNum);
    cout << randoNum << endl;
    }


}
int main() {
srand(time(0));
int t;
cout << "Enter the number of trials you would like to run" << endl;
cin >> t;

int sum = 0;
int index = 0;
while (index < ((15)*t)) {
    int trials = t;
    sum = sum + doesKeanuMissClass();
    index++;

    float costPerClass = 133.33;
    if (index >= 15 * trials) {
        cout << "If Keanu misses " << sum / trials << " classes per semester" << endl;
        cout << "then he will be losing $" << (((sum / trials)) * costPerClass) << " worth of tutition" << endl;
            }

      }

return 0;

}
