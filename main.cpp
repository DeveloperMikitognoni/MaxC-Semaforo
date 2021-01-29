#include <iostream>
using namespace std;

int main() {
  float n;
  cout << "Inserire due numeri da 0 a 2" << endl;
  int i = 12;
do{
  cin >> n;
	if (n > 2 || n < 0)
  {
	cout << "Numero 0 2" << endl;
	}
	if(n == 0) {
	cout << "rosso" << endl;
	i=11;
	}
	else if(n == 1) {
	cout << "giallo" << endl;
	i=11;
	}
	else if(n == 2) {
	cout << "verde" << endl;
	i=11;
	}
} while( i == 12);
}