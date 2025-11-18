#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUnInt = 65534; // 0xfffe
    cout << "output in unsigned int type:" << testUnInt << endl;
    cout << "output in char type:" << static_cast<char>(testUnInt) << endl;
    cout << "output in short type:" << static_cast<short>(testUnInt) << endl; // 为什么结果为-2？
    cout << "output in int type:" << static_cast<int>(testUnInt) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnInt) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnInt << endl; // 16进制输出
    return 0;
}