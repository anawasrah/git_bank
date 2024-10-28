#include <iostream>
using namespace std;
int main()
{
   for (size_t i = 1; i <= 5; i++)
   {
      for (size_t a = 4; a >= i; a--)
      {

         cout << " ";
      }
      for (size_t d = 1; d <= i; d++)
      {
         cout << "*";
      }

      {
         for (size_t a = 2; a <= i; a++)
         {

            cout << "*";
         }
      }
      cout << endl;
   }

   cout << endl;

   for (size_t i = 1; i <= 5; i++)
   {
      for (size_t a = 5; a >= i; a--)
      {

         cout << "*";
      }

      cout << endl;
   }

   cout << endl;
   for (size_t i = 1; i <= 5; i++)
   {
      for (size_t a = 1; a <= i; a++)
      {

         cout << "*";
      }

      cout << endl;
   }

   int m = 1;
   for (size_t i = 1; i <= 5; i++)
   {
      for (size_t a = 4; a >= i; a--)
      {
         cout << " ";
      }
      for (size_t n = 1; n <= m; n++)
      {
         cout << "*";
      }
      cout << endl;
      m += 2;
   }
int x =9;
    for (size_t i = 1; i <= 5; i++)
   {
      for (size_t a = 2; a <= i; a++)
      {
         cout << " ";
      }
      for (size_t n = 1; n <= x; n++)
      {
         cout << "*";
      }

      x -= 2;
      cout << endl;
   }

   return 0;
}