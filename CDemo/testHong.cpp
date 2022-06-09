#include <iostream>
#if DEBUG || _DEBUG
#define LOG(x) std::cout << "debug:" << x << std::endl
#else
#define LOG(x) std::cout << "release:" << x << std::endl
#endif

#if HONG_TEST
#define LOG_HONG(x) std::cout << "debug hong:" << x << std::endl
#else
#define LOG_HONG(x) std::cout << "release hong:" << x << std::endl
#endif


int main() {//mainHong

    std::cout << "mainHong" << std::endl;
    LOG("testlog");

    LOG_HONG("testhonglog");
    //getchar();

    return 0;
}