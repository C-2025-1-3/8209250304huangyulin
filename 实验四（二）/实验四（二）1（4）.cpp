#include<iostream>
using namespace std;

int* f() {
    // 用new在堆区创建动态数组，返回其地址
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}

int main() {
    int* p = f();
    cout << p[0] << endl;  // 输出1
    cout << p[1] << endl;  // 输出2

    delete[] p;  // 释放堆区数组内存，避免内存泄漏
    p = nullptr; // 置空指针，防止野指针
    return 0;
}
