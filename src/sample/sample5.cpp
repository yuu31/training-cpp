#include <iostream>

void func(){
    std::cout << "::func()" << std::endl;
}

namespace Util{
    void func(){
        std::cout << "Util::func()" << std::endl;
    }
}

int main(){
    func();
    Util::func();

    return 0;
}

