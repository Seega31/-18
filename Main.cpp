#include <iostream>

int sum(int first, int second = 0, int third = 0, int fourth = 0, int fifth = 0) {
    return first + second + third + fourth + fifth;
}
double average(double num6, double num7, double num8) {
    return (num6 + num7 + num8) / 3;
}
int max(int num9, int num10, int num11) {
    std::cout << "Тип: int" << std::endl;
    return (num9 > num10) ? ((num9 > num11) ? num9 : num11) : ((num10 > num11) ? num10 : num11);
}

short max(short num9, short num10, short num11) {
    std::cout << "Тип: shorts" << std::endl;
    return (num9 > num10) ? ((num9 > num11) ? num9 : num11) : ((num10 > num11) ? num10 : num11);
}

double max(double num9, double num10, double num11) {
    std::cout << "Тип: double" << std::endl;
    return (num9 > num10) ? ((num9 > num11) ? num9 : num11) : ((num10 > num11) ? num10 : num11);
}
template <typename T>
bool isPrime(T num) {
    if (num <= 1) {
        return false;
    }
    for (T i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
template <typename T>
T findFirstPrime(T arr[], int length) {
    for (int i = 0; i < length; ++i) {
        if (isPrime(arr[i])) {
            return arr[i];
        }
    }
    return T();
}

int main() {
    setlocale(LC_ALL, "Russian");



    //Задача 1.
    int num1, num2, num3, num4, num5;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите третье число: ";
    std::cin >> num3;
    std::cout << "Введите четвертое число: ";
    std::cin >> num4;
    std::cout << "Введите пятое число: ";
    std::cin >> num5;
    int result1 = sum(num1, num2, num3, num4, num5);
    std::cout << "Сумма: " << result1 << std::endl;



    //Задача 2.
    double num6, num7, num8;
    std::cout << "Введите первое число: ";
    std::cin >> num6;
    std::cout << "Введите второе число: ";
    std::cin >> num7;
    std::cout << "Введите третье число: ";
    std::cin >> num8;
    double result2 = average(num6, num7, num8);
    std::cout << "Среднее арифметическое: " << result2 << std::endl;


    //Задача 3.
    int num9, num10, num11;
    std::cout << "Введите первое число: ";
    std::cin >> num9;
    std::cout << "Введите второе число: ";
    std::cin >> num10;
    std::cout << "Введите третье число: ";
    std::cin >> num11;
    int resultInt = max(num9, num10, num11);
    std::cout << "Максимальное значение: " << resultInt << std::endl;
    short resultShort = max(static_cast<short>(num9), static_cast<short>(num10), static_cast<short>(num11));
    std::cout << "Максимальное значение: " << resultShort << std::endl;
    double resultDouble = max(static_cast<double>(num9), static_cast<double>(num10), static_cast<double>(num11));
    std::cout << "Максимальное значение: " << resultDouble << std::endl;



    //Задача 4.
    int arr[] = { 4, 6, 8, 9, 10, 11, 15 };
    int length = 7;
    int result3 = findFirstPrime(arr, length);
    if (result3 == 0) {
        std::cout << "Простое число не найдено" << std::endl;
    }
    else {
        std::cout << "Первое простое число: " << result3 << std::endl;
    }

    return 0;
}