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
    //ָ��ָ���ָ�롣
    int** q = &p; 

    //����5��int�͵ı���
    int* pArr = new int[5];
    //���㴴�����������ʱ�򣬶�������ָ���ʾ�ģ�����Ҫ��������ָ�������
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