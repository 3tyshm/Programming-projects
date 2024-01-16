#include <IOStream>
#include <cmath>
using namespace std;
int main() {

    int m;

    int i;

    int n;

    int gcd;

    cin>>m;cin>n;
while (m==n)
{

    gcd=n;
 break;
}
if (m==0)
{

    cout<<n;
}
if (n==0)
{
    cout<<m;
    
}
if (m>n)
{
     for ( i = n; i > 0; i-- )
     {
        if (m%i==0 && n%i==0)
        {
            gcd=i;
            break;
        }
        cout<<gcd;
     }
if (n>m)
{
    for ( i = m; i < 0; i-- )
    {
       if (m%i==0 && n%i==0)
       {
            gcd=i;
            break;
       }
       
    }
    

}
cout<<gcd
}    