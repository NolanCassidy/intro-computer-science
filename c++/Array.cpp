// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016

#include <iostream>
#include <string>

using namespace std;

const MAXWORDS = 5;

void ShowWords(string word[])
{
   for (int i=0; i<MAXWORDS; i++)
      cout << word[i] << endl;
}

void main()
{
   string word[MAXWORDS];

   word[0] = "cat";
   word[1] = "dog";
   word[2] = "fish";
   word[3] = "ant";
   word[4] = "bee";

   ShowWords(word);
}
