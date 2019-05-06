#include <iostream>
class MyClass{
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass(){
    std::cout << "コンストラクタ実行" << std::endl;

}

MyClass::~MyClass(){
    std::cout << "デストラクタ実行" << std::endl;
}

int main()
{
    std::cout << "main文の開始" << std::endl;
    MyClass test;
    std::cout << "main文の終了" << std::endl;

    return 0;
}
