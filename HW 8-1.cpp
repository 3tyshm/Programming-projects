#include <string>
#include <climits>
 int main() {
    int n = 18;
    int n,max = INT_MTN, min = INT_MAX, a;
    cout <<"Enter 10 Numbers: ";
    for (int i = 0; i <n; i++)
    {
        cin>>num;
        if (num>max) 
        {
            max = num;
        }
        if (num<min)
        {
           min = num;
        }
        
    }
    
    cout <<"Maximum number is: " << max << endl;
    cout<<"Minimum number is: " << min << endl;
    a = max + min;
    cout<<"average of max and min is: " <<a/2;
  













  return 0; }