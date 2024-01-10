#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Welcome to Yan Bin's calculator app." << endl;
	int times = 0;
	while (times <= 1000000) {
		int x, y;
		cout << "-----------------------------------------------------------------------------------------------------------" << "\n";
		cout << "First number. " << "\n";
		cin >> x;
		cout << "Second Number. " << "\n";
		cin >> y;
		int S;
		cout << "Operation. " << "\n";
		cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Square root\n7.Cube roots\n" << "\n";
		cout << "-----------------------------------------------------------------------------------------------------------" << "\n";
		cin >> S;
		switch (S) {
		case 1:
			cout << "Output : " << x + y << "\n";
			break;
		case 2:
			cout << "Output : " << x - y << "\n";
			break;
		case 3:
			cout << "Output : " << x * y << "\n";
			break;
		case 4:
			cout << "Output : " << x / y << "\n";
			break;
		case 5:
			cout << "Output : " << pow(x, y) << "\n";
			break;
		case 6:
			cout << "Output : " << sqrt(x) << "\n";
			break;
		case 7:
			cout << "Output : " << cbrt(x) << "\n";
			break;
		}
	}
	return 0;
}