#include <iostream>
int main()
{
    (std::cout << "Enter two numbers:") << std::endl; //输出运算符，将左侧的值写入右侧的对象
    int v1 = 0, v2 = 0; //std::命名空间,初始化变量
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 
              << " is  " << v1 * v2 << std::endl;
    //system("pause");
    cin.clear();
    cin.sync();
    cin.get();
    return 0;    
}