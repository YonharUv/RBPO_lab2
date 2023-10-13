// RBPO_lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

import student_1bib21040.Lab2.Variant6.Task1;
import student_1bib21040.Lab2.Variant6.Task2;
import student_1bib21040.Lab2.Variant6.Task3;
import student_1bib21040.Lab2.Variant6.Task4;
import student_1bib21040.Lab2.Variant6.Task5;

using namespace std;

using namespace std;

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Task 1\n";
    cout << "2. Task 2\n";
    cout << "3. Task 3\n";
    cout << "4. Task 4\n";
    cout << "5. Task 5\n";
    cout << "6. Exit\n";
}

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int taskChoice;
            cout << "Choose the function (1 - f1, 2 - f2, 3 - f3, 4 - f4): ";
            cin >> taskChoice;

            switch (taskChoice) {
            case 1: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f1(x) = " << RBPO::Lab2::Variant6::Task1::f1(x) << "\n";
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f2(x) = " << RBPO::Lab2::Variant6::Task1::f2(x) << "\n";
                break;
            }
            case 3: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "f3(n) = " << RBPO::Lab2::Variant6::Task1::f3(n) << "\n";
                break;
            }
            case 4: {
                double epsilon;
                cout << "Enter epsilon: ";
                cin >> epsilon;
                cout << "f4(epsilon) = " << RBPO::Lab2::Variant6::Task1::f4(epsilon) << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
            }

            break;
        }
        case 2: {
            int taskChoice;
            cout << "Choose the function (1 - f1, 2 - f2, 3 - f3, 4 - f4): ";
            cin >> taskChoice;

            switch (taskChoice) {
            case 1: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f1(x) = " << RBPO::Lab2::Variant6::Task2::f1(x) << "\n";
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f2(x) = " << RBPO::Lab2::Variant6::Task2::f2(x) << "\n";
                break;
            }
            case 3: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "f3(n) = " << RBPO::Lab2::Variant6::Task2::f3(n) << "\n";
                break;
            }
            case 4: {
                double epsilon;
                cout << "Enter epsilon: ";
                cin >> epsilon;
                cout << "f4(epsilon) = " << RBPO::Lab2::Variant6::Task2::f4(epsilon) << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
            }

            break;
        }
        case 3: {
            int taskChoice;
            cout << "Choose the function (1 - f1, 2 - f2, 3 - f3, 4 - f4): ";
            cin >> taskChoice;

            switch (taskChoice) {
            case 1: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f1(x) = " << RBPO::Lab2::Variant6::Task3::f1(x) << "\n";
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f2(x) = " << RBPO::Lab2::Variant6::Task3::f2(x) << "\n";
                break;
            }
            case 3: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "f3(n) = " << RBPO::Lab2::Variant6::Task3::f3(n) << "\n";
                break;
            }
            case 4: {
                double epsilon;
                cout << "Enter epsilon: ";
                cin >> epsilon;
                cout << "f4(epsilon) = " << RBPO::Lab2::Variant6::Task3::f4(epsilon) << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
            }

            break;
        }
        case 4: {
            int taskChoice;
            cout << "Choose the function (1 - f1, 2 - f2, 3 - f3, 4 - f4): ";
            cin >> taskChoice;

            switch (taskChoice) {
            case 1: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f1(x) = " << RBPO::Lab2::Variant6::Task4::f1(x) << "\n";
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f2(x) = " << RBPO::Lab2::Variant6::Task4::f2(x) << "\n";
                break;
            }
            case 3: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "f3(n) = " << RBPO::Lab2::Variant6::Task4::f3(n) << "\n";
                break;
            }
            case 4: {
                double epsilon;
                cout << "Enter epsilon: ";
                cin >> epsilon;
                cout << "f4(epsilon) = " << RBPO::Lab2::Variant6::Task4::f4(epsilon) << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
            }

            break;
        }
        case 5: {
            int taskChoice;
            cout << "Choose the function (1 - f1, 2 - f2, 3 - f3, 4 - f4): ";
            cin >> taskChoice;

            switch (taskChoice) {
            case 1: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f1(x) = " << RBPO::Lab2::Variant6::Task5::f1(x) << "\n";
                break;
            }
            case 2: {
                double x;
                cout << "Enter x: ";
                cin >> x;
                cout << "f2(x) = " << RBPO::Lab2::Variant6::Task5::f2(x) << "\n";
                break;
            }
            case 3: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "f3(n) = " << RBPO::Lab2::Variant6::Task5::f3(n) << "\n";
                break;
            }
            case 4: {
                double epsilon;
                cout << "Enter epsilon: ";
                cin >> epsilon;
                cout << "f4(epsilon) = " << RBPO::Lab2::Variant6::Task5::f4(epsilon) << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
            }

            break;
        }
        case 6:
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (true);

    return 0;
}

//void printMenu() {
//    cout << "Выберите задание:" << std::endl;
//    cout << "1. f1(x)" << std::endl;
//    cout << "2. f2(x)" << std::endl;
//    cout << "3. f3(n)" << std::endl;
//    cout << "4. f4(epsilon)" << std::endl;
//    cout << "0. Выход" << std::endl;
//}
//
//int main() {
//    int choice;
//    double x, epsilon;
//    int n;
//
//    do {
//        printMenu();
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Введите x для f1(x): ";
//            cin >> x;
//            cout << "Результат: " << f1(x) << endl;
//            break;
//        case 2:
//            cout << "Введите x для f2(x): ";
//            cin >> x;
//            cout << "Результат (с условным выражением): " << f2_1(x) << endl;
//            cout << "Результат (с if-else): " << f2_2(x) << endl;
//            break;
//        case 3:
//            cout << "Введите n для f3(n): ";
//            cin >> n;
//            cout << "Результат (for): " << f3_1(n) << endl;
//            cout << "Результат (while): " << f3_2(n) << endl;
//            cout << "Результат (do-while): " << f3_3(n) << endl;
//            break;
//        case 4:
//            cout << "Введите epsilon для f4(epsilon): ";
//            cin >> epsilon;
//            cout << "Результат (for): " << f4_1(epsilon) << endl;
//            cout << "Результат (while): " << f4_2(epsilon) << endl;
//            cout << "Результат (do-while): " << f4_3(epsilon) << endl;
//            break;
//        case 0:
//            cout << "Программа завершена." << endl;
//            break;
//        default:
//            cout << "Неверный выбор. Попробуйте снова." << endl;
//        }
//    } while (choice != 0);
//
//    return 0;
//}

//for (int i = 0; i < 5; ++i)
//{
//    if (i == 2)
//        continue;
//    printf("%d\n");
//}
//
//int i = 0;
//while (i < 5)
//{
//    if (i == 2)
//    {
//        ++i;
//        continue;
//    }
//    printf("%d\n");
//    ++i;
//}
//
//int i = 0;
//do
//{
//    if (i == 2)
//    {
//        ++i;
//        continue;
//    }
//    printf("%d\n");
//    ++i;
//} while (i < 4);
//
//x > 5 ? x * x : -2 * x
//
//switch (_getch())
//{
//case '1':
//    printf("Задание 1");
//    break;
//case '2':
//    printf("Задание 2");
//    break;
//default:
//    printf("Неверный ввод");
//    break;
//}
//
//double F1(double x)
//{
//
//}
//
//if (x > 0 && y > 0)
//std::cout << "Первая четверть";
//else if (x < 0 && y > 0)
//std::cout << "Вторая четверть";
//else if (x < 0 && y < 0)
//    std::cout << "Третья четверть";
//else if (x > 0 && y < 0)
//    std::cout << "Четвёртая четверть";
//else if (x == 0)
//std::cout << "На оси Y";
//else
//std::cout << "На оси X";
//std::cout << std::endl;
//if (int x = a * a; x >= 10 && x < 100)
//    std::cout << "Квадрат числа является двухзначным числом";
//
//
//f(x) = cos⁡(x) + cos⁡(2x) + cos(6x) + cos(7x)
//f(x) = { x^2 + 3x + 9, x≤3
//        (sin⁡(x)) / (x^2 - 9),x > 3
//
//a_i = (-1)^i*(1 - (i+1)^2 / (i+2)^2)
//f3(n) = ∑_(i=0)^n*a(i)
//f4(ε) = ∑_(i=0)^∞*a(i)