#include <bits/stdc++.h>

using namespace std;

/*
    Esse vector contém os m^2 de cada tipo, como os tipos são de 0 à 4 
    a posicao do vector informa a m^2 do tipo informado
*/
#define TYPES vector<int>{12, 15, 18, 20, 22} 

class Comodo{
    private:
    int type;
    float width;
    float height;
    
    public:
    Comodo(float height, float width){
        this->width = width;
        this->height = height;
    }
    Comodo(){}

    void setType(int type){
        this->type = type;
    }

    void setWidth(float width){
        this->width = width;
    }

    void setHeight(float height){
        this->height = height;
    }

    float calculaArea(){
        return this->height*this->width; 
    }
    /*
        Calcula o numero de lampadas por m^2, retirando o valor do m^2 do vector TYPES
    */
    float lampada(){
        float area = calculaArea();
        float n = ceil((area/TYPES[this->type]));
        return n;
    }
};

int main(){
    float height = 0.0;
    float widht  = 0.0;
    int type = 0;
    Comodo comodo;
    while (true)
    {
        cin>>type;
        if(type==-1 || type > 4) break;
        cin>> widht >> height;
        comodo.setWidth(widht);
        comodo.setHeight(height);
        comodo.setType(type);
        cout<<"QTD de Lamapadas: " << comodo.lampada()<<"\n";
    }
}