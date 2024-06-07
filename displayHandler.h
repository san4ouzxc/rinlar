#ifndef DISPLAY_HANDLER_H
#define DISPLAY_HANDLER_H

#include <vector>
#include <array>
#include <ncurses.h>
#include <clocale>

class DisplayHandler {
private:
    int startY;
    int startX;
public:
    DisplayHandler(int startY, int startX)
        : startY(startY), startX(startX) {}

    void displayAlphabet(const std::array<bool, 26>& alph, char temp) const {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    for (int i = 0; i < alph.size(); i++) {
            if (alph[i] || static_cast<char>(i + 97) == temp) mvprintw(startY + 18, startX - 6 + i, " ");
            else mvprintw(startY + 18, startX - 6 + i, "%c", static_cast<char>(i + 97));
        }
    }

    void displayWord(const std::vector<char>& word, int line) const {
        for (int i = 0; i < word.size(); i++) {
            mvprintw(startY + line, startX + i, "%lc", word[i] != '*' ? word[i] : '*');
        }
    }

    void displayErrors(int err) const {
        mvprintw(startY + 21, startX, "помилки: %d/8\n", err);
    }


};

#endif // DISPLAY_HANDLER_H
