// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main()
{
   vector<string> words;

   words.push_back("cat");
   words.push_back("dog");
   words.push_back("fish");

   cout << "Size of vector:  " << words.size() << endl;
   cout << "List of all words in the vector:\n";
   for (int i=0; i<words.size(); i++)
      cout << "   " << words[i] << endl;
   cout << endl;

   words.resize(5, "shark");
   cout << "Resized the vector to 5 and made the new entries all 'shark':\n";
   for (i=0; i<words.size(); i++)
      cout << "   " << words[i] << endl;
   cout << endl;

   words.erase(words.begin());
   words.erase(words.begin()+1);
   cout << "Deleted the first and third words in the vector:\n";
   for (i=0; i<words.size(); i++)
      cout << "   " << words[i] << endl;
   cout << endl;

   words.clear();
   cout << "Cleared the vector.  Current size of the vector:  ";
   cout << words.size() << endl << endl;
}
