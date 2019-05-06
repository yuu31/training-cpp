#include <iostream>

class MyClass{
private:
	int    data[2];
public:
	void inputData(int a, int b);
	int calcSum(void);
};

void MyClass::inputData(int a, int b){
	data[0] = a;
	data[1] = b;
}

int MyClass::calcSum(void){
	return(data[0] + data[1]);
}

int main(void){
    MyClass sum;
    sum.inputData(10,20);
    int result = sum.calcSum();
    std::cout << result << std::endl;
	
    return 0;
}
