#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i=0;i<26;++i)
	{
		counts[i] = 0;
	}
	for(int i=0;s[i] !='\0';++i)
	{
		char c = tolower(s[i]);
		if(c>='a' && c<='z')
		{
			int index = c - 'a';
			counts[index]++;
		}
	}
}
int main()
{
	const int maxsize = 100;
	char s[maxsize];
	int counts[26] = { 0 };
	cout << "请输入一个字符串:";
	cin.getline(s, maxsize);
	count(s, counts);
	cout << "每个字母出现的次数：" << endl;
	for(int i=0;i<26;++i)
	{
		if (counts[i] > 0) {
			cout << char('a' + i) << ": " << counts[i] << endl;

		}
		
	}
	return 0;
}
