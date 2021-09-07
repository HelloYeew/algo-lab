// Make a function to resolve the Tower of Hanoi puzzle.

#include <iostream>
using namespace std;

// Make function to resolve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char from, char to, char aux) {
      // Base case
  if (n == 1) {
    cout << "Move disk 1 from " << from << " to " << to << endl;
  } else {
    // Recursive case
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
  }
}
