#include <iostream>
#include <thread>
#include <windows.h>

using namespace std;
//创建线程

void show() {
    for (int i = 0; i < 10; ++i) {
        Sleep(200);//休眠
        cout << "---i:" << i << endl;
    }
}
int mainThread() {//mainThread
    thread t(show);
    thread t2(show);
    cout << "执行了main函数" << endl;
    //getchar();
    //让主线程等待子线程运行结束后，再继续下面的逻辑，否则主线程运行结束，程序就结束了。
    t.join();
    t2.join();
    return 0;
}
