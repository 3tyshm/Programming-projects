#include <iostream>
#include <cmath>

using namespace std;
int main() {

int a,b,r,q;

cout<<"please enter your number\n";

cin>>a;
cout<<"devided to\n";
cin>>b;
if (a==b) {

   cout<<"your q is 1 and ypur r is 0";
}
q=0;
r=0;
while (a>=b) {

    a=a-b;
    q++;
}
cout<<r<<"  ";
cout<<q;

}







