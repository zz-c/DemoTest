#include <iostream>
#include <thread>
#include <windows.h>

using namespace std;
//�����߳�

void show() {
    for (int i = 0; i < 10; ++i) {
        Sleep(200);//����
        cout << "---i:" << i << endl;
    }
}
int mainThread() {//mainThread
    thread t(show);
    thread t2(show);
    cout << "ִ����main����" << endl;
    //getchar();
    //�����̵߳ȴ����߳����н������ټ���������߼����������߳����н���������ͽ����ˡ�
    t.join();
    t2.join();
    return 0;
}
