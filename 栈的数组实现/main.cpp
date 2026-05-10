#include "Stack.h"
void test01()
{
    // 1. 创建栈
    cout << "===== 1. CreateStack =====" << endl;
    Stack S = CreateStack(10);
    if (S == nullptr) {
        cout << "栈创建失败！" << endl;
        return;
    }
    cout << "栈创建成功，容量：" << S->Capacity << endl;

    // 2. 测试 IsEmpty（初始状态）
    cout << "\n===== 2. IsEmpty =====" << endl;
    if (IsEmpty(S))
        cout << "栈初始为空 ✅" << endl;
    else
        cout << "栈初始不为空 ❌" << endl;

    // 3. 测试 Push
    cout << "\n===== 3. Push =====" << endl;
    for (int i = 1; i <= 5; ++i) {
        Push(i * 10, S);
        cout << "入栈：" << i * 10 << endl;
    }

    // 4. 测试 Top
    cout << "\n===== 4. Top =====" << endl;
    cout << "当前栈顶元素：" << Top(S) << endl;

    // 5. 测试 IsFull
    cout << "\n===== 5. IsFull =====" << endl;
    if (IsFull(S))
        cout << "栈已满 ❌" << endl;
    else
        cout << "栈未满 ✅" << endl;

    // 6. 测试 Pop
    cout << "\n===== 6. Pop =====" << endl;
    Pop(S);
    cout << "执行一次 Pop 后，栈顶元素：" << Top(S) << endl;

    // 7. 测试 TopAndPop
    cout << "\n===== 7. TopAndPop =====" << endl;
    ElementType val = TopAndPop(S);
    cout << "TopAndPop 弹出并返回：" << val << endl;
    cout << "执行后栈顶元素：" << Top(S) << endl;

    // 8. 测试 MakeEmpty
    cout << "\n===== 8. MakeEmpty =====" << endl;
    MakeEmpty(S);
    if (IsEmpty(S))
        cout << "MakeEmpty 后栈为空 ✅" << endl;
    else
        cout << "MakeEmpty 失败 ❌" << endl;

    // 9. 测试清空后再次入栈出栈
    cout << "\n===== 9. 清空后二次操作 =====" << endl;
    Push(99, S);
    cout << "入栈 99，栈顶：" << Top(S) << endl;
    Pop(S);
    if (IsEmpty(S))
        cout << "出栈后栈为空 ✅" << endl;

    // 10. 测试 DisposeStack
    cout << "\n===== 10. DisposeStack =====" << endl;
    DisposeStack(S);
    cout << "栈已释放，所有函数测试完成！" << endl;
}

// 主函数里只需要调用这一行
int main()
{
    test01();
    return 0;
}
