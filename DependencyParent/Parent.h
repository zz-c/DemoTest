#ifndef __PARENT_H__
#define __PARENT_H__

#include <iostream>

namespace zz {

    class Parent {
    public:
        Parent() {
            std::cout << "namespace construct parent..." << std::endl;
            age = 0;
            sex = 0;
        };

        ~Parent() {
            std::cout << "namespace destruct parent..." << std::endl;
        }

    public:
        void setAge(int a);
        int getAge();

        void setSex(int s);
        int getSex();

    private:
        int age; //
        int sex; // 0:male 1:fmale
    };

} //namespace

#endif //__PARENT_H__
