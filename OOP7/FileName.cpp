#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "ukr");
    // �������� ������ ������
    int rows, cols;
    std::cout << "������ ������� �����: ";
    std::cin >> rows;
    std::cout << "������ ������� ��������: ";
    std::cin >> cols;

    // ��������� ����������� ������ �� ��������� ������� �������
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));

    // �������� �������� ������
    std::cout << "������ �������� ������:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "������� [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // ��������� ������
    std::cout << "�����:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // ����� ������������� �� ���������� ��������
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

    // ��������� ����������
    std::cout << "������������ �������: " << maxElement << std::endl;
    std::cout << "̳�������� �������: " << minElement << std::endl;

    return 0;
}
