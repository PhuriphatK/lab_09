#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    int i = 1;
    double pre, rate, itr, pay, pos, Total, actualPay;
	cout << "Enter initial loan: ";
    cin >> pre;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	
	pos = pre;
	
	while(pos > 0){
	    
        cout << setw(13) << left << i++; 
        cout << setw(13) << left << pre;

        itr = pre * rate / 100;
        cout << setw(13) << left << itr;

        Total = pre + itr;
        cout << setw(13) << left << Total;

        actualPay = (pay > Total) ? Total : pay;
        cout << setw(13) << left << actualPay;

        pos = Total - actualPay;
        cout << setw(13) << left << pos << "\n";

        pre = pos;
    }
    return 0;
}