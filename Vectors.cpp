#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector <int> anton (5,5);
   cout<<"This is vector "<<endl<<anton[0]<<endl<<anton[1]<<endl<<anton[2]<<endl<<anton[3]<<endl<<anton[4]<<endl;
   anton.push_back(20);
   cout<<"This is push back vector "<<endl<<anton[0]<<endl<<anton[1]<<endl<<anton[2]<<endl<<anton[3]<<endl<<anton[4]<<endl<<anton[5];
   anton.push_back(19 );
   cout<<endl<<anton.at(6)<<endl;
}
