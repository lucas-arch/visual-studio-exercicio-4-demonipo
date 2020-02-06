// Exercicio_1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	string escolha{};

	cout << "Insira um número: ";
	cin >> num1;

	cout << "\nInsira outro número: ";
	cin >> num2;

	cout << "multiplicaçao ou soma.";
	cin >> escolha;

	if (escolha == "soma")
	{
		cout << "\nA soma dos numeros é: " << num1 + num2 << endl;
	}
	else
	{
		cout << "\nA multiplicação dos numeros é: " << num1 * num2 << endl;
	}

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
