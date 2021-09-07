#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

Node *tree;
ListNode *listNode;

extern Node* createNode(char* name, int depth){
    Node *node = (Node *) malloc(sizeof(Node));
    strcpy(node->name, name);
    node->leaf1 = NULL;
    node->leaf2 = NULL;
    node->leaf3 = NULL;
    node->depth = depth;

    addToList(node);

    return node;
}

extern void initializeList(){
    listNode = (ListNode *) malloc(sizeof(ListNode));
    Node *node = (Node *) malloc(sizeof(Node));
    listNode->val = node;
    listNode->next = NULL;
}

extern void addToList(Node *node){
    ListNode* current = listNode;
    
    while(current->next != NULL){
        current = current->next;
    }

    current->next = (ListNode *) malloc(sizeof(ListNode));
    current->next->val = node;
    current->next->next = NULL;
}

extern void printTree() {
    ListNode * current = listNode;

    while (current != NULL) {
        printf("%s\n", current->val->name);
        current = current->next;
    }
}