// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void GetWords(vector<string> & words)
{
   // Get words from the user, one-at-a-time, and add them to the vector
   do
   {
      // Increase the vector size by 1
      words.resize(words.size()+1);

      cout << "Enter a word (ENTER when done):  ";
      getline(cin, words[words.size()-1]);
   } while (words[words.size()-1] != "");

   // Decrease the vector size by 1 to account for the empty spot at the end
   words.resize(words.size()-1);
}

void ShowData(vector<string> words)
{
   cout << "\nSize of the vector:        " << words.size() << endl;
   cout << "First word in the vector:  " << words.front() << endl;
   cout << "Last word in the vector:   " << words.back() << endl;
}

void ShowWords(vector<string> words)
{
   cout << "\nList of all words in the vector:\n";
   for (int counter=0; counter<words.size(); counter++)
      cout << words[counter] << endl;
   cout << endl;
}

void main()
{
   // Define a vector (words) with a starting size of zero
   vector<string> words(0);

   GetWords(words);
   ShowData(words);
   ShowWords(words);
}
