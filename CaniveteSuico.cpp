#include <iostream>
#include <stdlib.h>
using namespace std;

//função menu 
int funcaomenu(){
	char op;
	cout << "\n---MENU OPCOES\n| X - SAIR DO PROGRAMA\n| 1 - Converter Binario para Decimal \n| 2 - Converter decimal para binario\n| 3 - Converter velocdade Km/h para M/s\n| 4 - TABUADA\n---";
	cout << " Escolha opcao:"; 
	cin >> op;
	system ("CLS");
	return op;
	
}

//função submenu<

int subfuncao(){
	char sub;
	cout << "--- SUBMENU TABUADA\n" << "| X - SAIR DO MENU \n | 1 - ADICAO\n | 2 - SUBTRACAO \n | 3 - DIVISAO \n | 4 - MULTIPLICACAO \n ---";
	cin >> sub;
	return sub;
	
}

long long int expoente(int b, int e){
	long long int resultado = 1;
	if(e != 0){
		for(int i = 1; i <= e; i ++){
			resultado = resultado * b;
		}
	}
	return resultado;
}
	

// função converte numero binario em numero decimal 
int converteBinarioParaDecimal(long long int numbinario){
	int decimal = 0, i = 0, digito;
	
	while(numbinario != 0){
		digito = numbinario % 10;
		numbinario = numbinario / 10;
		decimal = decimal + digito * expoente(2, i);
		i++; 
		
	}
	return decimal;
}

//funcao converte numero decimal em numero binario
int converteDecimalParaBinario(long long int num){
	int divisao = 0;
	int i = 0;
	int resto = 0;
	while (num > 0){
		resto  = num % 2;
		num = num / 2;
		divisao += resto * expoente(10, i);
		i++;
	}
	return divisao;
}


//funcao converte velocidade Km/h para m/s 
double convertevelocidade( double k){
	double m;
	m = k / 3.6 ;
	return m;
}

// funcao adicao
float funcaoadicao(){
	float array[2],resultado;
	for (int i = 0; i < 2; i++){
		cout << "Insira " << i+1 << " valor";
		cin >> array[i];
	}
	resultado = array[0] + array[1];
	return resultado;
}

// funcao subtracao
float funcaosubtracao(){
	float array[2],resultado;
	for (int i = 0; i < 2; i++){
		cout << "Insira " << i+1 << " valor";
		cin >> array[i];
	}
	resultado = array[0] - array[1];
	return resultado;
}

// funcao divisao
float funcaodivisao(){
	float array[2],resultado;
	for (int i = 0; i < 2; i++){
		cout << "Insira " << i+1 << " valor";
		cin >> array[i];
	}
	resultado = array[0] / array[1];
	return resultado;
}	

// funcao multiplicacao
float funcaomultiplicacao(){
	float array[2],resultado;
	for (int i = 0; i < 2; i++){
		cout << "Insira " << i+1 << " valor";
		cin >> array[i];
	}
	resultado = array[0] * array[1];
	return resultado;
}
	


int main(){
	char opcao, alea, subopcao;
	long long int bin;
	float k, chamarfuncao;
	int num;
	cout << funcaomenu;
	do{
		opcao = funcaomenu();
		switch (opcao)
		{
			case 'x':        
				cout << "Adeus" ;
			break;
			case 'X' :
				cout << "Adeus";
			break;
			case '1':
			cout << "insira numero binario: ";
				cin >> bin ;
				cout<< converteBinarioParaDecimal(bin);
				cout << "\nInsira uma tecla para prosseguir";
				cin >> alea;
				system ("CLS");
			break;
			case '2':
				cout << "Insira numero decimal: " ;
				cin >> num;
				cout << converteDecimalParaBinario(num);
				cout << "\nInsira uma tecla para prosseguir";
				cin >> alea;
				system ("CLS");
				
			break;
			case '3':
				cout << "Insira a velocidade?" ;
				cin >> k;
				cout << convertevelocidade(k);
				cout << "\nInsira uma tecla para prosseguir";
				cin >> alea;
				system ("CLS");
			break;
			case '4':
				system ("CLS");
				cout << subfuncao(); 
				do{
					subopcao = funcaomenu();
					switch (subopcao)
					{
						case 'x':        
							cout << "Adeus" ;
						break;
						case 'X' :
							cout << "Adeus";
						break;
						case '1':
							cout << "programa que soma 2 numeros\n ";
							chamarfuncao = funcaoadicao();
							cout<< "A soma dos dois operandos é : " << chamarfuncao;
							cout << "\nInsira uma tecla para prosseguir";
							cin >> alea;
							system ("CLS");
						break;
						case '2':
							cout << "programa que subtrai 2 numeros\n ";
							chamarfuncao = funcaosubtracao();
							cout<< "A subtracao dos dois operandos é : " << chamarfuncao;
							cout << "\nInsira uma tecla para prosseguir";
							cin >> alea;
							system ("CLS");
							
						break;
						case '3':
							cout << "programa que divide 2 numeros\n ";
							chamarfuncao = funcaodivisao();
							cout<< "A divisao dos dois operandos é : " << chamarfuncao;
							cout << "\nInsira uma tecla para prosseguir";
							cin >> alea;
							system ("CLS");
						break;
						case '4':
							cout << "programa que multiplica 2 numeros\n ";
							chamarfuncao = funcaomultiplicacao();
							cout<< "A multiplicacao dos dois operandos é : " << chamarfuncao;
							cout << "\nInsira uma tecla para prosseguir";
							cin >> alea;
							system ("CLS"); 
						break;
						default:
							cout << "Opcao invalida";
						break;
					}
				}while (subopcao != 'x' && subopcao != 'X' );
			break;
			default:
				cout << "Opcao invalida";
			break;
		}
	}while (opcao != 'x' && opcao != 'X' );
	return 0;
}

