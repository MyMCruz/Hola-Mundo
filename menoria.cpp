#include<iostream>
using namespace std;

class Personaje
{
private:
    /* data */
public:
    Personaje(/* args */) {}
    ~Personaje() {}
    void Hablar ()
    {
        cout <<"Hola Enano"<<endl;
    }
};


class Duende : Personaje
{
private:
    /* data */
public:
    Duende (/* args */) {}
    ~Duende () {}
};

class Enano
{
private:
    int=vida;
    float=altura;
    int=edad;
public:
    Enano(/* args */) {}
    ~Enano() {}
    void Inicializar()
    {
        this->
    }
};

int main(int argc, char const *argv[])
{
    int a = s;
    bool b = true;
    float f=0.1;
    double d=0.1;
    char c='a';
    
    cout << "Direccion De Memoria" <<endl;
    cout << "Tamaño int" <<sizeof (int)<< "bytes" <<endl;
    cout << "Tamaño int" <<sizeof (bool)<< "bytes" <<endl;
    cout << "Tamaño int" <<sizeof (float)<< "bytes" <<endl;
    cout << "Tamaño int" <<sizeof (double)<< "bytes" <<endl;
    cout << "Tamaño int" <<sizeof (char)<< "bytes" <<endl;

    cout << "Memoria Estatica C/C++" <<endl;
    cout << "Direccion int" <<sizeof (bool)<< "&i" <<endl;
    cout << "Direccion bool" <<sizeof (float)<< "&b" <<endl;
    cout << "Direccion float" <<sizeof (double)<< "&f" <<endl;
    cout << "Direccion double" <<sizeof (char)<< "&d" <<endl;
    cout << "Direccion char" <<sizeof (char)<< "&c" <<endl;

    cout << endl;
    cout << "Memoria Dinamica C:" << endl;
    cout << "Direccion Dinamica:" <<malloc(2)<<endl;
    cout<< "Direccion Dinamica int "<< malloc(sizeof(int))<<endl;

    //Casteo de PUNTERS C
    Enano* direccion=(Enano*)malloc(sizeof(Enano));
    direccion -> Inicializar();

    //Puntero C++
    Enano* instancia=new Enano;

    


    
    return 0;
}
