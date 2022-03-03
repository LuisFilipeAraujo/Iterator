#include<iostream>
#include<iterator> 
#include<vector> 
#include <bits/stdc++.h>

#define TamVector 10
#define TamVector1 10

#include<locale.h>

using namespace std;

class PadraoIterator{
	public:
	vector<int> Myvector;
	vector<int>::iterator ptr;
	vector<int>::iterator ptr1; 
	

			void criaVector(){
				
				//criando vector
    			for (int i = 1; i <= TamVector; i++)
    			{
    				Myvector.push_back(i);
				}
        
    			//Declarando iterator ao vector
    			vector<int>::iterator ptr;
    			vector<int>::iterator ptr1;
				}
				
			void exibir(){
				
				cout << "\nOs elementos do vector são : ";
				
    				for (ptr = Myvector.begin(); ptr < Myvector.end(); ptr++)
    				{
    	 				cout << *ptr << " ";
					}
					cout <<"\n\n";
      				ptr = Myvector.begin();//retorna iterator para o começo
				}
				
			void avancar(int escolha){
				
				ptr = Myvector.begin();
				
				// usando advance() para incrementar a posição do iterator
    				advance(ptr, escolha);
      
    				cout << "\n\nPosição após avançar : ";
    				
    				cout << *ptr << " ";
    				cout <<"\n\n";
				}
				
			void nextIterator(int escolha){
				
				ptr = Myvector.begin();
				ptr1 = Myvector.end();
				
				//usando next()
				iterator.next(ptr, escolha);
				
			}
			
			void prevIterator(int escolha){
				ptr = Myvector.begin();
				ptr1 = Myvector.end();
				
				//usando prev()
				//auto it1 = prev(ptr1, escolha);
			}
			
			void inserterIterator(){
				
				
				//usando inserter()
			}
};

int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	int opcao, opcao1, opcao2;
	
	PadraoIterator padraoiterator;//chamando classe iterator
	
    padraoiterator.criaVector();
      
      
    
       do{
		system("cls");

		std::cout<<"\n MENU DE OPCOES \n\n";
		std::cout<<"\n1 - Exibir Elementos do Vector (begin() e end())";		 
		std::cout<<"\n2 - Usar advance() para incrementar a posição do iterator";		
		std::cout<<"\n3 - Usar next()";
		std::cout<<"\n4 - Usar prev()";
		std::cout<<"\n5 - Usar inserter()";
		std::cout<<"\n6 - Sair";
		std::cout<<"\n\nDigite sua opcão: ";
		std::cin>>opcao;
   
   		
   		switch(opcao){
   			
   			case 1:
   				{
   					//exibindo(begin e end)
    				padraoiterator.exibir();
   					break;
				}
				   
			case 2:
				{
					// usando advance() para incrementar a posição do iterator
					cout<<"\nDiga a posição à qual deseja avançar:\n";
					cin>>opcao1;
					
					padraoiterator.avancar(opcao1);
					
					break;
				}
				
			case 3:
				{
				//usando next()
				cout<<"\nEscolha a posicao à qual o novo iterator next() retornará: \n";
				cin>>opcao2;
				
				
					cout <<"\n\n";
   					break;
				}
				
			case 4:
				{
						
					cout <<"\n\n";
					break;
				}
				
			case 5:
				{
					
					cout <<"\n\n";
					break;
				}
		   }
   		system("pause");
   			
}while(opcao <= 5 );

    return 0;    
}


