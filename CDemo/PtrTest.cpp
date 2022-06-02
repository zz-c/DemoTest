#include <iostream>
#include "Human.h"


void printHumanArr(Human** humanArr) {
    for (int i = 0; i < 4;i++) {
        Human* man = humanArr[i];
        std::cout << "man:" << man->getAge() << ", " << man->getSex() << std::endl;
  
    }
}

int main1()
{
    std::cout << "ptr test!\n";

    int i, * p = &i;
    //指向指针的指针。
    int** q = &p; 

    //创建5个int型的变量
    int* pArr = new int[5];
    //当你创建对象数组的时候，对象是用指针表示的，你需要创建对象指针的数组
    Human* human = new Human();
    std::cout << "human:" << human->getAge() << ", " << human->getSex() << std::endl;

    Human** humanArr = new Human * [4];
    humanArr[0] = new Human();
    humanArr[0]->setAge(0);
    humanArr[1] = new Human();
    humanArr[1]->setAge(1);
    humanArr[2] = new Human();
    humanArr[2]->setAge(2);
    humanArr[3] = new Human();
    humanArr[3]->setAge(3);
    printHumanArr(humanArr);

    return 0;
}