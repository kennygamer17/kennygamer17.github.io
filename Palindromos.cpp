#include <iostream>
#include <conio.h>
#include <string.h>
    using namespace std;

int main(){
    char palabra[40];
    char palabraInvertida[40] = " ";

    cout<<"Palabra: ";
    cin.getline(palabra,40,'\n');

    strcpy(palabraInvertida,palabra);
    strrev(palabraInvertida);

    if(strcmp(palabra, palabraInvertida)==0){
        cout<<"es un palindromo";
    }
    else{
        cout<<"no es un palindromo";
    }


    getch();
    return 0;
}
