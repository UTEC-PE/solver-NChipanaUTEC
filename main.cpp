#include <iostream>
#include "Tree.h"

using namespace std;

void menu() {
      cout<<"==========================================================="<<endl;
      cout<<"\t\tPractica Operaciones"<<endl;
      cout<<"==========================================================="<<endl;

      //char* str="7/4*((a+b)*a)+3";
      //char* str="7/4*((a+-+--b)*a)+3";
      //char* str="2+(3)";
      //char* str="7/4*((a+b)^4*a)+3";
    char* str = "2+4";

    Tree arbol(str);
    arbol.build();
}

// No está operando, solo intenta construir el árbol con el +
int main(int argc, char const *argv[]) {
    menu();

    cout << "\nPress enter to continue ..."; 
    cin.get(); 
    return EXIT_SUCCESS;
}