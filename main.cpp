#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct aluno{
string nome;
float n1, n2, media;
aluno *prox;
aluno *proxN;
int *ponteiroA;
int *ponteiroN;
} hmm;

int x=0;
int *i=&x;

aluno *criar_no (){
aluno *novo=(aluno*)malloc(sizeof(aluno));
return novo;
}

aluno *inserir_aluno(aluno *lista){
aluno *novo=criar_no();
novo->ponteiroA=i;
string name;
cout <<"nome: "<<*i<<endl;
cin>> name;
novo->nome=name;
if (lista == NULL){
    lista=novo;
    novo->prox=NULL;
}else{
 aluno *aux=lista;
 while (aux->prox != NULL){
    aux=aux->prox;
 }
 novo->prox=NULL;
 aux->prox=novo;

}
return lista;
}






aluno *inserir_nota2(aluno *notas, float nt1, float nt2){
aluno *nova=criar_no();
nova->ponteiroN=i;
nova->n1=nt1;
nova->n2=nt2;
nova->media= ((nova->n1 + nova->n2)/2);
if (notas == NULL){
    notas=nova;
    nova->prox=NULL;
    }else{
       aluno *aux=notas;
       while (aux->prox !=NULL ) {
        aux=aux->prox;
       }
       nova->prox=NULL;
       aux->prox=nova;
    }

    return notas;
}





aluno* inserir_nota (aluno *notas, aluno *lista){
aluno *aux1=lista;
aluno *aux=notas;
int num;
float n1, n2;
cout <<"digite o numero do aluno "<<endl;
cin >>num;
while (aux1->ponteiroA != i){
    aux1=aux1->prox;
}
if (aux1->ponteiroA == i){
            cout <<endl<<endl<<"aluno encontrado!"<<endl;
            cout <<endl<<endl<<"digite as notas: "<<endl;
            cout <<"Nota 1: ";
            cin >>n1;
            cout <<endl<<"Nota 2: ";
            cin >>n2;
            notas=inserir_nota2(notas, n1, n2);

            aux1->prox=notas;
       }
return notas;

}


aluno * media(aluno *lista, aluno *notas){
aluno *aux=notas;
aluno *aux1=lista;
string nome;
cout <<"digite o nome do aluno: "<<endl;
cin>> nome;

while (aux1!= NULL && aux1->nome != nome){
    aux1=aux1->prox;
    aux= aux->proxN;
}
if (aux1->nome == nome && aux == NULL){
    cout <<"aluno sem nota"<<endl;
    return  NULL;
}
if (aux1->nome == nome && aux != NULL){
cout <<"\tAluno encontrado!"<<endl;
cout <<" MEDIA: "<<aux->media<<" ";

if (aux->media >=7){
    cout <<"Aprovado!"<<endl;
}else {
if (aux->media <7){
    cout <<"Reprovado!"<<endl;
}

}return notas;}

}




void imprimir (aluno *lista, aluno* notas){
aluno *aux=lista;
aluno *aux1=notas;
while (aux!= NULL && aux1!=NULL){

    cout <<"aluno :"<<aux->nome<<endl;
    cout <<"media: "<<aux1->media<<endl;
    aux=aux->prox;
    aux1=aux1->proxN;
}

}




int main()
{
    short op;
    string nome;
    aluno *lista=NULL;
    aluno *notas = NULL;
    do {
            x=x+2;
        cout <<"1 inserir aluno"<<endl<<"2 iserir nota"<<endl<< "3 MEDIA" <<endl<<"4 IMPRIMIR"<<endl;
        cin >>op;
        switch (op){
    case 1:
        --x;
        lista=inserir_aluno(lista);
        cout <<"valor de x agora: "<<x<<endl;
        break;

    case 2:
        x=x-2;
        notas=inserir_nota(notas, lista);
        cout <<"valor de x agora: "<<x<<endl;
        break;
    case 3:
        x=x-2;
        media(lista, notas);
        cout <<"valor de x agora: "<<x<<endl;
        break;
    case 4:
        imprimir(lista, notas);
        break;
        }

    }while (op!=0);
    cin.get();
    cin.get();
    return 0;
}
