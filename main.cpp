#include <iostream>
#include <cstring>

void ejemplo_1_arreglos_definicion() {
    int arr1[4];
    double arr2[] = {1.0, 2.0, 3.0, 4.0};
    float arr3[4] = {10, 20};
    int arr4[3]{1, 2, 3};
    int arr5[3]{};

    char text[] = "Hello World!";
    auto text2 = "Hello World!";
    const char* text3 = "Hello World!";
}

void ejemplo_2_arreglos_recorrido() {
    double arr2[] = {1.0, 2.0, 3.0, 4.0};
    std::cout << arr2[2] << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    for (const auto& item: arr2) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "arr2: " << sizeof(arr2)/sizeof(int) << std::endl;
    std::cout << std::size(arr2) << std::endl;
    char text[] = "Hola";
    std::cout << sizeof(text) << std::endl;
    std::cout << std::size(text) << std::endl;
    std::cout << std::strlen(text) << std::endl;

    for (int i = std::strlen(text) - 1; i >= 0; i--) {
        std::cout << text[i] << " ";
    }
}
void ejemplo_3_arreglos_operaciones() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {10, 20, 30, 40, 50 , 60, 70, 80, 90};
    int total[10];
    for (int i = 0; i < std::size(total); i++) {
        total[i] = a[i] + b[i];
    }

    for (int i = 0; i < std::size(total); i++) {
        std::cout << total[i] << " ";
    }
}

void calcular_total_arreglos(int sz, int* pa, int *pb, int *ptotal) {
    for (int i = 0; i < sz; i++) {
        ptotal[i] = pa[i] + pb[i];
    }
}

void imprimir_arreglo(int sz, int* arr) {
    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
}

void imprimir_arreglo_con_punteros(int sz, int* arr) {
    int* iter = arr;
    while (iter != arr + sz) {
        std::cout << *iter << " ";
        ++iter;
    }
}

void ejemplo_4_arreglos_operaciones() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {10, 20, 30, 40, 50 , 60, 70, 80, 90};
    int total[10];

    calcular_total_arreglos(std::size(a), a, b, total);
    // imprimir_arreglo(std::size(total), total);
    imprimir_arreglo_punteros(std::size(total), total);
}


int main() {
    // ejemplo_2_arreglos_recorrido();
    // ejemplo_3_arreglos_operaciones();
    ejemplo_4_arreglos_operaciones();
    return 0;
}
