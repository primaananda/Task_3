#include<iostream>
#include"list.h"

using namespace std;
void InsertFirst(list *L, address P) {
    next(P) = (*L).first;
    (*L).first = P;
};

void InsertLast(list *L, address P) {
    address Q;
    Q= L->first;
    if (Q->next == Nil){
        InsertFirst(L,P);
    }
    else {
        while (Q->next != Nil) {
            Q=next(Q);
        }
        Q->next=P;
    }
};
