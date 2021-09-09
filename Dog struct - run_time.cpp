#include <iostream>
#include <iomanip>

using namespace std;

// struct Dog {
//     int age;
//     double weight;
//     double speed;
// };

double run_time(Dog d, double distance) {
    return distance / d.speed;
}

Dog read_dog()
{
    Dog d;
    cin >> d.age >> d.weight >> d.speed;
    return d;
}

int main()
{
    Dog dang = read_dog();
    double distance;
    cin >> distance;
    cout << fixed << setprecision(5);  // this line is for formatting
    cout << run_time(dang, distance) << endl;
}