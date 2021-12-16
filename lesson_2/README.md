# Lesson 2. Использование функции из JS in Wasm

### Команда на компиляцию 
файла с экспортируемой функцией и флагом `ERROR_ON_UNDEFINED_SYMBOLS`, который не ругается на импортируемые в .cpp функции

`em++ hello.cpp -O2 -s WASM=1 -s EXPORTED_FUNCTIONS="['_sum']" -o hello.js -s ERROR_ON_UNDEFINED_SYMBOLS=0`

em++ функцию `update` преобразовал в название `_Z6updatei`, которое уже нужно использовать в коде JS. 

Это преобразование можно было увидеть в .js файле, который создал  em++ `var asmLibraryArg = {"_Z6updatei": __Z6updatei};`

Это преобразование компилятора, которое в любом случае будет, к этому нужно быть готовым. 
В зависимости от сигнатуры функции название может быть сложней, чем просто префикс+имя+суффикс.

Во время компиляции появляется warning `warning: undefined symbol: _Z6updatei (referenced by top-level compiled C/C++ code)`,
который не ломает сам процесс, благодаря флагу `ERROR_ON_UNDEFINED_SYMBOLS`

### Команда для запуска во встроенном emscripten веб-браузере
`emrun --browser chrome hello.html`

[Назад](../lesson_1) / [Вперед](../lesson_3)
