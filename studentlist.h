#ifndef STUDENTLIST_H_INCLUDED
#define STUDENTLIST_H_INCLUDED
#include<stdint.h>

#define MAX_LENGTH 40

typedef struct _student_ Student;

struct _student_ {
    char name[MAX_LENGTH];
    char grade;
    char program[MAX_LENGTH];
    int32_t marks;
};

typedef struct _node_ Node;

struct _node_ {
    Student data;
    Node    *next;
};

typedef struct _slist_ Slist;

struct _slist_ {
    Node *head;
    Node *tail;
    int length;
};

Slist slist_new();
int slist_length(const Slist *list);
char* slist_maximum(const Slist *list);
Slist* slist_addnode_head(Slist *list,Student student);
//Slist* slist_addnode_tail(Slist *list,int32_t val);
#endif // STUDENTLIST_H_INCLUDED
