#include <string>
#include <algorithm>
bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string permuteString(string s) {
    string vowels;
    string t = s;

    for (char c : s) {
        if (isVowel(c)) {
            vowels += c;
        }
    }
    sort(vowels.begin(), vowels.end());
    int vowelIndex = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i])) {
            t[i] = vowels[vowelIndex++];
        }
    }
    
    return t;
}
