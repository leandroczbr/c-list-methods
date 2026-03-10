#include "list.h"
#include "stdio.h"

struct list initt(int size){
    struct list l;
    l.last = size-1;
    return l;
}
void push(struct list *l, int var){
    if (l->last < (MAXX-1)) {
        l->last++;
        l->vector[l->last] = var;
    }
};
void insert(struct list *myList, int index, int var){
    if (!isFull(*myList)) {
        myList->last++;
        for(int i = (myList->last); i > index; i--){
            myList->vector[i] = myList->vector[i-1];
        }
        myList->vector[index] = var;
    }
};
void printl(char* format,struct list myList){
    for(int i = 0; i <= myList.last; i++){
        printf(format, i, myList.vector[i]);
    }
}

void removeValue(struct list *myList, int value){
    int index = find(*myList, value);
    if (index != -1){
        removeIndex(myList,index);
    }
};

void removeIndex(struct list *myList, int index){
    if (!isEmpty(*myList) && index <= myList->last) {
        for(int i = index; i < myList->last; i++){
            myList->vector[i] = myList->vector[i+1];
        }
        myList->last--;
    }
};

int find(struct list L, int value){
    for(int i = 0; i <= L.last; i++){
        if(L.vector[i] == value){
            return i;
        }
    }
    return -1;
};
int isFull(struct list myList){
    return myList.last == (MAXX-1);
};
int isEmpty(struct list myList){
    return myList.last == 0;
};
