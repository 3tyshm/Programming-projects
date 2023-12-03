#include <iostream>

using namespace std;

main () {
     float num1, num2;
	 char op;
     cout << "please enter the first number.";
     cin >> num1;
     cout << "please enter the second number. ";
     cin >> num2;
     cout << "enter the operation (+, -, *, /)";
     cin >> op;
     
  switch (op) {
  	case  '+' :
  	    cout << "Sum" << num1 + num2;
  	    break;
  	case  '-' :
  	    cout << "differece" << num1 - num2;
  	    break;
  	case  '*' :
  	    cout << "product" << num1 * num2;
  	    break;
  	case  '/' :
  	    cout << "quotinet" << num1 / num2;
  	    break;
    	
  }
}