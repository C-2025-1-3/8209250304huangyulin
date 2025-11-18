#include <iostream>
#include <iomanip>
int main()
{
    double F;
    std::cout << "请输入华氏温度:";
    std::cin >> F;
    double C = 5.0 / 9.0 * (F - 32);
    std::cout << std::fixed << std::setprecision(2) << "摄氏温度为: " << C << std::endl;
    return 0;
}