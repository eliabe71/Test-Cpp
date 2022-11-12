#include <bits/stdc++.h>
using namespace std;


int main(){
    string FILENAME = "arq.txt";
    //Escopo de Escrita
    {
        ofstream file(FILENAME, ios::out);
        char character;
        if(!file.is_open()) return 0;
    do
        {
            cin>>character;
            file<< character;
       } while (character != '0');
        file.close();
    }   

    //Escopo de Leitura 
    {
        ifstream file(FILENAME, ios::in);
        if(!file.is_open()) return 0;
        string charcater;
        while(getline(file, charcater,'0'))
        {
            cout<<charcater;
        }
        file.close();
    }
}