#include <Windows.h>
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

// Шифрование
string encrypt(string input) {
    vector<char> word(input.begin(), input.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)alphabet.length(); j++) {
            if (word[i] == alphabet[j]) {
                word[i] = alphabet[(j + 3) % 26];

                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
} 

// Расшифровка
string decrypt(string input) {
    vector<char> word(input.begin(), input.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)alphabet.length(); j++) {
            if (word[i] == alphabet[j]) {
                word[i] = alphabet[(j - 3) % 26];
                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}

int main() {

    // Обычный вид без шифрования
    string text = "What are u doing dude?";
    cout << text << endl;

    // Шифрование ссылки
    string url = encrypt("https://yandex.ru/");
    cout << url << endl;

    // Шифроваание текста
    string textencrypt = encrypt(text);
    cout << textencrypt << endl;

    // Расшифровка зашифрованного текста
    string textdecrypt = decrypt(textencrypt);
    cout << textdecrypt << endl;
    
    _getch();
    return 0;
}