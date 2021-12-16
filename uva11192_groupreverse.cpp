#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // size of str
    size_t n;
    string s;
    while (cin >> n, n != 0) {
        cin >> s;
        // create iterator to the first element of s
        string::iterator iter(s.begin());
        // seperate the string into size
        size_t text_size = s.size() / n;

        // reverse the string by group
        for(; iter != s.end(); iter += text_size) {
            reverse(iter, iter + text_size);
        }

        cout << s << endl;

    }
}
