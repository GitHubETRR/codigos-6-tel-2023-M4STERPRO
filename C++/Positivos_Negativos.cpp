#include <iostream>
using namespace std;

class punto{
private:
    int coordx;
    int coordy;
    
public:
    void set_coordx(){
        int coord;
        cout<<"Ingrese el primer valor: ";
        cin>>coord;
        
        if(coord>0){
            coordx=coord;
            cout<<"Valor asignado a la primera variable: "<<coordx<<endl;
        
        }else{
            cout<<"Imposible asignar valor negativo"<<endl;
        }
    }
    void set_coordy(){
        int coord;
        cout<<"Ingrese el segundo valor: ";
        cin>>coord;
        
        if(coord>0){
            coordy=coord;
            cout<<"Valor asignado a la segunda variable: "<<coordy<<endl;
        }else{
            cout<<"Imposible asignar valor negativo"<<endl;
        }
    }
};
int main (){
    class punto punto1, punto2;
    
    punto1.set_coordx();
    punto1.set_coordy();

    return 0;
}
