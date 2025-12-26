#include <iostream>
using namespace std;

void f(char* st, int i) {
    st[i] = '\0';   // 将第i个字符设为字符串结束符
    cout << st << endl;  // 输出当前截断后的字符串
    if (i > 1) f(st, i - 1);  // 递归调用，i递减
}

int main() {
    char st[] = "abcd";  // 初始字符串为 "abcd"（长度4，索引0-3）
    f(st, 4);  // 调用函数，i=4
    return 0;
}