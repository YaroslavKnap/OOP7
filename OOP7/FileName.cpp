#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "ukr");
    // Введення розмірів масиву
    int rows, cols;
    std::cout << "Введіть кількість рядків: ";
    std::cin >> rows;
    std::cout << "Введіть кількість стовпців: ";
    std::cin >> cols;

    // Створення двовимірного масиву за допомогою вектора векторів
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));

    // Введення елементів масиву
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Елемент [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Виведення масиву
    std::cout << "Масив:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Пошук максимального та мінімального елементів
    int maxElement = array[0][0];
    int minElement = array[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
            }
            if (array[i][j] < minElement) {
                minElement = array[i][j];
            }
        }
    }

    // Виведення результатів
    std::cout << "Максимальний елемент: " << maxElement << std::endl;
    std::cout << "Мінімальний елемент: " << minElement << std::endl;

    return 0;
}
