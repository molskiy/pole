#include <iostream>
class MyClass{
private:
    int pole1;
    int pole2;
public:
    friend std::istream& operator>>(std::istream& is, MyClass& obj){
        is >> obj.pole1 >> obj.pole2;
        return is;
    }
};
int main(){
    MyClass obj;
    std::cout << "Введите числа:" << std::endl;
    std::cin >> obj;
    return 0;
}
