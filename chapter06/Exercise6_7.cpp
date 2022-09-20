#include <iostream>

using namespace std;

//该函数仅用于统计执行的次数
unsigned myCnt() { // 完成该函数的任务不需要任何参数

    static unsigned iCnt = -1; // iCnt是静态局部变量
    ++iCnt;
    return iCnt;

}

int main() {

    cout << "请输入任意字符后按回车键继续" << endl;
    char ch;
    while (cin >> ch) {
        cout << "函数myCnt()的执行次数是：" << myCnt() << endl;
    }
    return 0;
}
