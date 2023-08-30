#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * "11-06-2021", "12-06-2021" => 1
"1-01-2021", "1-02-2021" => 31
 */

int getDaysDifference(string d1, string d2) {

	int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysInYear = 365;

	string dates[2] = { d1, d2 };

	int totalDays[2];

	for (int i = 0; i < 2; i++) {

		int idx = dates[i].find_first_of('-');
		string daysStr = dates[i].substr(0, idx);

		int days;
		try {
			days = stoi(daysStr);
		}
		catch (exception e) {
			cout << "Invalid format!";
		}

		dates[i] = dates[i].substr(idx + 1);

		idx = dates[i].find_first_of('-');
		string monthStr = dates[i].substr(0, idx);

		int month;
		try {
			month = stoi(monthStr);
		}
		catch (exception e) {
			cout << "Invalid format!";
		}

		dates[i] = dates[i].substr(idx + 1);

		int year;
		try {
			year = stoi(dates[i]);
		}
		catch (exception e) {
			cout << "Invalid format!";
		}

		if (month > 12) {
			cout << "Invalid format!";
			return 0;
		}

		if (days > daysInMonth[month - 1]) {
			cout << "Invalid format!";
			return 0;
		}


		cout << days << " " << month << " " << year << endl;

		totalDays[i] = year * daysInYear;
		int daysUpToThisMonth = 0;

		for (int j = 0; j < month - 1; j++) {
			daysUpToThisMonth += daysInMonth[j];
		}

		totalDays[i] += daysUpToThisMonth;
		totalDays[i] += days;

	}

	int daysDifference = abs(totalDays[0] - totalDays[1]);

	return daysDifference;
}


int main() {

	cout << getDaysDifference("11-06-2021", "12-06-2021") << endl;
	cout << getDaysDifference("1-01-2021", "1-02-2021") << endl;
}