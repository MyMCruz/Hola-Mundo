#pragma once
#include<Alimento.hpp>
class Macota
{
    private:
        int vida;
    public:
        Mascota()
        {
            this -> vida = 0;
        }

        Mascota(){}

        void Comer (Alimento alimento)
        {
            this -> vida += 
                alimento.ExtraerEnergia();
        }

        void Jugar()
        {
            this -> vida -= 2;
        }

        int LeerVida()
        {
            return this -> vida;
        }
};