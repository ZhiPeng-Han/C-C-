#include <iostream>
int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value) //输入数据为空时，cin为非值，ctrl+z为结束符
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    system("pause");
    return 0;
}