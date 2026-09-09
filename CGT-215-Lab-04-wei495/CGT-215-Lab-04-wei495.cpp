#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial: \n";
	int n;
	cout << "Enter a number:  ";
	while (true){
		cin >> n;
		int factorial = 1;
		if (n < 0) {
			cout << "Nice try, please enter a POSITIVE number...: ";
		}
		else if (n > 0) {
			cout << n<<"! = ";
			
			for (int i = 1; i < n; i++) {
				factorial *= (i+1);
				cout << i <<" * ";
			}
			cout << n << " = " << factorial;
			break;
		}
		else {
			cout <<"0! = 1";
			break;
		}
	}
	
}
void arithmetic() {
	cout << "Arithmetic Series: \n";
	int a;
	int b;
	int c;
	int sum = 0;
	cout << "Enter a number to start at: ";
	cin >> a;
	cout << "Enter a number to add each time:  ";
	cin >> b;
	cout << "Enter the number of elements in the series: ";
	cin >> c;
	for (int i = 0; i < c-1; i++) {
		cout << a << " + ";
		sum += a;
		a += b;
		
	}
	sum += a;
	cout << a << " = " << sum;
}
void geometric() {
	cout << "Geometic Series: \n";
	int a;
	int b;
	int c;
	int sum = 0;
	cout << "Enter a number to start at: ";
	cin >> a;
	cout << "Enter a number to multiply by each time: ";
	cin >> b;
	cout << "Enter the number of elements in the series: ";
	cin >> c;
	for (int i = 0; i < c - 1; i++) {
		cout << a << " + ";
		sum += a;
		a *= b;

	}
	sum += a;
	cout << a << " = " << sum;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << endl;
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}