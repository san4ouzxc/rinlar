#ifndef SHOWMAN_H
#define SHOWMAN_H

#include <ncurses.h>

class showMan {
private:
    int err;
public:
    void printMan(int err) {
        int maxY, maxX;
        getmaxyx(stdscr, maxY, maxX);
        int y = 0; 
        int x = maxX / 2 - 5; 
        switch (err) {
        case 0:
            y=+6;
            mvprintw(y, x, "        ____ \n"); y++;
            mvprintw(y, x, "       /    /   \n"); y++;
            mvprintw(y, x, "      / _ _  /  \n"); y++;
            mvprintw(y, x, "      /  __  /  \n"); y++;
            mvprintw(y, x, "      /____ /   \n"); y++;
            mvprintw(y, x, "      __|__   \n"); y++;
            mvprintw(y, x, "     /  |  /  \n"); y++;
            mvprintw(y, x, "    /   |   / \n"); y++;
            mvprintw(y, x, "       / /    \n"); y++;
            mvprintw(y, x, "     _/   /_  \n"); y++;
            break;
        case 1:
            y=+6;
            mvprintw(y, x, "        ____ \n"); y++;
            mvprintw(y, x, "       /    /   \n"); y++;
            mvprintw(y, x, "      /  > < /  \n"); y++;
            mvprintw(y, x, "      /  __  /  \n"); y++;
            mvprintw(y, x, "      /____ /   \n"); y++;
            mvprintw(y, x, "      __|__   \n"); y++;
            mvprintw(y, x, "     /  |  /  \n"); y++;
            mvprintw(y, x, "    /   |   / \n"); y++;
            mvprintw(y, x, "       / /    \n"); y++;
            mvprintw(y, x, "     _/   /_  \n"); y++;
            break;
        case 2:
            y=+2;
            mvprintw(y, x, "                   \n"); y++;
            mvprintw(y, x, "      _____        \n"); y++;
            mvprintw(y, x, "     /     /       \n"); y++;
            mvprintw(y, x, "    /  _ _  /       \n"); y++;
            mvprintw(y, x, "    /  __  /       \n"); y++;
            mvprintw(y, x, "     /_____/        \n"); y++;
            mvprintw(y, x, "     __|__        \n"); y++;
            mvprintw(y, x, "    /  |  /        \n"); y++;
            mvprintw(y, x, "   /   |   /       \n"); y++;
            mvprintw(y, x, "      / /          \n"); y++;
            mvprintw(y, x, " ____/___/____     \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;
            break;
        case 3:
            y=+2;
            mvprintw(y, x, "                   \n"); y++;
            mvprintw(y, x, "      ______        \n"); y++;
            mvprintw(y, x, "     / _ _  /       \n"); y++;
            mvprintw(y, x, "    /   __  /       \n"); y++;
            mvprintw(y, x, "    /  |__| /       \n"); y++;
            mvprintw(y, x, "     /_____/        \n"); y++;
            mvprintw(y, x, "     __|__        \n"); y++;
            mvprintw(y, x, "    /  |  /        \n"); y++;
            mvprintw(y, x, "   /   |   /       \n"); y++;
            mvprintw(y, x, "      / /          \n"); y++;
            mvprintw(y, x, " ____/___/____     \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;
            mvprintw(y, x, " |            |    \n"); y++;

            break;
        case 4:
            y++;
            mvprintw(y, x, "                        | | \n"); y++;
            mvprintw(y, x, "                        | | \n"); y++;
            mvprintw(y, x, "      ____              | |\n"); y++;
            mvprintw(y, x, "     /    /             | |\n"); y++;
            mvprintw(y, x, "    /  _ _ /            | |\n"); y++;
            mvprintw(y, x, "    /   __ /            | |\n"); y++;
            mvprintw(y, x, "     /____/             | |\n"); y++;
            mvprintw(y, x, "     __|__              | |\n"); y++;
            mvprintw(y, x, "    /  |  /             | |\n"); y++;
            mvprintw(y, x, "   /   |   /            | |\n"); y++;
            mvprintw(y, x, "      / /               | |\n"); y++;
            mvprintw(y, x, " ____/___/____          | |\n"); y++;
            mvprintw(y, x, " |            |         | |\n"); y++;
            mvprintw(y, x, " |            |         | |\n"); y++;
            mvprintw(y, x, " |            |         | |\n"); y++;
            break;
        case 5:
            mvprintw(y, x, "  _______________________ \n"); y++;
            mvprintw(y, x, " |_____________________  |\n"); y++;
            mvprintw(y, x, "                       | |\n"); y++;
            mvprintw(y, x, "                       | |\n"); y++;
            mvprintw(y, x, "      ____             | |\n"); y++;
            mvprintw(y, x, "     /    /            | |\n"); y++;
            mvprintw(y, x, "    /  _ _ /           | |\n"); y++;
            mvprintw(y, x, "    /   __ /           | |\n"); y++;
            mvprintw(y, x, "     /____/            | |\n"); y++;
            mvprintw(y, x, "      __|__            | |\n"); y++;
            mvprintw(y, x, "     /  |  /           | |\n"); y++;
            mvprintw(y, x, "    /   |   /          | |\n"); y++;
            mvprintw(y, x, "       / /             | |\n"); y++;
            mvprintw(y, x, "  ____/___/____        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            break;
        case 6:
            mvprintw(y, x, "  _______________________ \n"); y++;
            mvprintw(y, x, " |_____________________  |\n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "      _|__             | | \n"); y++;
            mvprintw(y, x, "     /    /            | |\n"); y++;
            mvprintw(y, x, "    /  _ _ /           | |\n"); y++;
            mvprintw(y, x, "    /   __ /           | |\n"); y++;
            mvprintw(y, x, "     /____/            | |\n"); y++;
            mvprintw(y, x, "     _<>__             | |\n"); y++;
            mvprintw(y, x, "    /  |  /            | |\n"); y++;
            mvprintw(y, x, "   /   |   /           | |\n"); y++;
            mvprintw(y, x, "      / /              | |\n"); y++;
            mvprintw(y, x, " ____/___/____         | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            break;
        case 7:
            mvprintw(y, x, "  _______________________ \n"); y++;
            mvprintw(y, x, " |_____________________  |\n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "      _|___            | | \n"); y++;
            mvprintw(y, x, "     /    /            | |\n"); y++;
            mvprintw(y, x, "    /  _ _ /           | |\n"); y++;
            mvprintw(y, x, "    /   __ /           | |\n"); y++;
            mvprintw(y, x, "     /____/            | |\n"); y++;
            mvprintw(y, x, "     _<>__             | |\n"); y++;
            mvprintw(y, x, "    /  |  /            | |\n"); y++;
            mvprintw(y, x, "   /   |   /           | |\n"); y++;
            mvprintw(y, x, "      / /              | |\n"); y++;
            mvprintw(y, x, " ____/___/____         | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            mvprintw(y, x, " |            |        | |\n"); y++;
            break;
        case 8:
            mvprintw(y, x, "  _______________________ \n"); y++;
            mvprintw(y, x, " |_____________________  |\n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "       |               | | \n"); y++;
            mvprintw(y, x, "      _|___            | | \n"); y++;
            mvprintw(y, x, "     /    /            | |\n"); y++;
            mvprintw(y, x, "    /  _ _ /           | |\n"); y++;
            mvprintw(y, x, "    /   __ /           | |\n"); y++;
            mvprintw(y, x, "     /____/            | |\n"); y++;
            mvprintw(y, x, "     _<>__             | |\n"); y++;
            mvprintw(y, x, "    /  |  /            | |\n"); y++;
            mvprintw(y, x, "    /  |   /           | |\n"); y++;
            mvprintw(y, x, "       / /             | |\n"); y++;
            mvprintw(y, x, "     /   /             | |\n"); y++;
            mvprintw(y, x, "                       | |\n"); y++;
            break;
        default:
            break;
        }
    }
};

#endif // SHOWMAN_H