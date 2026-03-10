#include <stdio.h>
#include "list.h"

// Just for testing

int main(){
    struct list myList = initt(50);

    printf("list size %d\n",myList.last+1);

    push(&myList,12);
    
    printf("list size %d\n",myList.last+1);

    for(int i = 0; i <= myList.last; i++){
        myList.vector[i] = i * 2 + 3;
    }

    printl("i %d v %d\n",myList);

    printf("%d ",find(myList, 99));
    insert(&myList,3,99);
    printf("%d\n",find(myList, 99));

    for(int i = myList.last+1; !isFull(myList); i++){
        push(&myList,i * 2 + 3);
    }
    
    printl("i %d v %d\n",myList);

    removeValue(&myList, 99);
    removeValue(&myList, 99);
    
    printl("i %d v %d\n",myList);

    return 0;
}
