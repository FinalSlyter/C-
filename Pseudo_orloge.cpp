                    // Rentrer un nombre et afficher la période de la journée correspondante 
#include <iostream>

int main (){
std::cout << "Quelle eure est-il" << std::endl;
int heure { 0 };
std::cin >> heure;

if (heure > 0 && heure < 7){
    std::cout << "Zzz..." << std::endl;
}
else if (heure > 7 && heure < 12){
    std::cout << "C'est le matin!" << std::endl;
}
else if (heure == 12){
    std::cout << "Il es midi!" << std::endl;
}
else if (heure > 12 && heure < 18){
    std::cout << "C'est l'apres-midi" << std::endl;
}
else if (heure > 18 && heure < 24){
    std::cout << "C 'est le soir" << std::endl;
}
else if (heure == 24 && heure == 0){
    std::cout << "Il est minuit" << std::endl;
}

else
{
std::cout << "ERREUR!" << std::endl;
}

std::cin.get();
return 0;    
}
