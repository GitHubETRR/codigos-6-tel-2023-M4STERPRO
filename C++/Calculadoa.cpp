#include <iostream>
using namespace std;

class punto{
private:
    float valor1, valor2, resultado;
    char operacion;
    
public:
    void ingresarValor1(){
        float valor;
        cout<<"Ingrese el primer valor: ";
        cin>>valor;
        
        if(valor>0){
            valor1=valor;
            cout<<"Valor asignado a la primera variable: "<<valor1<<endl;
        
        }else{
            cout<<"Imposible asignar valor negativo"<<endl;
        }
    }   
    void ingresarValor2(){
        float valor;
        cout<<"Ingrese el segundo valor: ";
        cin>>valor;
        
        if(valor>0){
            valor2=valor;
            cout<<"Valor asignado a la segunda variable: "<<valor2<<endl;
        }else{
            cout<<"Imposible asignar valor negativo"<<endl;
        }
    }
    void ingresarOperacion(){
        cout<<"Ahora ingrese la operación a realizar(+,-,*,/): ";
        cin>>operacion;
    }
    void realizarOperacion(){
        switch(operacion){
            case '+':
                resultado = valor1 + valor2;
                cout<<"El resultado de la suma es: "<<resultado<<endl;
                break;
            case '-':
                resultado = valor1 - valor2;
                cout<<"El resultado de la resta es: "<<resultado<<endl;
                break;
            case '*':
                resultado = valor1 * valor2;
                cout<<"El resultado de la multiplicación es: "<<resultado<<endl;
                break;
            case '/':
                if(valor2 != 0){
                    resultado = valor1 / valor2;
                    cout<<"El resultado de la división es: "<<resultado<<endl;
                }else{
                    cout<<"No se puede dividir entre 0"<<endl;
                }
                break;
            default:
                cout<<"La operación no es válida"<<endl;
                break;
        }
    }
    void repetirOperaciones(){
        char continuar;
        do{  
            ingresarValor1();
            ingresarValor2();
            ingresarOperacion();
            realizarOperacion();
    
            cout<<"¿Desea seguir operando?(1 para SI, 0 para NO)"<<endl;
            cin>>continuar;
        
            if(continuar!='1'&& continuar!='0'){
                cout<<"Operación no válida"<<endl;
                break;
            }
        }while(continuar=='1');
    
        cout<<"Saliendo del programa"<<endl;
    }
};
int main (){
    class punto punto1;
    
    punto1.repetirOperaciones();
    
    return 0;
}
