//
// Created by alex on 11/7/19.
//

#include <string.h>
#include <stdint.h>

typedef struct itemType {
    char item[4];
} itemType;

typedef struct list {
    itemType item;
    struct list *next;
} list;

list *searchList(list *list, itemType itemToFind){
    if(list == NULL){
        return (NULL);
    }

    if(list->item.item == itemToFind.item){
        return (list);
    } else {
        return (searchList(list->next, itemToFind));
    }
}

void insertList(list **pList, itemType itemToAdd){
    list *listPointer = malloc(sizeof(list));
    listPointer->item = itemToAdd;
    listPointer->next = *pList;
    *pList = listPointer;
}

list createList(itemType firstItem) {

}