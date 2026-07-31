#include <iostream>
#include <string>

int main() {
    int score = 0; 
    int targetnumber = 2001;
    int yearuser;

    std::cout << "Welcome to quiz" << std::endl;
std::cout<<"captalize every first letter of answers\n";
    std::cout << "what year did the 911 attack happen" << std::endl;
    std::cin >> yearuser;

    if (yearuser == targetnumber) { 
        score = 1;

        if (yearuser == targetnumber) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was 2001." << std::endl;
    }
if(yearuser == targetnumber) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
  std::string targetcountry = "Sweden"; 
    std::string countryuser;
std::cout<<"what country is meatballs famously from?\n";


std::cin>> countryuser;
if(countryuser == targetcountry) { score = 2;
   if (countryuser == targetcountry) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was sweden." << std::endl;
    }
    
    if(countryuser == targetcountry) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
    int targetplanet = 8;
    int planetuser;
std::cout<<"how many planets r in our solar system?\n";


std::cin>>planetuser;
if(planetuser == targetplanet) { score = 3;
   if (planetuser == targetplanet) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was 8 (pluto isnt a planet lol)." << std::endl;
    }
    
    if(planetuser == targetplanet) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
    std::string targetfood = "Pizza";
    std::string fooduser;
std::cout<<"what food is italy known for?\n";


std::cin>> fooduser;
if(fooduser == targetfood) { score = 4;
   if (fooduser == targetfood) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was pizza." << std::endl;
    }
    
    if(fooduser == targetfood) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
    int targetyear = 1969;
    int yearuser2;
std::cout<<"what year did man walk on the moon?\n";


std::cin>> yearuser2;
if(yearuser2 == targetyear) { score = 5;
   if (yearuser2 == targetyear) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was 1969." << std::endl;
    }
    
    if(yearuser2 == targetyear) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
    std::string targetanimal = "Blue Whale";
    std::string animaluser;
std::cout<<"what is the largest animal in the world?\n";


std::cin>> animaluser;
if(animaluser == targetanimal) { score = 6;
   if (animaluser == targetanimal) { 
            std::cout << "correct!" << std::endl;
        }
    }
    else { 
        std::cout << "wrong! it was the blue whale." << std::endl;
    }
    
    if(animaluser == targetanimal) {  }
else { return 0; }
    std::cout << "your score is " << score << std::endl;
    
    return 0;
}