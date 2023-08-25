#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++) {
        
        if (i % 3 == 0) {
            cout << "git";
        }

        if (i % 5 == 0) {
            cout << "hub";
        }

        if (i % 3 != 0 && i % 5 != 0) {
            cout << to_string(i);
        }

        cout << endl;
    }
}