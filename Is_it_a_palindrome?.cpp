//C++ function which takes a string text input and outputs whether it is a palindrome or not.

#include <iostream>

// Define is_palindrome() here:
void is_palindrome(std::string text){

      std::string reverse = ""; //initialise empty string named reverse.

      for(int l=text.size()-1; l>=0 ; l--){ //Create for loop which runs through elements of the input string 'text' and appends each element into 'reverse' in reverse order.

        reverse += text[l];

      }
    if(text==reverse){std::cout<< text << " is a palindrome. \n";} // If/else statement which outputs " 'text' is/ (is not) a palindrome." 
    else{ std::cout<< text << " is not a palindrome. \n";};


}

int main() {
  
  
 is_palindrome("madam");
 is_palindrome("ada");
 is_palindrome("lovelace"); 
  
}
