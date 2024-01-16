#include <iostream>

using namespace std;
int main () {

int i, j,temp,pass=0,num;
int a[11] = {10,2,0,14,43,25,18,1,5,45};
cout<<"Input list.....\n";
for ( i = 0; i <10; i++)
{
    cout<<a[i]<<"\t";
}
cout<<"end";
for ( i = 0; i < 10; i++)
    for ( j = 0; j < 10; i++)
    {
        if (a[j] < a[i])
        {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
        
    }
pass++;
}
cout <<"Sorted Element list...\n";
for ( i = 0; i < 10; i++)
{
   cout <<a[i]<<"\t";
}
cout<<"\n";
 cout <<"enter your number...\n";
 cin>>num;
 a[10]=num;
 for ( i = 0; i < 11; i++)
 {
    
    cout <<a[i]<<"\t";
    cout<<"\n Number of passes taken to sort thr list:<<pass<<end1";
}


return 0;