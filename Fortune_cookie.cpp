//Program which uses a random  number generator to output a 'Fortune'.

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
    
  srand (time(NULL)); //Utilise this to ensure that a new random number is generated each time the program is run.
  int	fortune = rand() % 10; //generates a random number from 0-9 inclusive.
  
  if(fortune == 0) {

    std::cout << "Flattery will go far tonight.\n";
  
  } else if (fortune == 1) {
    
    std::cout << "Don't behave with cold manners.\n";
  
  } else if (fortune == 2) {
    
    std::cout << "May you someday be carbon neutral\n";
    
  } else if (fortune == 3) {
    
    std::cout << "You have rice in your teeth.\n";
    
  } else if (fortune == 4) {
    
    std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    
  } else if (fortune ==5) {
    
    std::cout << "No snowflake feels responsible in an avalanche.\n";
    
  } else if (fortune == 6) {
    
    std::cout << "He who laughs last is laughing at you.\n";
    
  } else if (fortune == 7) {
    
    std::cout << "If you look back, you'll soon be going that way.\n";
    
  } else if (fortune == 8) {
    
    std::cout << "You will die alone and poorly dressed.\n";
      
  } else if (fortune == 9) {
    
    std::cout << "The fortune you seek is in another cookie.\n";
      
  }
  
}
