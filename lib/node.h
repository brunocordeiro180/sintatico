#ifndef NODE_H
#define NODE_H

typedef struct node
{
	struct node* leaf1;
	struct node* leaf2;
    struct node* leaf3;
    char name[50];
    int depth;
}
Node;

typedef struct listNode{
    Node* val;
    struct listNode* next;
} ListNode;

extern Node* createNode(char* name, int depth);
extern void initializeList();
extern void addToList(Node *node);
extern void printTree();

#endif