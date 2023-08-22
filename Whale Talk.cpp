#include <iostream>
#include <vector>
#include <string>

int main(){

std::string input= "Enter your text here. \n"; \\User enters a string here, any phrase or word they'd like to convert to "Whale Language"

std::vector <char> vowels {'a','e','i','o','u'}; \\Store vowels here.

std::vector <char> result{}; \\initialise empty vector of characters

for(int i=0; i<input.size(); i++){   \\for Loop which runs through each of the characters of the user's input string.
  
  if(input[i]=='e' || input[i]=='u'){  \\If statement which checks if either of the characters are 'e's or 'u's, then appends them to the end of the result vector. (we do this because we need to double up any e's or u's to make the output more "Whale-ey"
    result.push_back(input[i]);
    }

    for(int k=0; k<vowels.size(); k++){  \\after we check for e's and u's then we run through the vowels and see if the character from the input string in this iteration of the for loop is a vowel, if it is we append it to result.
      if(input[i] == vowels[k]){
        result.push_back(input[i]);
    }
  }
}

for(int q=0; q<result.size(); q++){ //output the result vector element by element. 
  std::cout<<result[q];

}
  std::cout<<"\n";



}
