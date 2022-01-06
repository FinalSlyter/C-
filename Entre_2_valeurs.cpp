                            // Taper un entier si la valeur est entre 50 et 100 gagné sinon perdu
#include<iostream>
#include <string>

int main()
{

int a;
std::cout << "Tapez un entier : "<< std::endl;
std::cin >> a;

if((a>=50)&&(a<=100)){
std::cout<<"GAGNE"<<std::endl; 
}

else {
 std::cout<<"PERDU"<<std::endl; 
}


std::cin.ignore();
std::cin.get();
return 0;
}
