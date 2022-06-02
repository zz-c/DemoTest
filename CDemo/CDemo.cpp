// CDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define MAX_RANGE (1000)
#define random(x) (rand()%x)

int main0()
{
    std::cout << "Hello World!\n";



    int nStep = 10;
    int nK = 2;
    int nX = 100;
    int nY = 100;
    int nTimeStep = 10000;

    //while (1)
    //{
        //nX = nK * nX + nStep;
        //nY = nK * nY + nStep;

        srand((int)time(0));
        nX = nK * random(MAX_RANGE) + nStep;
        nY = random(MAX_RANGE);

        if (nX > 1000)
        {
            nX = nX / 5;
        }

        ::SetCursorPos(nX, nY);
        mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        printf("Point data = (%d, %d) \n", nX, nY);

        Sleep(nTimeStep);
    //};
        return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
