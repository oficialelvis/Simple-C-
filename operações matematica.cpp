#include<iostream>
#include<cmath> //biblioteca de matematica
#include<locale>
//atividade 15 - lista de PH - informatica
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese,");
	
	float number;
	float result_rai, resultado_sqrt, resultado_cbrt, resultado_pow_two, resultado_pow_three;
	
			cout << "Ol�, iremos fazer as seguintes opera��es matematica" << endl << endl;
			cout << "* Raiz Quadrada" << "  " << "* Raiz Cubiba"  << endl;
			cout << "* Potencia��o - quadrado" << "  " << "* Potencia��o - cubo" << endl << endl;
	
	cout << "Digite um numero para realizar essas opera��es: "; 
	cin >> number;
	cout << endl;
	
		resultado_sqrt = sqrt(number); //fun��o matematica ~~ raiz quadrada
		resultado_cbrt = cbrt(number); //fun��o matematica ~~ raiz cubica
		resultado_pow_two = pow(number,2); //fun��o matematica ~~ elevado ao quadrado (primeiro a base, segundo o expoente)
		resultado_pow_three = pow(number, 3); //fun��o matematica ~~ elevado ao cubo
	
	cout << "- A raiz quadrada de: " << number << endl;
	cout << "- � igual a : " << resultado_sqrt << endl << endl;
	
	cout << "- A raiz cubica de : " << number << endl;
	cout << "- � igual a: " <<  resultado_cbrt << endl << endl;
	
	cout << "- A potencia��o de: " << number << endl;
	cout << "- � igual a: " << resultado_pow_two << endl << endl;
	
	cout << "- A potencia��o de: " << number << endl;
	cout << "- � igual a: " << resultado_pow_three << endl << endl;
	
	system ("PAUSE >> NULL");
	return 0;
}
