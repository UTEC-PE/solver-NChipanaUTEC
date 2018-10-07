//
// Created by chip on 10/09/18.
//

#ifndef SOLVER_NCHIPANAUTEC_TREE_H
#define SOLVER_NCHIPANAUTEC_TREE_H

#include <cstring>
#include "Node.h"

class Tree{
private:
    int pos;
    Node* start;
    char* equation;
    char* left;
    char* right;
public:
    Tree(char* ecuacion){
        pos = 0;
        start = nullptr;
        left = nullptr;
        right = nullptr;
        equation = ecuacion;
    }

    void build(){
        if(search(pos,'+')){
            insert(start,equation);
        }
    }

    bool search(int &pos, char element){
        pos = 0;
        while(equation[pos] != ' '){
            if(equation[pos] == element){ return true; }
            pos++;
        }
        return false;
    }

    char* split (char* ecuacion){
        left = nullptr;
        right = nullptr;
        for(int i = 0; i < pos; i ++){
            left = ecuacion;
        }
        for(int j = pos+1; j < strlen(ecuacion);j++){
            right = ecuacion+j; // Qué estás retornando? Falta return
        };
    }

    bool insert(Node* nodo,char* dato){
        if(strlen(dato) != 1){split(equation);}
        if(!start){
            start = new Node;
            start -> data = equation;
            start -> izq = new Node{left,nullptr, nullptr};
            start -> der = new Node{right, nullptr, nullptr};  //Warning porque falta retŕun
        }
        else{
            nodo -> izq = new Node {left, nullptr, nullptr};
            nodo -> der = new Node{right, nullptr, nullptr};
            insert(nodo -> izq, left);
            insert(nodo -> der, right);
            return true;
        }
    }
};



#endif //SOLVER_NCHIPANAUTEC_TREE_H
