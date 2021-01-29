#include <iostream>
using namespace std;

int main() {
  float n;
  cout << "Inserire un numero tra 0 a 2" << endl;
  int i = 12;
do{
  cin >> n;
	if (n > 2 || n < 0)
  {
	cout << "Il numero deve essere compreso tra 0 e 2" << endl;
	}
	if(n == 0) {
	cout << "Il semaforo è rosso" << endl;
	i=11;
	}
	else if(n == 1) {
	cout << "Il semaforo è giallo" << endl;
	i=11;
	}
	else if(n == 2) {
	cout << "Il semaforo è verde" << endl;
	i=11;
	}
} while( i == 12);
}