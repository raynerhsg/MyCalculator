// CalculadoraSimples.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int condition();
int calculator();

int calculator() {

	float num1, num2;
	int opr;

	cout << "\nType a number: ";
	cin >> num1;

	cout << "\nChoose an operator:\n";
	cout << "1: Additon\n" << "2: Subtraction\n" << "3: Division\n" << "4: Multiplication\n" << "\nChoose: ";

	cin >> opr;


	cout << "\nTyper another number: ";
	cin >> num2;

	switch (opr) {
	case 1:
		cout << "\nThe result is: " << num1 + num2;
		break;
	case 2:
		cout << "\nThe result is: " << num1 - num2;
		break;
	case 3:
		cout << "\nThe result is: " << num1 / num2;
		break;
	case 4:
		cout << "\nThe result is: " << num1 * num2;
		break;
	default:
		cout << "\nOperator not found! ";
	}

	condition();

	return 0;

}




// leave or not
 int  condition() {
	char resp;
	cout << "\n\nDo you want continue? Y/N -  ";
	cin >> resp;

	switch (resp) {
	case 'y':
		calculator();  // What am I supposed to do here??
			break;
	case 'n':
		cout << "\nHave a good day!";
		break;
	}
	
	return 0;
}

int main() {
	calculator();
	return 0;
}