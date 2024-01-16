#include <iostream>

using namespace std;
int main() {
int i;
int temp;
int b[5];
         cout<<" please enter number for arrayb[i]     :\n";
for ( i = 0; i < 5; i++)
{
    cin>>b[i];
}
        cout<<"name for array b[i] is  :\n";
for ( i = 0; i < 5; i++)
{
    cout<<b[i];
}
cout<<" \n";
int a[5];
cout<<"please enter number for array a[i] :\n";
for ( i = 0; i < 5; i++)
{
    cin>>a[i];
}
cout<<"members of array a[i] is :\n";
for ( i = 0; i < 5; i++)
{
    cout<<a[i];
}
for ( i = 0; i < 5; i++)
{
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
}
cout<<"\n";
cout<<"after swap";
cout<<"\n";
    cout<<"members of array b[i] is:\n";
for ( i = 0; i < 5; i++)
{
    cout<<b[i];
}
cout<<"\n";
cout<<"members of array a[i] is :\n";
for ( i = 0; i < 5; i++)
{
  cout<<a[i];
}
}