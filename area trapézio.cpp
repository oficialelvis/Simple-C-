#include<iostream>
#include<cmath>
#include<locale>
//atividade 16-> a) calculo de trapezio
using namespace std;

int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	int base_maior, base_menor, altura;
	float area_trap;
	
		cout << "** Ol�, iremos calcular a area de um trap�zio" << endl;
		cout << "** Precisaremos de tr�s itens: - Altura - Base Menor - Base Maior" << endl;

			cout << "- Digite a altura do trap�zio: ";
			cin >> altura;
			cout << "- Digite a base menor do trap�zio: ";
			cin >> base_menor;
			cout << "- Digite a base maior do trap�zio: ";
			cin >> base_maior;	
	
				area_trap = ((base_maior + base_menor) * altura)/2; //calculo matematico - area trap�zio
	
		cout << endl;
		cout << "A �rea do trap�zio � : " << area_trap << "cm�";	
	
	system("PAUSE >> NULL");
	return 0;
}
