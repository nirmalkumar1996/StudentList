#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "studentlist.h"

void test_empty_list(){
    Slist s1 = slist_new();
    Slist *list = &s1;
    assert (slist_length(list) == 0 );
}


void test_add_at_head(){
    Slist s1 = slist_new();
    Slist *list = &s1;
    assert (slist_length(list) == 0 );
    Student student1 = {"Nirmal",'A',"Machine Learning",90};
    list = slist_addnode_head(list,student1);
    assert(slist_length(list)==1);
    Student student2 = {"kumar",'B',"Big data",80};
    list = slist_addnode_head(list,student2);
    assert(slist_length(list)==2);
}

void test_student_maxmarks(){
    Slist s1 = slist_new();
    Slist *list = &s1;
    assert (slist_length(list) == 0 );
    Student student1 = {"Nirmal",'A',"Machine Learning",90};
    list = slist_addnode_head(list,student1);
    assert(slist_length(list)==1);
    Student student2 = {"kumar",'B',"Big data",80};
    list = slist_addnode_head(list,student2);
    assert(slist_length(list)==2);
    //udent max = slist_maximum(list);
    //intf("%d",max.marks);
    assert(slist_maximum(list)=="N");
}

int main()
{
    //printf("Hello world!\n");
    //test_empty_list();
    //test_add_at_head();
    test_student_maxmarks();
    return 0;
}
