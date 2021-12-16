# Вступление
Этот небольшой репозиторий посвящен началу работы с Web Assembly.

Начинаем с шагов по установке необходимых компонентов, далее рассматриваем основной "костяк" функционал.

Уроки взяты с замечательного источника [metanit.com](https://metanit.com/cpp/webassembly/1.1.php), 
доработаны для использования C++ и компилятора em++, а также актуализировано на день текущий.

## Настройка окружения
- загрузить на сайте emsdk https://emscripten.org/docs/getting_started/downloads.html пререквизиты (MacOS/win/linux)
- клонировать репозиторий по ссылке emsdk https://github.com/emscripten-core/emsdk
- получить проблему отсутствия в питоне certifi, который локально есть, но почему-то не используется
- решается путем активации сертификата внутри установленной на машинке версии питона `open /Applications/Python\ 3.9/Install\ Certificates.command` (macOS)
- полагаю, что если бы питона вовсе не было - взялся бы из проекта
- Далее работает команда на установку
- Запустить команды `./emsdk install latest` `./emsdk activate latest` и следовать рекомендациям по установке и прописыванию путей в переменных окружения
- Написать первую функцию на c++ и собрать
- Офигеть от того, что создался JS код обертки-окружения на 5к строк
- офигеть от самого файла wasm на 4к строк
- Страницу html нужно запускать на веб-сервере, просто открывать html - не будет работать в некоторых браузерах
Unfortunately several browsers (including Chrome, Safari, and Internet Explorer) do not support file:// XHR requests, and can’t load extra files needed by the HTML (like a .wasm file, or packaged file data as mentioned lower down). For these browsers you’ll need to serve the files using a local webserver and then open
  
## What's next?
- Клонируем к себе репозиторий.
- Читаем уроки на metanit.com, там хорошо расписана логика с объяснениями "что? как? почему?"
- Кусочки кода смотрим из уроков [Урок 1](./lesson_1) [Урок 2](./lesson_2) [Урок 3](./lesson_3)
- В папке с уроками лежат readme с пояснениями и командами для запуска.
- Лучше проходить последовательно.

[Дальше](./lesson_1)

## Дополнительно
### Может быть интересно после этого небольшого гайда
- очень коротко и сжато и только на языке C [Web Assembly Getting started](https://developer.mozilla.org/en-US/docs/WebAssembly/C_to_wasm)

- любопытный [Гайд по  С++ and em++](https://medium.com/@tdeniffel/pragmatic-compiling-from-c-to-webassembly-a-guide-a496cc5954b8),
  в котором рассмотрены также основные случаи использования + логика с классами на c++
