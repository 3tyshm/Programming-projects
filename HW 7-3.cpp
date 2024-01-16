#include <iostream>
#include <cmath>
using namespace std;
int main() {

int n;
int m;
cin>>n;
for (m = 1; m<=n; m++){
    int reminder =n%m;
    cout<<"the reminder of"<<n<<"devided by"<<m<<"is"<<reminder<<endl;
}

return 0;








}