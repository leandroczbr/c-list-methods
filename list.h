#ifndef LIST
#define LIST

#define MAXX 100

struct list{
    int vector[MAXX];
    int last;
};

struct list initt(int size);
void printl(char* format,struct list myList);
void push(struct list *l, int var);
void insert(struct list *l, int index, int var);
void removeValue(struct list *myList, int value);
void removeIndex(struct list *myList, int index);
int find(struct list l, int value);
int isFull(struct list myList);
int isEmpty(struct list myList);

#endif
