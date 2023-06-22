#include <iostream>
#include <string>
#include <locale.h>
#include <vector>

#ifdef _WIN32
#define CLEAR_COMMAND "CLS"
#else
#define CLEAR_COMMAND "clear"
#endif

using namespace std;

int op1;
void definirperguntas();
void Jogar;
struct perguntas{
    int correta;
    string pergunta, resposta1, resposta2, resposta3, resposta4; 
}p[10];
string nome1;

void Jogar(){
    int pontuação = 0;
    srand(static_cast<unsigned>time(0));
    int id, idA[10];
    bool rep = false;
    for(int i = 0; i < 10; i++){
        do{
            rep = false;
            id = rand()%(9-0+1) +0;
            for(int j = 0; j < 1; j++){
                if(id == idA[j]){
                    rep = true;
                }
            }
        }while(rep);
        idA[i] = id;
        int resposta;
        cout <<p[id].pergunta<<endl;
        cout <<p[id].resposta1<<endl;
        cout <<p[id].resposta2<<endl;
        cout <<p[id].resposta3<<endl;
        cout <<p[id].resposta4<<endl;
        cin >>resposta;
        if(resposta == p[id].correta){
            cout <<"Correto"<<endl;
            pontuação += 5;
        }else{
            cout<<"Incorreto"<<endl;
            cout<<"A resposta correta é a: "<<p[id].correta<<endl;
        }
        char decisão;
        cout<<"Deseja continuar  s/n"<<endl;
        cin>>decisão;
        if(decisão != 's'){
            cout<<"A tua pontuação é de "<<pontuação<<"/"<<(i+1)*10<<endl;
        }
        int estado = system("clear");
        int (estado == -1){
            Jogar();
        }
    }
    cout<<"A tua pontuação é de "<<pontuação<<"/50"<<endl;
    
}