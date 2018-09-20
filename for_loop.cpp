#include <iostream>
#include <cstdio>
using namespace std;
typedef struct _match {
   int n;
   char str[10];
}MATCH;

MATCH m[] = {
   {1,"one"},
   {2,"two"},
   {3,"three"},
   {4,"four"},
   {5,"five"},
   {6,"six"},
   {7,"seven"},
   {8,"eight"},
   {9,"nine"}
};

int main()
{
   int a,b;
   cin >> a;
   cin >> b;

   int i,j;
   for (i = a; i <=b;i++)
   {
      if (i >= 1 && i <=9)
      {
         for (j = 0; j <9 ;j++)
         {
            if (i == m[j].n)
            {  
               cout << m[j].str << endl;
               break;
            }
         }
         else if ( i > 9)
         {
            if (i%2 == 0) cout << "even" << endl;
            else cout << "odd" << endl;
         }

      }
   }
   return 0;
}
