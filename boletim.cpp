#include <iostream>
#include <cmath>

int main()
{

    double nota1;
    double nota2;
    double nota3;
    double nota4;

    std::cout << "Boletim Escolar\n\n";
    std::cout << "Insira a primeira nota:\n";
    std::cin >> nota1;
    std::cout << "Insira a segunda nota: \n";
    std::cin >> nota2;
    std::cout << "Insira a terceira nota: \n";
    std::cin >> nota3;
    std::cout << "Insira a quarta nota: \n";
    std::cin >> nota4;

    double media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 6)
    {

        std::cout << "Você foi aprovado! Média: " << round(media)<< "\n";
    }
    else
    {

        std::cout << "Você foi reprovado! Média: " << round(media) << "\n";
    }
}