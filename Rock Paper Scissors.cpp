//Program which lets the user input rock, paper, scissor's. The computer will then randomly choose an answer and an outcome will be decided.

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));

int computer=rand()%3+1;
int user=0;

std::cout<<"====================\n";
std::cout<< "rock paper scissors!\n";
std::cout<<"=====================\n";

std::cout<<"1) rock \n";
std::cout<<"2) paper\n";
std::cout<<"3) scissors\n";
std::cout<<"shoot!\n";
std::cin>>user;
if(user>3){
    std::cout<<"Invalid input. \n";
}
else if(computer==user){
                          std::cout<<"Draw!\n";
                        }
else if(computer!=user){
                      // ^if computer doesn't equal user

                          if(user==1){ //if user chooses rock.

                                if(computer==2){ //if comp gets paper
                                      std::cout<<"Computer: Paper..You Lose.\n";
                                }


                                else{ //comp=scissors
                                      std::cout<<"Computer: Scissors..You win!\n";
                              }
                            }
                          
                          else if(user==2){//user==paper
                            if(computer==1){ //if comp gets rock
                                std::cout<<"Computer: Rock..You    win!\n";
                                }


                              else{ //comp=scissors
                                std::cout<<"Computer: Scissors..You lose.\n";
                              }
                            }

                          
                          else{ //if user==scissors
                            if(computer==1){ //if comp gets rock
                                std::cout<<"Computer: Rock..You    Lose.\n";
                                }


                              else if(computer==2){ //comp=paper
                                std::cout<<"Computer: Paper..You win!\n";
                              }
                            }
}
else{
  std::cout<<"invalid input";
}
}
