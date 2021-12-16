// Важно определить этот блок, чтобы экспортировать наружу функции и НЕ конфликтовать с Си кодом
// В общем, это нужно делать в коде c++. Если используется Си, то это не нужно.
extern "C" {
 void sum(int a, int b);
}

// Специальный указатель на функцию, которая определена внутри  JS и передается внутрь wasm
extern void update(int n);

void sum(int a, int b)
{
    update(a + b);
}
