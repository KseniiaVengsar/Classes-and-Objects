// 1_Калькулятор_двух_чисел.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <string>
//описание класса
class Calculator {
private:
    //поля
    double num1;
    double num2;
    //методы.метод-аналог функции
public:
    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);
    void SHOWALL();

};
//double add() - метод должен возвращать результат сложения num1 и num2
double Calculator::add() {
    double SUM;
    SUM = num1 + num2;
    return SUM;
}
//double multiply() - метод должен возвращать результат перемножения num1 и num2
double Calculator::multiply() {
    double MULT;
    MULT = num1 * num2;
    return MULT;
}
//double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
double Calculator::subtract_1_2() {
    double SUB;
    SUB = num2 - num1;
    return SUB;
}
//double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
double Calculator::subtract_2_1() {
    double SUB2;
    SUB2 = num1 - num2;
    return SUB2;
}
//double divide_1_2() - метод должен возвращать результат деления num1 на num2
double Calculator::divide_1_2() {
    double DIV;
    DIV = num1 / num2;
    return DIV;
}
//double divide_2_1() - метод должен возвращать результат деления num2 на num1
double Calculator::divide_2_1() {
    double DIV2;
    DIV2 = num2 / num1;
    return DIV2;
}
//bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
//bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
bool Calculator::set_num1(double num1) {
    
    if ((this->num1 = num1) != 0)
    {
        return true;

    }
    else {
        return false;
    }
}

///////////////////////////////////////////////////////
bool Calculator::set_num2(double num2) {

    
    if ((this->num2 = num2)!= 0)
    {
        return true;

    }
    else {
        return false;
    }
}

void Calculator::SHOWALL()
{

    std::cout << "num1 + num2 =" << " " << add() << std::endl;
    std::cout << "num1*num2 =" << " " << multiply() << std::endl;
    std::cout << "num2 - num1 =" << " " << subtract_1_2() << std::endl;
    std::cout << "num1-num2 =" << " " << subtract_2_1() << std::endl;
    std::cout << "num1 / num2 =" << " " << divide_1_2() << std::endl;
    std::cout << "num2 / num1 =" << " " << divide_2_1() << std::endl;

}
//главная функция
int main() {
    setlocale(LC_ALL, "RU");
    //создание объекта
    Calculator number;
    //присваивание значений полям

    //вызов метода
    double c;
    std::cout << "Введите num1:";
    std::cin >> c;
    while (number.set_num1(c) == false) {
        std::cout << "Неверный ввод!" << std::endl;
        std::cout << "Введите num1:";
        std::cin >> c;
    }

    std::cout << "Введите num2:";
    double z;
    std::cin >> z;
    while (number.set_num2(z) == false) {
        std::cout << "Неверный ввод!" << std::endl;
        std::cout << "Введите num2:";
        std::cin >> z;
    }

 

    number.SHOWALL();

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
