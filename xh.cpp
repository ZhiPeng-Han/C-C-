#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while(val <= 10) {
        sum += val; 
        ++val;  //将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    system("pause");
    return 0;
}