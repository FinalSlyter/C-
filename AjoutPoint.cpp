                                                            // Rajouter un point à chaque phrase
#include <iostream>
#include <string>
	
	int main ()
   {
       std::string phrase {};
       std::cout << "Entre une phrase" << std::endl;
       std::getline(std::cin,phrase);


       if (phrase.back()!='.'){
          
           phrase.push_back('.');
           std::cout << phrase << std::endl;
           std::cout <<"Je me permet de te rajouter un point" << std::endl;
       }

	std::cin.get();
	 return 0;
 }
