#include<iostream>
#include<locale>
//Programa para testar jun��o, soma, media e nomes
using namespace std;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	string name; 
	int n1, n2, n3, n4,soma, fimbimestre, media;
	
			cout << "Ol�. Seja Bem Vindo \n";
			cout << "Me diz seu nome: ";
			getline(cin, name);
		
			cout << "Sej� bem vindo, " << name << "." << endl;
			
			cout << "* Qual a sua nota do 1� bimestre ";
			cin >> n1;
			
			cout << "* Qual a sua nota do 2� bimestre ";
			cin >> n2;
			
			cout << "* Qual a sua nota do 3� bimestre ";
			cin >> n3;
			
			cout << "* Qual a sua nota do 4� bimestre ";
			cin >> n4;
		
	soma = n1 + n2 + n3 + n4;
	media = soma / 4;
	
			cout << endl;
			cout << "** O Somat�rio das suas notas foi igual �: " << soma;
			cout << endl;
			cout << "** Sua m�dia final foi, " << media;
			cout << endl;
	
	if (media>=7)
		cout << "Parab�ns " << name  << "! Voc� foi aprovado";
	else
		cout << "Desculpa " << name << "...mas voc� foi reprovado.";

	system("PAUSE");		
	return 0;			
}
