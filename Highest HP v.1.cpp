#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int hp = 100; // initial HP
  int max_hp = hp;

  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    hp += a;   // update HP
    if (hp > max_hp) max_hp = hp;
  }
  cout << max_hp << endl;
}