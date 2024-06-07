#include <iostream>
#include <array>
#include <vector>
#include <ctime>
#include <algorithm>
#include <clocale>
#include <ncurses.h>
#include "menu1.h"
#include "menu2.h"
#include "showMan.h"
#include "wordChooser.h"
#include "GameHandler.h"
#include "displayHandler.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    initscr();
    resize_term(30, 100);
    int maxY, maxX;
    getmaxyx(stdscr, maxY, maxX);
    int startY = 2;
    int startX = maxX / 2 - 5;
    ;

    bool playAgain = true;
    while (playAgain)
    {
        time_t startTime = time(nullptr);

        Menu menu;
        int cntNext = menu.runMenu();
        clear();
        string b;
        Menu2 menu2;
        if (cntNext == 0)
        {
            int a = menu2.runMenu2();
            WordChooser chooser;
            b = chooser.getRandomWord(a);
        }
        else
            b = menu2.InputWord();

        int err = 1;

        array<bool, 26> alph = {};
        vector<char> word(b.size(), '*');

        int cnt = 0;
        int flag3 = 1;

        GameHandler gameHandler(word, alph, b, err);
        DisplayHandler displayHandler(startY, startX);

        clear();
        showMan obj;
        obj.printMan(0);

        while (err < 9 && flag3 != 0)
        {
            if (cnt == 0)
            {
                displayHandler.displayAlphabet(alph, 0);
                displayHandler.displayWord(word, 20);
                displayHandler.displayErrors(err - 1);
            }

            cnt++;

            flag3 = 0;
            char temp;
            mvprintw(startY + 22, startX, "введіть символ\n");
            temp = getch();
            clear();

            showMan obj;
            obj.printMan(err);

            gameHandler.processInput(temp);

            displayHandler.displayAlphabet(alph, temp);
            displayHandler.displayWord(word, 20);
            displayHandler.displayErrors(err - 1);

            flag3 = std::count(word.begin(), word.end(), '*');
        }

        if (flag3 == 0)
        {
            mvprintw(startY + 23, startX, "ви відгадали слово");
            displayHandler.displayWord(word, 24);
            time_t endTime = time(nullptr);
            double executionTime = difftime(endTime, startTime);
            mvprintw(28, startX, "часу пройшло: %0.2f секунд", executionTime);
            mvprintw(startY + 25, startX, "зіграти ще раз? (y/any key)");
            char playAgainChoice = getch();
            if (playAgainChoice != 'y')
            {
                playAgain = false;
            }
        }
        else
        {
            mvprintw(startY + 23, startX, "ви програли\n");
            mvprintw(startY + 24, startX - 4, "загадане слово було\n");
            gameHandler.revealSecretWord();
            displayHandler.displayWord(word, 25);
            time_t endTime = time(nullptr);
            double executionTime = difftime(endTime, startTime);
            mvprintw(28, startX, "часу пройшло: %0.2f секунд", executionTime);
            mvprintw(startY + 26, startX, "зіграти ще раз? (y/ any key)");
            char playAgainChoice = getch();
            if (playAgainChoice != 'y')
            {
                playAgain = false;
            }
        }
    }

    endwin();

    return 0;
}
