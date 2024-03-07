#pragma once
#include <fstream>
#include<iostream>
#include<string>

using namespace std;

class Dibujo
{
    private:
        fstream file;
    public:
        Dibujo(){}
        Dibujo(string filePath)
        {
            file.open(filePath);//
        }
        Dibujo()
        {
            file.close();
        }

        void Dibujar()
        {
            string line;
            getline(file, line)
        }

};