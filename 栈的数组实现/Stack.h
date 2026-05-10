#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
typedef int ElementType;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;
struct Node
{
	ElementType Element;
	PtrToNode Next;
};
int IsEmpty(Stack S);
Stack CreateStack();
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);

#endif
