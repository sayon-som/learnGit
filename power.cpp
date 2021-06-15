#include <iostream>
using namespace std;
int main()
{
 int n,p;
 cin >>n>>p;
 int pow=1;
 for(int i=1;i<=p;i++)
 {
     pow*=n;
 }
 cout<<pow<<endl;
    return 0;
}