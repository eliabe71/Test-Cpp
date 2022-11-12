#include <bits/stdc++.h>
using namespace std;

// Calcula Media de elementos presentes na lista
float media(list<float> &list, float &best, float &wrost){
    float some=0;
    for(float n : list){
        some+=n;
    }

    //Retira o valor do Melhor e do Pior Salto
    some -=(best+wrost);
    //Faz a média sem a contagem do pior e do melhor
    float  avarange = some/(list.size()-2);
    return avarange;
}

int main(){
    
    string name;
    
    /*
        Esse limites são para serem usadas nas primeiras comparacoes com valores reais pois, 
        saltos reais serão maior que o minimo e menores que o máximo.
    */

    float best = numeric_limits<float>::min();
    float wrost = numeric_limits<float>::max();
    list<float> jumps;

    while (true)
    {    
        getline(cin, name);
        
        if(name.empty()) break;

        float jumpInput;
        
        for(int i = 0; i < 5 ; i++){
            cin >> jumpInput;
            
            /*
                Verifica se é um dos limites caso seja altera o valor das variáveis 
            */
            if(best < jumpInput)
                best = jumpInput;
            
            if(wrost > jumpInput)
                wrost = jumpInput; 

            jumps.push_back(jumpInput);           
            
        }
        float m = media(jumps,best,wrost);
        cout<<"Melhor salto" <<": "<<best <<" m\n" ;
        cout<<"Pior salto" <<": "<<wrost <<" m\n";
        cout<<"Media dos demais saltos" <<": "<<m <<" m\n";
        cout<< name<<": "<<m <<" m\n";
        cin.ignore();
        jumps.clear();
        best = numeric_limits<float>::min();
        wrost = numeric_limits<float>::max(); 
    
    }
}
