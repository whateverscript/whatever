#include <iostream>
#include <string.h>
#define TAM 3

using namespace std;

struct agenda{
string nome;
int dia, mes, ano;
};

int main()
{
    string nome, nome2;
    agenda lista[6];
    int menorD=0;
    int menorM=0;
    int menorA=0;
    for (int i=0; i<TAM; i++){
       cout <<"\t NOME"<<endl;
       cout << "Primeiro Nome: " << endl;
       cin>> lista[i].nome;
       cout<< "\tData de nascimento"<<endl;
       cout<<"Dia: "<<endl;
       cin>>lista[i].dia;
       cout<<"Mes: "<<endl;
       cin>>lista[i].mes;
       cout<<"Ano: "<<endl;
       cin>>lista[i].ano;
       cout<<"\n\n";
    }
    //mais novo
    for (int j=0; j<TAM; j++){

        if (lista[j].ano > menorA){
            menorA = lista[j].ano;
            menorM = lista[j].mes;
            menorD = lista[j].dia;
            nome   = lista[j].nome;
    }

        if (lista[j].ano >= menorA && lista[j].mes >menorM){
            menorM = lista[j].mes;
            nome   = lista[j].nome;
    }
        if (lista[j].ano >= menorA && lista[j].mes >= menorM && lista[j].dia> menorD){
            menorD = lista[j].dia;
            nome   = lista[j].nome;
}
} // fim mais novo

//mais velho
 for (int x=0; x<TAM; x++){
    int maiorD=lista[0].dia;
    int maiorM=lista[0].mes;
    int maiorA=lista[0].ano;

if (lista[x].ano < menorA){

        maiorA = lista[x].ano;
        maiorM = lista[x].mes;
        maiorD = lista[x].dia;
        nome2  = lista[x].nome;


}
if (lista[x].ano <= menorA && lista[x].mes <menorM){
           maiorM = lista[x].mes;
            nome2 = lista[x].nome;
    }
    if (lista[x].ano <= menorA && lista[x].mes <= menorM && lista[x].dia< menorD){
        maiorD = lista[x].dia;
        nome2  = lista[x].nome;
}




} //fim for



    cout<<"\n\tMais novo"<<endl;
    cout<<"Nome: "<<nome;
    cout<<"\n\tMais velho"<<endl;
    cout<<"Nome: "<<nome2;

    return 0;
}
