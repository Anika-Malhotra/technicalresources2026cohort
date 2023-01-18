#include <iostream>
using namespace std;
int main()
{
int a;
int count;
cout<<"Enter a value of a:"<<endl;
cin>>a;

while (a>0)
{
    a=a/10;
    count= count+1;
}
cout<<"Number of digits in a="<<count<<endl;

return 0;

}
