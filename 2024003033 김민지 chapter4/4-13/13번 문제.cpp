#include <iostream>
#include <string>
using namespace std;

class Histogram {
private:
    int freq[26] = { 0 };
    int totalCount = 0;
    string allText = "";

public:
    Histogram() {}

    Histogram(string text) {
        put(text);
    }

    void put(string text) {
        allText += text;
        for (char ch : text) {
            if ('A' <= ch && ch <= 'Z') ch += 'a' - 'A'; 
            if ('a' <= ch && ch <= 'z') {
                freq[ch - 'a']++;
                totalCount++;
            }
        }
    }

    void putc(char ch) {
        allText += ch;
        if ('A' <= ch && ch <= 'Z') ch += 'a' - 'A';
        if ('a' <= ch && ch <= 'z') {
            freq[ch - 'a']++;
            totalCount++;
        }
    }

    void print() {
        cout << allText << endl << endl;

        cout << "ÃÑ ¾ËÆÄºª ¼ö " << totalCount << endl << endl;

        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            cout << ch << " (" << freq[i] << ") : ";
            for (int j = 0; j < freq[i]; j++) cout << '*';
            cout << '\n';
        }
    }
};

int main() {
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
    return 0;
}
