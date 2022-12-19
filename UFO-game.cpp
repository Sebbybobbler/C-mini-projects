#include <iostream>
#include "ufo_functions.hpp"

int main() {
//Greet the player.
greet();

//answer to game. player trying to guess.
std::string codeword="codecademy \n";

// the players answer, initialised as below.
std::string answer="__________ \n";

//tracks the number of misses the player has.
int misses=0;

//vector of players incorrect letter guesses.
std::vector<char> incorrect={'x'};

//tracks whether player guessed right.
bool guess=false;

//captures the players guessed letter
char letter;

//Code repeats until correct or runs out of go's
while(answer!=codeword && misses<7){

//ASCII art to show how many misses.
display_misses(misses);

// show's incorrect letter guesses and current state of answer.
display_status(incorrect, answer);

std::cout<<"Please enter your guess: ";
std::cin>>letter;
std::cout<<"\n";

for(int q=0; q<=codeword.size(); q++){

      if(letter==codeword[q]){
        answer[q]=letter;
        guess = true;
      }
}
if(guess==true){
  std::cout<<"Correct! \n";
}
else{
  std::cout<<"Incorrect! The tractor beam pulls the person in further. \n";
  incorrect.push_back(letter);
  misses++;
}

guess= false;
 }

end_game(answer, codeword);


}
