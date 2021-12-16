# Урок 3. Использование общего буффера памяти

### Команда на запуск компиляции

`em++ hello.cpp -O2 -s WASM=1 -s EXPORTED_FUNCTIONS="['_sum', '_getOffset']" -o hello.js -s ERROR_ON_UNDEFINED_SYMBOLS=0`

### Команда для запуска во встроенном emscripten веб-браузере
`emrun --browser chrome hello_buffer.html`


В уроке metanit.com рассказывается, что в буффер нужно подготовить заранее собранный массив, но в этом нет нужды,
поскольку wasm сам предоставляет объект `memory` в объекте `result`.

[на stackoverflow](https://stackoverflow.com/questions/46748572/how-to-access-webassembly-linear-memory-from-c-c) маленькая демка
показывает, какой буффер памяти нужно взять, и что важно передавать из файла .cpp ссылку на элемент массива. 

Интереса ради сделал дебаг функцию, но писать в нее можно только числа. Строки преобразовываются в числа.

[Назад](../lesson_2)
