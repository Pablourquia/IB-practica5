#include <iostream>
using namespace std;

int main(){

    cout << "Voy a imprimir en pantalla la tabla de la verdad de and, or y not" << endl;
    bool variableA;
    bool variableB;

    variableA=false;
    variableB=false;

    cout << "La tabla de la verdad de and, or y not cuando las variable A y B son falsas es la siguiente: "
    << "AND: " << (variableA && variableB);
    cout << " OR " << (variableA || variableB) ;
    cout << " ANOT " << !variableA;
    cout << " BNOT " << 
    !variableB << endl;
    
    variableA=false;
    variableB=true;

    cout << "La tabla de la verdad de and, or y not cuando las variables A es falsa y B sea verdadera es la siguiente: "
    << "AND: " << (variableA && variableB);
    cout << " OR " << (variableA || variableB);
    cout << " ANOT " << !variableA;
    cout << " BNOT " << !variableB << endl;
    
    
    variableA=true;
    variableB=false;

    
     cout << "La tabla de la verdad de and, or y not cuando las variables A es verdadera y B sea falsa es la siguiente: "
    << "AND: " << (variableA && variableB);
    cout << " OR " << (variableA || variableB);
    cout << " ANOT " << !variableA;
    cout << " BNOT " << !variableB << endl;

    variableA=true;
    variableB=true;

     cout << "La tabla de la verdad de and, or y not cuando las variables A es verdadera y B sea verdadera es la siguiente: "
    << "AND: " << (variableA && variableB);
    cout << " OR " << (variableA || variableB);
    cout << " ANOT " << !variableA;
    cout << " BNOT " << !variableB << endl;



    return 0;

}