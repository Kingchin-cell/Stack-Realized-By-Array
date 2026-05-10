#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
Stack CreateStack(int MaxElements)
{
	Stack S;
	if (MaxElements < MinStackSize)
	{
		cout << "最少容量不得小于5" << endl;
		exit(0);
	}
	S = new StackRecord;
	if (S == NULL)
	{
		cout << "容量超了" << endl;
		exit(0);
	}
	S->Array = new int[MaxElements];
	if (S->Array == NULL)
	{
		exit(0);
	}
	S->Capacity = MaxElements;
	MakeEmpty(S);
	return S;
}
void DisposeStack(Stack S)
{
	if (S != NULL)
	{
		delete[] S->Array;
		delete S;
	}
}
int IsEmpty(Stack S)
{
	return S->TopOfStack == EmptyTOS;
}
void MakeEmpty(Stack S)
{
	S->TopOfStack = EmptyTOS;
}
void Push(ElementType X, Stack S)
{
	if (S == NULL)
		exit(0);
	S->TopOfStack++;
	S->Array[S->TopOfStack] = X;

}
ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[S->TopOfStack];
	exit(0);
}
void Pop(Stack S)
{
	if (!IsEmpty(S))
		S->TopOfStack--;
	return;
	exit(0);
}
ElementType TopAndPop(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[S->TopOfStack--];
	exit(0);
}
int IsFull(Stack S)
{
	return S->Capacity == S->TopOfStack + 1;
}





