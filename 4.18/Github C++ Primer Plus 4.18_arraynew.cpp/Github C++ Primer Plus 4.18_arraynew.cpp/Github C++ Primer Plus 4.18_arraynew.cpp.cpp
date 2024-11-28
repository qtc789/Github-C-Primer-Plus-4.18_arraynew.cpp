// Github C++ Primer Plus 4.18_arraynew.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1]=   " << p3[1] << endl;
    p3 = p3 + 1;//这是在这个动态数组中这个ps指针往后移动一个double类型单位的数字
    cout << "now p3[0]=   " << p3[0] << endl;
    cout << p3[1] << endl;
    p3 = p3 - 1;
    delete[]p3;


}


