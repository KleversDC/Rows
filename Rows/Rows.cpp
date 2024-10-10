#include <iostream>
#include <string>
using namespace std;
//1
//void removeCharByIndex(string& str, int index) {
//    if (index >= 0 && index < str.length()) {
//        str.erase(index, 1);
//    }
//}
//int main() {
//    string str = "Hello, World!";
//    int index;
//
//    cout << "Enter the index of the character to remove: ";
//    cin >> index;
//
//    removeCharByIndex(str, index);
//    cout << "Updated string: " << str << endl;
//}
//2
//void removeAllOccurrences(string& str, char ch) {
//    str.erase(remove(str.begin(), str.end(), ch), str.end());
//}
//
//int main() {
//    string str = "Hello, World!";
//    char ch;
//
//    cout << "Enter the character to remove: ";
//    cin >> ch;
//
//    removeAllOccurrences(str, ch);
//    cout << "Updated string: " << str << endl;
//}
//3
//void insertCharAt(string& str, char ch, int index) {
//    if (index >= 0 && index <= str.length()) {
//        str.insert(index, 1, ch);
//    }
//}
//
//int main() {
//    string str = "Hello, World!";
//    char ch;
//    int index;
//
//    cout << "Enter the character to insert: ";
//    cin >> ch;
//    cout << "Enter the index where to insert: ";
//    cin >> index;
//
//    insertCharAt(str, ch, index);
//    cout << "Updated string: " << str << endl;
//}
//4
//void replaceDotsWithExclamation(string& str) {
//    for (char& ch : str) {
//        if (ch == '.') {
//            ch = '!';
//        }
//    }
//}
//
//int main() {
//    string str;
//
//    cout << "Enter a string: ";
//    getline(cin, str);
//
//    replaceDotsWithExclamation(str);
//    cout << "Updated string: " << str << endl;
//}
//5
//int countOccurrences(const string& str, char ch) {
//    int count = 0;
//    for (char c : str) {
//        if (c == ch) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    string str;
//    char ch;
//
//    cout << "Enter a string: ";
//    getline(cin, str);
//
//    cout << "Enter the character to count: ";
//    cin >> ch;
//
//    int occurrences = countOccurrences(str, ch);
//    cout << "The character '" << ch << "' appears " << occurrences << " times." << endl;
//}
//6
//void countCharacters(const string& str, int& letters, int& digits, int& others) {
//    letters = digits = others = 0;
//    for (char ch : str) {
//        if (isalpha(ch)) {
//            letters++;
//        }
//        else if (isdigit(ch)) {
//            digits++;
//        }
//        else {
//            others++;
//        }
//    }
//}
//
//int main() {
//    string str;
//    int letters, digits, others;
//
//    cout << "Enter a string: ";
//    getline(cin, str);
//
//    countCharacters(str, letters, digits, others);
//
//    cout << "Letters: " << letters << endl;
//    cout << "Digits: " << digits << endl;
//    cout << "Other symbols: " << others << endl;
//}




