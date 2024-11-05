#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

// Функція для перевірки, чи слово починається на 'b'
bool startsWithB(const char word[]) {
    return (word[0] == 'b' || word[0] == 'B');
}

// Функція для підрахунку слів, що починаються з 'b'
int countWordsStartingWithB(const char str[]) {
    int count = 0;
    const char* delimiter = " ";
    char temp[256];
    strcpy_s(temp, sizeof(temp), str); // Копіюємо рядок у тимчасовий масив

    char* context = nullptr;
    char* word = strtok_s(temp, delimiter, &context); // Розділяємо рядок на слова
    while (word != nullptr) {
        if (startsWithB(word)) {
            count++;
        }
        word = strtok_s(nullptr, delimiter, &context); // Переходимо до наступного слова
    }

    return count;
}

int main() {
    char input[256];

    cout << "Enter a string: ";
    cin.getline(input, 256); // Зчитуємо рядок користувача

    int result = countWordsStartingWithB(input);
    cout << "Number of words starting with 'b': " << result << endl;

    return 0;
}