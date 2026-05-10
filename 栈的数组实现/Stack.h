#ifndef STACK_H
#define STACK_H
#define EmptyTOS (-1)
#define MinStackSize (5)
#include <iostream>
using namespace std;
struct StackRecord;
typedef struct StackRecord* Stack;
typedef int ElementType;
int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);
struct StackRecord
{
	int Capacity;
	int TopOfStack;
	ElementType* Array;
};
#endif
