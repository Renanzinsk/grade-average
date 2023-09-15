#include <iostream>
	using namespace std;

main(){
	int n1, n2, n3, n4, soma, media;
	
	cout << "As nota são de 0 ate 10";
	
	cout << "\n Digite a primeira nota: ";
	cin >> n1;
	cout << "\n Digite a segunda nota: ";
	cin >> n2;
	cout << "\n Digite a terceira nota: ";
	cin >> n3;
	cout << "\n Digite a quarta nota: ";
	cin >> n4;
	
	soma=n1+n2+n3+n4;
	media=soma/4;
	
	if(media<6){
		cout << "\n reprovado com " << media;
		cout << " na media";
	}else{
		cout <<"\n aprovado" << media;
		cout << " na media";
	}
}
