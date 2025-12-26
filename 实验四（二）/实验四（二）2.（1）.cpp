#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len1 - len2; i++)
	{
		int j;
		for (j = 0; j < len2; j++)
		{
			if (s1[i + j] != s2[j])
				break;
		}
		if (j == len2)
			return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "ÇëÊäÈë×Ö·û´®s1£º";
	cin.getline(s1, 100);
	cout << "ÇëÊäÈë×Ö·û´®s2£º";
	cin.getline(s2, 100);
	int pos = indexof(s1, s2);
	if (pos != -1)
		cout << "×Ö·û´®s2ÔÚ×Ö·û´®s1ÖÐµÄÎ»ÖÃÎª£º" << pos << endl;
	else
		cout << "×Ö·û´®s2²»ÔÚ×Ö·û´®s1ÖÐ" << endl;
	return 0;

}