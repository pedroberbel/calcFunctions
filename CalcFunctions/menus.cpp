#include <stdio.h>
#include <iostream>


using namespace std;

int opcao = 0;
void menuOrdenarVetor();
void menuMatrizes();
void menuMatrizes();
void menuFuncao();
void menuDerivada();
void menuIntegral();

int menuPricipal() {
    
    cout << "MENU PRINCIPAL: Escolha a opcao desejada:\n\n";
    cout << "1. Ordenar elementos do vetor\n";
    cout << "2. Matrizes\n";
    cout << "3. Aplicacao em Funcao\n";
    cout << "4. Aplicacao em Derivada\n";
    cout << "5. Integral Definida\n";
    cout << "6. SAIR\n\n";

    cin >> opcao;
    switch (opcao) {
    case 1:
        system("cls");
        menuOrdenarVetor();
        break;
    case 2:
        system("cls");
        void menuMatrizes();
        break;
    case 3:
        system("cls");
        void menuMatrizes();
        break;
    case 4:
        system("cls");
        void menuFuncao();
        break;
    case 5:
        system("cls");
        void menuDerivada();
        break;
    case 6:
        system("cls");
        void menuIntegral();
        break;
    default:
        cout << "Escolha uma opcao valida";
    }

    return opcao;
}

void menuOrdenarVetor() {
    cout << "MENU ORDENAR ELEMENTOS DO VETOR\n\n";
    cout << "1. Ordenar de forma crescente\n";
    cout << "2. Ordenar de forma decrescente\n";
    cout << "3. VOLTAR AO MENU PRINCIPAL\n";
}

void menuMatrizes() {
    cout << "MENU MATRIZES\n\n";
    cout << "1. Determinante\n";
    cout << "2. Soma\n";
    cout << "3. Subtração\n";
    cout << "4. Produto\n";
    cout << "5. VOLTAR AO MENU PRINCIPAL\n";
}

void menuFuncao() {
    cout << "MENU APLICACAO EM FUNCAO\n\n";
    cout << "1. 𝑓(𝑥) = 𝑘\n";
    cout << "2. 𝑓(𝑥) = 𝑥^𝑘\n";
    cout << "3. 𝑓(𝑥) = 𝑘^𝑥\n";
    cout << "4. 𝑓(𝑥) = 𝑒^𝑥\n";
    cout << "5. 𝑓(𝑥) = 𝑙𝑜𝑔𝑘(𝑥)\n";
    cout << "6. 𝑓(𝑥) = 𝑙𝑛(𝑥)\n";
    cout << "7. 𝑓(𝑥) = 1/𝑥\n";
    cout << "8. 𝑓(𝑥) = 𝑠𝑒𝑛(𝑥)\n";
    cout << "9. 𝑓(𝑥) = 𝑐𝑜𝑠(𝑥)\n";
    cout << "10. 𝑓(𝑥) = 𝑡𝑔(𝑥)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";
}

void menuDerivada() {
    cout << "MENU APLICACAO EM DERIVADA\n\n";
    cout << "1. 𝑓(𝑥) = 𝑘\n";
    cout << "2. 𝑓(𝑥) = 𝑥^𝑘\n";
    cout << "3. 𝑓(𝑥) = 𝑘^𝑥\n";
    cout << "4. 𝑓(𝑥) = 𝑒^𝑥\n";
    cout << "5. 𝑓(𝑥) = 𝑙𝑜𝑔𝑘(𝑥)\n";
    cout << "6. 𝑓(𝑥) = 𝑙𝑛(𝑥)\n";
    cout << "7. 𝑓(𝑥) = 1/𝑥\n";
    cout << "8. 𝑓(𝑥) = 𝑠𝑒𝑛(𝑥)\n";
    cout << "9. 𝑓(𝑥) = 𝑐𝑜𝑠(𝑥)\n";
    cout << "10. 𝑓(𝑥) = 𝑡𝑔(𝑥)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";
}

void menuIntegral() {
    cout << "MENU INTEGRAL DEFINIDA\n\n";
    cout << "1. 𝑓(𝑥) = 𝑘\n";
    cout << "2. 𝑓(𝑥) = 𝑥^𝑘\n";
    cout << "3. 𝑓(𝑥) = 𝑘^𝑥\n";
    cout << "4. 𝑓(𝑥) = 𝑒^𝑥\n";
    cout << "5. 𝑓(𝑥) = 𝑙𝑜𝑔𝑘(𝑥)\n";
    cout << "6. 𝑓(𝑥) = 𝑙𝑛(𝑥)\n";
    cout << "7. 𝑓(𝑥) = 1/𝑥\n";
    cout << "8. 𝑓(𝑥) = 𝑠𝑒𝑛(𝑥)\n";
    cout << "9. 𝑓(𝑥) = 𝑐𝑜𝑠(𝑥)\n";
    cout << "10. 𝑓(𝑥) = 𝑡𝑔(𝑥)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";
}

