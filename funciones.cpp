#include<iostream>

using namespace std;

int sumar(int num1, int num2);
int restar(int num1, int num2);
int mult(int num1, int num2);
int dividir(int num1, int num2);

int sumar(int num1, int num2){
    return num1 + num2;
}

int restar(int num1, int num2){
    return num1 - num2;
}

int mult(int num1, int num2){
    return num1 * num2;
}

int dividir(int num1, int num2){
    cout << num1 << endl << num2 << endl;
    if (num1, num2 > 0){
        cout << "Realizar divicion" << endl;
    }else{
        cout << "No se puede dividir" << endl;
    }
    return num1 / num2;
}