#include <Windows.h>
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

// ����������
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

// �����������
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

    // ������� ��� ��� ����������
    string text = "What are u doing dude?";
    cout << text << endl;

    // ���������� ������
    string url = encrypt("https://yandex.ru/");
    cout << url << endl;

    // ����������� ������
    string textencrypt = encrypt(text);
    cout << textencrypt << endl;

    // ����������� �������������� ������
    string textdecrypt = decrypt(textencrypt);
    cout << textdecrypt << endl;
    
    _getch();
    return 0;
}