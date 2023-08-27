#include <iostream>
using namespace std;

string encriptString(string s, int n) {

	for (int i = 0; i < s.size(); i++)
	{
		char c = (s[i] + n) % 256;
		s[i] = c;
	}

	return s;
}

int main()
{
	string s = "abcd";
	s = encriptString(s, 4);

	cout << s;
}