#include <iostream>

#include "Human.h"

int main(int argc, char* argv[])
{
    Human* human = new Human();
    human->setAge(28);
    human->setSex(1);

    std::cout << "human:" << human->getAge() << ", " << human->getSex() << std::endl;

}