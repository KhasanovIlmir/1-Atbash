#include <iostream>
#include <string>

char atbash(char text) {
    if (text >= 'a' && text <= 'z') {
        return 'z' - (text - 'a');
    }
    else if (text >= 'A' && text <= 'Z') {
        return 'Z' - (text - 'A');
    }
    else if (text >= 'а' && text <= 'я') {
        return 'я' - (text - 'а');
    }
    else if (text >= 'А' && text <= 'Я') {
        return 'Я' - (text - 'А');
    }
    return text;
}

int main() {
    setlocale(LC_ALL, "rus");
    std::string result;
    std::string inputText;

    std::cout << "Введите текст для шифра: ";
    std::getline(std::cin, inputText);

    for (char charInput : inputText) {
        result += atbash(charInput);
    }

    std::cout << result << std::endl;
    return 0;
}