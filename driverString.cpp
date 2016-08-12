// Noé Lomelí
// August 12, 2016
// Using strtok to tokenize a string

#include <iostream>
#include <string> // prototype for strtok
using namespace std;

int main()
{
  char sentence[] = "This is a sentence with 7 tokens";

  cout << "The string tokenized is:\n\n" << sentence << "\n\nThe tokens are:\n\n";

  //begin tokenization of sentence
  char *tokenPtr = strtok(sentence, " ");

  // continue tokenizing sentence until tokenPtr becomes NULL
  while(tokenPtr != nullptr)
  {
    cout << tokenPtr << '\n';
    tokenPtr = strtok(nullptr, " ");//get next token
  }// end while
  cout << "\nAfter strtok, sentence = " << sentence << endl;
}// end main
