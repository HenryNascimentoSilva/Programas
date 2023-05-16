#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Computador(int escolhaPC);
int Resultado(int escolha, int escolhaPC);
void LimparTerminal();

int main()
{
    int escolha;
    int escolhaPC;

    do
    {
        cout << "Pedra Papel Tesoura\n\n Escolha uma alternativa: \n 1 - Pedra\n 2 - Papel \n 3 - Tesoura \n 4 - Sair \n";
        cin >> escolha;

        Resultado(escolha, escolhaPC);

    } while (escolha != 4);

    return 0;
}
int Computador(int escolhaPC)
{

    srand(time(NULL));
    escolhaPC = rand() % 3 + 1;

    return escolhaPC;
}
void LimparTerminal()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
int Resultado(int escolha, int escolhaPC)
{
    switch (escolha)
    {
    case 1:
        LimparTerminal();
        if (Computador(escolhaPC) == 1)
        {
            cout << "Ambos escolheram pedra! Empate!\n\n";
            break;
        }
        else if (Computador(escolhaPC) == 2)
        {
            cout << "Oponente escolheu papel! Você perdeu!\n\n";
            break;
        }
        else
        {
            cout << "Oponente escolheu tesoura! Você ganhou!\n\n";
            break;
        }
    case 2:
        LimparTerminal();
        if (Computador(escolhaPC) == 1)
        {
            cout << "Oponente escolheu pedra! Você ganhou!\n\n";
            break;
        }
        else if (Computador(escolhaPC) == 2)
        {
            cout << "Ambos escolheram papel! Empate!\n\n";
            break;
        }
        else
        {
            cout << "Oponente escolheu tesoura! Você perdeu!\n\n";
            break;
        }
    case 3:
        LimparTerminal();
        if (Computador(escolhaPC) == 1)
        {
            cout << "Oponente escolheu pedra! Você perdeu!\n\n";
            break;
        }
        else if (Computador(escolhaPC) == 2)
        {
            cout << "Oponente escolheu papel! Você ganhou!\n\n";
            break;
        }
        else
        {
            cout << "Oponente escolheu tesoura! Empate!\n\n";
            break;
        }
    case 4:
        LimparTerminal();
        cout << "Fechando ..........\n";
        break;
    default:
        LimparTerminal();
        cout << "Valor inválido\n\n";
    }
    return 0;
}