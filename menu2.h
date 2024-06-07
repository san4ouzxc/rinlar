#ifndef MENU2_H
#define MENU2_H

#include <ncurses.h>

class Menu2 {
public:
    Menu2() {
        initscr();
        start_color();
        init_pair(1, COLOR_GREEN, COLOR_BLACK);
        noecho();
        cbreak();
        keypad(stdscr, TRUE);
        curs_set(0);
    }

    ~Menu2() {
        endwin();
    }

    void printOptions2(int cnt) {
        clear();
        int maxY, maxX;
        getmaxyx(stdscr, maxY, maxX); 
        int startY = maxY / 2 - 1; 
        int startX = maxX / 2 - 5; 
        switch (cnt) {
            case 0:
                attron(COLOR_PAIR(1));
                mvprintw(startY, startX, "флора");
                attroff(COLOR_PAIR(1));
                printw(" <");
                mvprintw(startY + 1, startX, "фауна");
                mvprintw(startY + 2, startX, "спорт");
                break;
            case 1:
                mvprintw(startY, startX, "флора");
                attron(COLOR_PAIR(1));
                mvprintw(startY + 1, startX, "фауна");
                attroff(COLOR_PAIR(1));
                printw(" <");
                mvprintw(startY + 2, startX, "спорт");
                break;
            case 2:
                mvprintw(startY, startX, "флора");
                mvprintw(startY + 1, startX, "фауна");
                attron(COLOR_PAIR(1));
                mvprintw(startY + 2, startX, "спорт");
                attroff(COLOR_PAIR(1));
                printw(" <");
                break;
            default:
                break;
        }

        refresh();
    }

    int runMenu2() {
        
        int cnt2 = 0;
        printOptions2(cnt2);

        while (true) {
            int ch = getch();

            switch (ch) {
                case KEY_UP:
                    cnt2--;
                    if (cnt2 < 0)
                        cnt2 = 2;
                    printOptions2(cnt2);
                    break;
                case KEY_DOWN:
                    cnt2++;
                    if (cnt2 > 2)
                        cnt2 = 0;
                    printOptions2(cnt2);
                    break;
                case '\n':
                    return cnt2;
                default:
                    break;
            }
        }
         
    }

    std::string InputWord() {
        int maxY, maxX;
        getmaxyx(stdscr, maxY, maxX); 
        int startY = maxY / 2 - 1; 
        int startX = maxX / 2 - 5; 
        std::string word;
        mvprintw(startY, startX, "введіть слово: ");
        refresh();
        echo(); 
        char input[50]; 
        getstr(input); 
        noecho(); 
        word = input; 
        return word;
    }
};

#endif // MENU2_H
