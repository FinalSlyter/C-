                         // Afficher les jours, le mois et l'année de la personne et dire si celle-ci est mineure ou bien majeure
#include <iostream>
#include <iostream>

int main()
{

      std::cout << "Quelle jours est tu ne ? ";
    int jours { 0 };
    std::cin >> jours;

          std::cout << "Quelle mois est tu ne ? ";
    int mois { 0 };
    std::cin >> mois;
  

        std::cout << "Quelle annee est tu ne ? ";
    int annee { 0 };
    std::cin >> annee;
     
    std::cout << "Tu es ne le " << jours << "/ " << mois << "/" << annee <<std::endl;
   
    if (annee > 2004){
        std::cout << "Tu es MINEUR" << std::endl;
    }
    else if (annee<2004){
        std::cout <<"Tu es MAJEUR"<< std::endl;
    }
   
  
  
  
    return 0;
}
