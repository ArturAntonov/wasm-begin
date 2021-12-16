// Важно определить этот блок, чтобы экспортировать наружу функции и НЕ конфликтовать с Си кодом
// В общем, это нужно делать в коде c++. Если используется Си, то это не нужно.
extern "C" {
 int add(int a, int b);
}

// Эта функция используется в той, которая будет использована в JS.
// Отдельно никак не нужно ее помечать. Иными словами - внутренняя реализация не имеет значения для экспорта
int doNothing(int a) {
    return a;
}

// Функция, которая будет использована "снаружи" в JS
int add(int a, int b) {
    return doNothing(a) + b;
}