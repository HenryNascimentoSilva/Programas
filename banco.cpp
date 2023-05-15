#include <iostream>
#include <iomanip>

void mostrarBalanço(double balanço);
double depositar();
double saque(double balanço);

int main()
{

    double balanço = 0;
    int escolha = 0;

    do
    {

        std::cout << "********************\n";
        std::cout << "Escolha uma opção:\n";
        std::cout << "********************\n";
        std::cout << "1. Mostrar Balanço\n";
        std::cout << "2. Depositar dinheiro\n";
        std::cout << "3. Sacar dinheiro\n";
        std::cout << "4. Sair\n";
        std::cout << "********************\n";
        std::cin >> escolha;
        std::cin.clear();
        fflush(stdin);

        switch (escolha)
        {

        case 1:
            mostrarBalanço(balanço);
            break;
        case 2:
            balanço += depositar();
            break;
        case 3:
            balanço -= saque(balanço);
            break;
        case 4:
            std::cout << "Fechando...\n";
            break;
        default:
            std::cout << "Escolha invalida!\n";
        }
    }

    while (escolha != 4);

    return 0;
}

void mostrarBalanço(double balanço)
{

    std::cout << "Seu balanço é: " << std::setprecision(2) << std::fixed << balanço << "R$\n";
}

double depositar()
{

    double quantia;

    std::cout << "Entre a quantia a ser depositada: ";
    std::cin >> quantia;

    if (quantia > 0)
    {

        return quantia;
    }

    else
    {

        std::cout << "Valor invalido\n";

        return 0;
    }
}

double saque(double balanço)
{

    double quantia;

    std::cout << "Entre a quantia a ser sacada: \n";
    std::cin >> quantia;

    if (quantia > balanço)
    {

        std::cout << "Fundos insuficientes!\n";

        return 0;
    }

    else if (quantia < 0)
    {

        std::cout << "Valor inválido\n";

        return 0;
    }

    else
    {

        return quantia;
    }
}