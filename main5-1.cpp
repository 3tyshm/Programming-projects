#include <iostream>
using namespace std;

main ( ) {
int a;
 cout << "enter the numberical value of your salary.";
 cin >> a;
 
   if (a < 6000000) {
 		cout << "your final salary is:  " << a;
		 }
 	else if ( 6000000 <= a && a < 8000000 ) {
 		cout << "your final salary is:  " << a - (a*0.05);
	 }
 	else if (8000000 <= a && a < 10000000) {
 	    cout << "your final salary is:  " << a - (a*0.10);	
	 }
 	else if (10000000 <= a && a < 14000000) {
 		cout << "your final salary is:  " << a - (a*0.15);
	 }
 	else if (14000000 <= a && a < 18000000){
 		cout << "your final salary is:  " << a - (a*0.20);
	 }
	else if (18000000 <= a && a < 25000000) {
		cout << "your final salary is:  " << a - (a*0.25);
     }
 	else {
 		cout << "your final salary is:  " << a - (a*0.35);
	 }
}