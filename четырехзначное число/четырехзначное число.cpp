// четырехзначное число.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// Пользователь вводит четырехзначное число. Необходимо 
//поменять в этом числе 1 и 2 цифры, а также 3 и 4 цифры.Если
//пользователь вводит не четырехзначное число — вывести
//сообщение об ошибке.
//

#include <iostream>
using namespace std;


int main()
{
    
    int a, b, c, d, n;
    cout << "Введите четырехзначное число ->" << endl;
    cin >> n;

    if (n <= 1000)
    {
        cout << "Вы ввели не правильное число!";
    }
    else  if (n >= 9999)
    {
        cout << "Вы ввели не правильное число!";
    }
    else
    {
        d = n % 10;n /= 10;
        c = n % 10;n /= 10;
        b = n % 10;n /= 10;
        a = n % 10;n /= 10;
        cout << b << a << d << c;
    }

    
   
   
    
}

