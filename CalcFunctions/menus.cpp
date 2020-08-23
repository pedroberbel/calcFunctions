#include <stdio.h>
#include <iostream>
#include<stdlib.h>


using namespace std;

void menuPrincipal();
void menuOrdenarVetor();
void menuMatrizes();
void menuMatrizes();
void menuFuncao();
void menuDerivada();
void menuIntegral();

int opcaoMenuSecundario = 0;
int opcaoMenuFuncoes = 0;

void menuPrincipal() {
    system("cls");
    cout << "\t\t\tNome do Sistema \n\n";
    cout << "MENU PRINCIPAL: Escolha a opcao desejada:\n\n";
    cout << "1. Ordenar elementos do vetor\n";
    cout << "2. Matrizes\n";
    cout << "3. Aplicacao em Funcao\n";
    cout << "4. Aplicacao em Derivada\n";
    cout << "5. Integral Definida\n";
    cout << "6. SAIR\n\n";

    do {
        cin >> opcaoMenuSecundario;

        switch (opcaoMenuSecundario) {
        case 1:
            system("cls");
            menuOrdenarVetor();
            break;
        case 2:
            system("cls");
            menuMatrizes();
            break;
        case 3:
            system("cls");
            menuFuncao();
            break;
        case 4:
            system("cls");
            menuDerivada();
            break;
        case 5:
            system("cls");
            menuIntegral();
            break;
        case 6:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuPrincipal();
        }
    } while (opcaoMenuSecundario!=6);

    
    exit(0);
}

void menuOrdenarVetor() { //Vetor com 5 valores numéricos
    system("cls");
    cout << "\t\t\tMENU ORDENAR ELEMENTOS DO VETOR\n\n";
    cout << "1. Ordenar de forma crescente\n";
    cout << "2. Ordenar de forma decrescente\n";
    cout << "3. VOLTAR AO MENU PRINCIPAL\n";

    do {
        cin >> opcaoMenuFuncoes;

        switch (opcaoMenuFuncoes) {
        case 1:
            system("cls");
            cout << "1. Ordenar de forma crescente\n";
            break;
        case 2:
            system("cls");
            cout << "2. Ordenar de forma decrescente\n";
            break;
        case 3:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuOrdenarVetor();
        }
    } while (opcaoMenuFuncoes != 3);

    menuPrincipal();
}


void menuMatrizes() { //mastriz de ordem até 3x3
    system("cls");
    cout << "\t\t\tMENU MATRIZES\n\n";
    cout << "1. Determinante\n";
    cout << "2. Soma\n";
    cout << "3. Subtracao\n";
    cout << "4. Produto\n";
    cout << "5. VOLTAR AO MENU PRINCIPAL\n";

    do {
        cin >> opcaoMenuFuncoes;

        switch (opcaoMenuFuncoes) {
        case 1:
            system("cls");
            cout << "1. Determinante\n";
            break;
        case 2:
            system("cls");
            cout << "2. Soma\n";
            break;
        case 3:
            system("cls");
            cout << "3. Subtracao\n";
            break;
        case 4:
            system("cls");
            cout << "4. Produto\n";
            break;
        case 5:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuMatrizes();
        }
    } while (opcaoMenuFuncoes != 5);

    menuPrincipal();
}

void menuFuncao() {
    system("cls");
    cout << "\t\t\tMENU APLICACAO EM FUNCAO\n\n";
    cout << "1. f(x) = k\n";
    cout << "2. f(x) = x^k\n";
    cout << "3. f(x) = k^x\n";
    cout << "4. f(x) = e^x\n";
    cout << "5. f(x) = logk(x)\n";
    cout << "6. f(x) = ln(x)\n";
    cout << "7. f(x) = 1/x\n";
    cout << "8. f(x) = sen(x)\n";
    cout << "9. f(x) = cos(x)\n";
    cout << "10. f(x) = tg(x)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";

    do {
        cin >> opcaoMenuFuncoes;

        switch (opcaoMenuFuncoes) {
        case 1:
            system("cls");
            cout << "1. f(x) = k\n";
            break;
        case 2:
            system("cls");
            cout << "2. f(x) = x^k\n";
            break;
        case 3:
            system("cls");
            cout << "3. f(x) = k^x\n";
            break;
        case 4:
            system("cls");
            cout << "4. f(x) = e^x\n";
            break;
        case 5:
            system("cls");
            cout << "5. f(x) = logk(x)\n";
            break;
        case 6:
            system("cls");
            cout << "6. f(x) = ln(x)\n";
            break;
        case 7:
            system("cls");
            cout << "7. f(x) = 1/x\n";
            break;
        case 8:
            system("cls");
            cout << "8. f(x) = sen(x)\n";
            break;
        case 9:
            system("cls");
            cout << "9. f(x) = cos(x)\n";
            break;
        case 10:
            system("cls");
            cout << "10. f(x) = tg(x)\n";
            break;
        case 11:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuFuncao();
            
        }
    } while (opcaoMenuFuncoes != 11);

    menuPrincipal();
}

void menuDerivada() {
    system("cls");
    cout << "\t\t\tMENU APLICACAO EM DERIVADA\n\n";
    cout << "Escolha a funcao a ser derivada\n\n";
    cout << "1. f(x) = k\n";
    cout << "2. f(x) = x^k\n";
    cout << "3. f(x) = k^x\n";
    cout << "4. f(x) = e^x\n";
    cout << "5. f(x) = logk(x)\n";
    cout << "6. f(x) = ln(x)\n";
    cout << "7. f(x) = 1/x\n";
    cout << "8. f(x) = sen(x)\n";
    cout << "9. f(x) = cos(x)\n";
    cout << "10. f(x) = tg(x)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";

    do {
        cin >> opcaoMenuFuncoes;

        switch (opcaoMenuFuncoes) {
        case 1:
            system("cls");
            cout << "1. f(x) = k\n";
            break;
        case 2:
            system("cls");
            cout << "2. f(x) = x^k\n";
            break;
        case 3:
            system("cls");
            cout << "3. f(x) = k^x\n";
            break;
        case 4:
            system("cls");
            cout << "4. f(x) = e^x\n";
            break;
        case 5:
            system("cls");
            cout << "5. f(x) = logk(x)\n";
            break;
        case 6:
            system("cls");
            cout << "6. f(x) = ln(x)\n";
            break;
        case 7:
            system("cls");
            cout << "7. f(x) = 1/x\n";
            break;
        case 8:
            system("cls");
            cout << "8. f(x) = sen(x)\n";
            break;
        case 9:
            system("cls");
            cout << "9. f(x) = cos(x)\n";
            break;
        case 10:
            system("cls");
            cout << "10. f(x) = tg(x)\n";
            break;
        case 11:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuDerivada();


        }
    } while (opcaoMenuFuncoes != 11);

    menuPrincipal();
}

void menuIntegral() {
    system("cls");
    cout << "\t\t\tMENU INTEGRAL DEFINIDA\n\n";
    cout << "Escolha a funcao a ser integrada\n\n";
    cout << "1. f(x) = k\n";
    cout << "2. f(x) = x^k\n";
    cout << "3. f(x) = k^x\n";
    cout << "4. f(x) = e^x\n";
    cout << "5. f(x) = logk(x)\n";
    cout << "6. f(x) = ln(x)\n";
    cout << "7. f(x) = 1/x\n";
    cout << "8. f(x) = sen(x)\n";
    cout << "9. f(x) = cos(x)\n";
    cout << "10. f(x) = tg(x)\n";
    cout << "11. VOLTAR AO MENU PRINCIPAL\n";

    do {
        cin >> opcaoMenuFuncoes;

        switch (opcaoMenuFuncoes) {
        case 1:
            system("cls");
            cout << "1. f(x) = k\n";
            break;
        case 2:
            system("cls");
            cout << "2. f(x) = x^k\n";
            break;
        case 3:
            system("cls");
            cout << "3. f(x) = k^x\n";
            break;
        case 4:
            system("cls");
            cout << "4. f(x) = e^x\n";
            break;
        case 5:
            system("cls");
            cout << "5. f(x) = logk(x)\n";
            break;
        case 6:
            system("cls");
            cout << "6. f(x) = ln(x)\n";
            break;
        case 7:
            system("cls");
            cout << "7. f(x) = 1/x\n";
            break;
        case 8:
            system("cls");
            cout << "8. f(x) = sen(x)\n";
            break;
        case 9:
            system("cls");
            cout << "9. f(x) = cos(x)\n";
            break;
        case 10:
            system("cls");
            cout << "10. f(x) = tg(x)\n";
            break;
        case 11:
            break;
        default:
            cout << "Digite uma opcao valida\n\n";
            system("pause");
            menuIntegral();

        }
    } while (opcaoMenuFuncoes != 11);

    menuPrincipal();
}

