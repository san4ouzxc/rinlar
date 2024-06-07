#ifndef MENU1_H
#define MENU1_H

#include <ncurses.h>

class Menu {
public:
    Menu() {
        initscr();
        start_color();
        init_pair(1, COLOR_GREEN, COLOR_BLACK);
        init_pair(2, COLOR_CYAN, COLOR_BLACK);
        noecho();
        cbreak();
        keypad(stdscr, TRUE);
        curs_set(0);
    }

    ~Menu() {
        endwin();
    }
    void printOptions(int cnt) {
        clear();
        int maxY, maxX;
        getmaxyx(stdscr, maxY, maxX); 
        int startY = maxY / 2 - 1; 
        int startX = maxX / 2 - 5; 
        attron(COLOR_PAIR(2));
        mvprintw(startY - 2, startX + 3, "гра ШИБЕНИЦЯ");
        attroff(COLOR_PAIR(2));

        switch (cnt) {
            case 0:
                attron(COLOR_PAIR(1));
                mvprintw(startY, startX, "грати проти комп'ютера");
                attroff(COLOR_PAIR(1));
                printw(" <");
                mvprintw(startY + 1, startX, "грати проти людини");
                break;
            case 1:
                mvprintw(startY, startX, "грати проти комп'ютера");
                attron(COLOR_PAIR(1));
                mvprintw(startY + 1, startX, "грати проти людини");
                attroff(COLOR_PAIR(1));
                printw(" <");
                break;
            default:
                break;
        }

        refresh();
    }

    int runMenu() {
        int cnt = 0;
        printOptions(cnt);

        while (true) {
            int ch = getch();

            switch (ch) {
                case KEY_UP:
                    cnt--;
                    if (cnt < 0)
                        cnt = 1;
                    printOptions(cnt);
                    break;
                case KEY_DOWN:
                    cnt++;
                    if (cnt > 1)
                        cnt = 0;
                    printOptions(cnt);
                    break;
                case '\n':
                    return cnt;
                default:
                    break;
            }
        }
    }
};

#endif // MENU1_H
