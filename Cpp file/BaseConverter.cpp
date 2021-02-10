#include <iostream>
#include <cmath>
using namespace std;
string convert(int convert_from, string number, int convert_to)
{
	// checking for a valid base
	if (convert_from < 2 || convert_to < 2)
	{
		cout << "EXCEPTION <INVALID BASE>";
		return string("\0");
	}
	// checking for a valid base

	// using boolean operator "==" to negative sign iteration
	int result = 0, i, j = 0, temp = 0, x = number[0] == '-';

	for (i = number.length() - 1; i >= x; i--, j++)
	{
		// checking for a valid number
		if (number[i] > 47 && number[i] < 58)
			temp = 48;
		else if (number[i] > 64 && number[i] < 91)
			temp = 55;
		else if (number[i] > 96 && number[i] < 123)
			temp = 87;
		else
		{
			cout << "EXCEPTION <INVALID CHARACTER OCCURS>";
			return string("\0");
		}

		// checking for a number lie in base range ?
		if (number[i] - temp > convert_from)
		{
			cout << "EXCEPTION <OUT OF BOUND>";
			return string("\0");
		}

		// converting into decimal
		result += (number[i] - temp) * round(pow(convert_from, j));
	}
	i = 0; string temp1;

	// converting into required base from decimal
	while (result > 0)
	{
		switch (result % convert_to)
		{
		case 0: temp1 = '0' + temp1;
			break;
		case 1: temp1 = '1' + temp1;
			break;
		case 2: temp1 = '2' + temp1;
			break;
		case 3: temp1 = '3' + temp1;
			break;
		case 4: temp1 = '4' + temp1;
			break;
		case 5: temp1 = '5' + temp1;
			break;
		case 6: temp1 = '6' + temp1;
			break;
		case 7: temp1 = '7' + temp1;
			break;
		case 8: temp1 = '8' + temp1;
			break;
		case 9: temp1 = '9' + temp1;
			break;
		case 10: temp1 = 'A' + temp1;
			break;
		case 11: temp1 = 'B' + temp1;
			break;
		case 12: temp1 = 'C' + temp1;
			break;
		case 13: temp1 = 'D' + temp1;
			break;
		case 14: temp1 = 'E' + temp1;
			break;
		case 15: temp1 = 'F' + temp1;
			break;
		case 16: temp1 = 'G' + temp1;
			break;
		case 17: temp1 = 'H' + temp1;
			break;
		case 18: temp1 = 'I' + temp1;
			break;
		case 19: temp1 = 'J' + temp1;
			break;
		case 20: temp1 = 'K' + temp1;
			break;
		case 21: temp1 = 'L' + temp1;
			break;
		case 22: temp1 = 'M' + temp1;
			break;
		case 23: temp1 = 'N' + temp1;
			break;
		case 24: temp1 = 'O' + temp1;
			break;
		case 25: temp1 = 'P' + temp1;
			break;
		case 26: temp1 = 'Q' + temp1;
			break;
		case 27: temp1 = 'R' + temp1;
			break;
		case 28: temp1 = 'S' + temp1;
			break;
		case 29: temp1 = 'T' + temp1;
			break;
		case 30: temp1 = 'U' + temp1;
			break;
		case 31: temp1 = 'V' + temp1;
			break;
		case 32: temp1 = 'W' + temp1;
			break;
		case 33: temp1 = 'X' + temp1;
			break;
		case 34: temp1 = 'Y' + temp1;
			break;
		case 35: temp1 = 'Z' + temp1;
			break;
		}
		i++, result /= convert_to;
	}
	/*	converting number into negative if negative
		because result of both (+ve and -ve) are same except sign  */
	if (number[0] == '-')
		temp1 = '-' + temp1;
	return temp1;
}
int main()
{
	string s;
	int x, y;
	cin >> x >> s >> y;
	cout << convert(x, s, y) << endl;
	return 0;
}