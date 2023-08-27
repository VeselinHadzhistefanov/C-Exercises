#include <iostream>
#include <string>
using namespace std;

string convertIP(long long num) {

	string s;
	long long bytePart[4];

	for (int i = 0; i < 4; i++)
	{
		long long exponent = pow(2, 8 * (i + 1));
		bytePart[i] = num % exponent;

		num = (num - bytePart[i]) / 256;
	}

	for (int i = 0; i < 4; i++)
	{
		s.append(to_string(bytePart[3 - i]));
		if (i < 3)
		{
			s.append(".");
		}
	}

	return s;
}

int main()
{
	long long num = 256;
	string s = convertIP(num);

	cout << endl << s;

}