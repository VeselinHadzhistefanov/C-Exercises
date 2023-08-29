#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * 'ППОЗЗП' =>  true
'PPОЗЗЗ' => false
 */

bool checkAttendance(string s) {
	int numAbsent = 0;
	int numLate = 0;

	for (char c : s) {
		if (c == 'P') {
			numLate = 0;
		}

		if (c == 'A') {
			numAbsent++;
			if (numAbsent > 2) {
				return false;
			}
		}

		if (c == 'L') {
			numLate++;
			if (numLate > 2) {
				return false;
			}
		}
	}

	return true;
}

int main() {

	cout << checkAttendance("PPALLP") << endl;
	cout << checkAttendance("PPALLL") << endl;
}