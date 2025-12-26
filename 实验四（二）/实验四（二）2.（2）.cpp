#include <iostream>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString) 
{
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; ++i) 
	{
		char c = hexString[i];
		int value;
		if (c >= '0' && c <= '9') 
		{
			value = c - '0';
		} 
		else if (c >= 'A' && c <= 'F') 
		{
			value = c - 'A' + 10;
		} 
		else if (c >= 'a' && c <= 'f') 
		{
			value = c - 'a' + 10;
		} 
		else 
		{
			return -1;
		}
		result = result*16+value; // Shift left by 4 bits and add the new value
	}
	return result;
}
int main()
{
	char hexStr[20];
	cout << "请输入16进制字符串(支持0-9,A-F,a-f): ";
	cin >> hexStr;
		int decimalValue = parseHex(hexStr);
		if (decimalValue == -1)
		{
			cout << "输入的字符串包含非法字符,无法转换" << endl;
		}
		else 
		{
			cout << "转换后的10进制数为:" <<decimalValue<< endl;
	    } 
	return 0;
}