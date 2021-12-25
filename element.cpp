#include <iostream>
using namespace std;

int main()
{
   int data[100],n;
   cout << "Enter the number of elements: ";
   cin>>n;
   cout << "Enter elements: ";

   for(int i = 0; i < n; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < n; ++i)
      cout << endl << *(data + i);

   return 0;
}

