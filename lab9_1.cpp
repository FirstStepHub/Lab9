#include<iostream>
#include<iomanip>
using namespace std;

int year = 1 ;
double loan ;
double rate ;
double pay ;
double interest ;
double total ;
double payment ;
double prevBalance ;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	prevBalance = loan;
	
	while (prevBalance > 0)
	{
		interest = prevBalance * (rate/100) ;
		total = prevBalance + interest ;
		payment = pay ;
		
		if(total < pay)
		{
            payment = total ;
        }

        double newBalance = total - payment;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prevBalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newBalance;
	cout << "\n";	

		prevBalance = newBalance;
        year++;
	}
	
	return 0;
}
