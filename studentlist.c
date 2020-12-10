#include<stdlib.h>
#include<assert.h>
#include<stdio.h>
#include "studentlist.h"

Slist slist_new(){

    Slist s1 = {NULL,NULL,0};
    return s1;

}
int slist_length(const Slist *list){
    assert(list != NULL);
    return list->length;
}

static Node* _get_new_node_(Student student){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = student;
    newnode->next = NULL;

    return newnode;
}

Slist* slist_addnode_head(Slist *list,Student student){
    assert(list != NULL );
    Node *newnode = _get_new_node_(student);

    newnode->next = list->head;
    list->head = newnode;

    if(list->tail == NULL){
    list->tail = newnode;
    }
    ++list->length;

    assert( (list->length == 1 && list->head == list->tail) || (list->length > 1 && list->head != list->tail));

    return list;
}

char* slist_maximum(const Slist *list){
    assert( list != NULL );
    Node *temp = list->head;
    int max = temp->data.marks;

    while ( temp != NULL ){
        if (temp->data.marks > max){
            max = temp->data.marks;
        }
        temp = temp->next;
    }

    return temp->data.name;
}
