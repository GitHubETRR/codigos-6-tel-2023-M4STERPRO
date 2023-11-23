#include <iostream>
using namespace std;

class cuentaBancaria{
private:
    int numeroCuenta;
    float saldo;

public:
    // Constructor para inicializar la cuenta con número de cuenta y saldo
    cuentaBancaria(int numero, float saldoInicial) : numeroCuenta(numero), saldo(saldoInicial){}

    // Método para realizar operaciones bancarias
    void ejecutarOperaciones();

    // Método para realizar un depósito
    void depositar(float cantidad);

    // Método para realizar un retiro
    void retirar(float cantidad);

    // Método para consultar el saldo
    float consultarSaldo();

    // Método para inicializar la cuenta con número de cuenta y saldo
    void inicializarCuenta();
};

void cuentaBancaria::ejecutarOperaciones(){
    char opcion;

    do{
        cout<<"Oprima alguna de las opciones:"<<endl;
        cout<<"1. Depositar"<<endl;
        cout<<"2. Retirar"<<endl;
        cout<<"3. Consultar Saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Elija una opción: ";
        cin>>opcion;

        switch(opcion){
            case '1':
                float cantidadDeposito;
                cout<<"Ingrese la cantidad a depositar: ";
                cin>>cantidadDeposito;
                depositar(cantidadDeposito);
                break;
            case '2':
                float cantidadRetiro;
                cout<<"Ingrese la cantidad a retirar: ";
                cin>>cantidadRetiro;
                retirar(cantidadRetiro);
                break;
            case '3':
                cout<<"Saldo actual: "<<consultarSaldo()<<endl;
                break;
            case '4':
                cout<<"Saliendo del programa."<<endl;
                break;
            default:
                cout<<"Opción no válida. Por favor, elija una opción válida."<<endl;
                break;
        }
    }while(opcion != '4');
}

void cuentaBancaria::depositar(float cantidad){
    if(cantidad > 0){
        saldo += cantidad;
        cout<<"Depósito exitoso. Saldo actual: "<<saldo<<endl;
    }else{
        cout<<"Cantidad no válida para depósito."<<endl;
    }
}

void cuentaBancaria::retirar(float cantidad){
    if(cantidad > 0 && cantidad <= saldo){
        saldo -= cantidad;
        cout<<"Retiro exitoso. Saldo actual: "<<saldo<<endl;
    }else{
        cout << "Cantidad no válida para retiro o saldo insuficiente." << endl;
    }
}

float cuentaBancaria::consultarSaldo(){
    return saldo;
}

void cuentaBancaria::inicializarCuenta(){
    cout<<"Bienvenido al cajero automático"<<endl;
    cout<<"Ingrese el número de cuenta: ";
    cin>>numeroCuenta;
    cout<<"Ingrese el saldo inicial: ";
    cin>>saldo;
}

int main(){
    cuentaBancaria cuenta(0, 0); // Valores iniciales temporales

    cuenta.inicializarCuenta(); // Llamamos al método para inicializar la cuenta
    cuenta.ejecutarOperaciones(); // Llamamos al método para ejecutar operaciones

    return 0;
}
