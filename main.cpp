#include "main.hpp"

int main()
{
	int srclen, tgtlen;
	char source[100] = "Chocolate\0";
	char target[100];

	srclen = mycstrlen(source);
	cout << "The length of source string " << srclen << endl;
	mycstrcpy(target, source);
	tgtlen = mycstrlen(target);
	cout << "The length of target string " << tgtlen << endl;
	cout << "The Target String is " << target << endl;
	srclen = mycstrcat(target, source);
	cout << "The length of source string " << srclen << endl;
	cout << "The Concatenated String is " << source << endl;
}