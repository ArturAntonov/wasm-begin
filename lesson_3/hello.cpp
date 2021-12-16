// Важно определить этот блок, чтобы экспортировать наружу функции и НЕ конфликтовать с Си кодом
// В общем, это нужно делать в коде c++. Если используется Си, то это не нужно.
extern "C" {
 int sum();
 int* getOffset();
}

int square(int a) {
    return a * a;
}

extern void debug(int n);
#define NUM_VALS 8

int numbers[NUM_VALS];

// Функция считает сумму первых 8-ми элементов, причем сами элементы мы будем передавать "снаружи"
int sum()
{
    int result = 0;

    for(int i=0; i < NUM_VALS; i++) {
        result += numbers[i];
        debug(numbers[i]);
    }
    return result;
}

// Возвращает адрес массива, то есть указатель на его первый элемент
int* getOffset() {
    return &numbers[0];
}
