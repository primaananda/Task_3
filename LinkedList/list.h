#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

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

#endif // LIST_H_INCLUDED
