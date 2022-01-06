                                //demander l'âge de la personne et dire si celle-ci est mineur ou bien majeur
#include <iostream>

int main()
{
    std::cout << "Quel age a-tu ? ";
    int age { 0 };
    std::cin >> age;
  
  std::cout << "Tu as " << age << "ans et " <<std::endl;
  
    if (age < 18){
        std::cout << "tu es mineur " << std::endl;
    }
    else {
        std::cout << "tu es majeur " << std::endl;
    }
    return 0;
}
