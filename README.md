## Встроенно ПО для управления МРРТ контроллерами

Данное ПО предназначается для управления контроллером заряда с алгоритмом поиска ТММ солнечных панелей на базе микроконтроллера STM32F334C4T6. ПО может управляет контроллером по топологии синхронный buck с любыми параметрами напряжения и тока. Настройки входных и выходных параметров задаются с помощью параметрирующих структур. 

## Аппаратная часть проекта

* [Solar charge controller with MPPT: 20A 60V input max](https://github.com/RedCommissary/mppt-2420-hardware)

## Структура проекта

* **docs** - документация на проект
* **firmware** - исходный код проекта

## Инструменты

* [Visual Studio Code](https://code.visualstudio.com/)
    * [C/C++ for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
    * [Cortex-Debug](https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug)
* [GNU MCU Eclipse ARM Embedded GCC](https://github.com/xpack-dev-tools/arm-none-eabi-gcc-xpack/releases)
* [GNU MCU Eclipse Windows Build Tools](https://github.com/gnu-mcu-eclipse/windows-build-tools/releases)
* [JLink](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack)