#include <iostream>
using namespace std;
int main()
{
   int a , b , c;
   cout<<"Enter two Numbers";
   cin>>a>>b;
   cout<<"Choose The Operation \n1. Additiion \n2. Substraction \n3. Multiplication \n4. Division";
   cin>>c;
   switch (c)
   {
   case 1 :
               cout<<"Addition ="<<a+b<<endl;
     break;
   case 2 :
               cout<<"Substraction ="<<a-b<<endl;
     break;
   case 3 :
               cout<<"Multiplication ="<<a*b<<endl;
     break;
   case 4 :
               cout<<"Division ="<<a/b<<endl;
     break;    
   default:
     break;
   }
}