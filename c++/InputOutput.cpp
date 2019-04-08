// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the standard approaches to
    displaying information to the user and getting
    information from the user.  The 'cout' and 'cin'
    statements, along with the stream insertion (<<)
    and stream extraction (>>) operators, accomplish
    these tasks.  Note that a stream operator must be
    placed between EACH item being displayed to or read
    from the user.

   When sending information to the output stream, items
    in quotation marks are displayed exactly as is.
    Other output is considered to be variables or
    functions.  To display special (non-printable)
    "escape" characters, the backslash (\) is used
    along with specific characters:

       \a  =  alert (bell)
       \t  =  tab
       \n  =  newline (line feed)
       \r  =  carriage return
       \f  =  form feed
       \'  =  single quote (apostrophe)
       \"  =  double quote (quotation marks)
       \\  =  backslash

   The statement 'endl' (which stands for "end line"),
    when sent to the output stream, inserts a newline
    (\n) character.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1, num2, num3;

   cout << "Enter an integer:  ";
   cin >> num1;
   cout << "\tYou entered the number " << num1 << ".";
   cout << endl << endl;

   cout << "Enter three integers:  \n";
   cin >> num1 >> num2 >> num3;
   cout << "\tYou entered " << num1 << " and " << num2
        << " and " << num3 << ".\n\n\n";

   return 0;
}