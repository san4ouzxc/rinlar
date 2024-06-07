#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H

#include <vector>
#include <array>
#include <string>


class GameHandler {
private:
    std::vector<char>& word;
    std::array<bool, 26>& alph;
    std::string& secretWord;
    int& err;

public:
    GameHandler(std::vector<char>& word,
                std::array<bool, 26>& alph,
                std::string& secretWord,
                int& err)
        : word(word), alph(alph), secretWord(secretWord), err(err) {}

    void processInput(char temp) {
        bool flag = false;
        for (int i = 0; i < secretWord.size(); i++) {
            alph[static_cast<int>(temp) - 97] = true;
            if (temp == secretWord[i]) {
                flag = true;
                alph[static_cast<int>(temp) - 97] = true;
                if (i < secretWord.size()) word[i] = secretWord[i];
            }
        }
        if (!flag) err++;
    }

    void revealSecretWord() {
        for (int i = 0; i < secretWord.size(); i++) {
            if (i < word.size()) word[i] = secretWord[i];
        }
    }

};

#endif // GAME_HANDLER_H