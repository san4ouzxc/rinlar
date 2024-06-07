#ifndef WORDCHOOSER_H
#define WORDCHOOSER_H

#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class WordChooser {
private:
    vector<vector<string>> wordLists;

public:
    WordChooser() {
        srand(time(nullptr));

        vector<string> flora = {
            "tree", "flower", "grass", "bush", "vine", 
            "leaf", "root", "bloom", "petal", "orchid", 
            "rose", "daisy", "tulip", "oak", "pine"
        };

        vector<string> fauna = {
            "dog", "cat", "wolf", "lion", "tiger", 
            "bear", "eagle", "shark", "whale", "deer", 
            "rabbit", "fox", "elephant", "zebra", "giraffe"
        };

        vector<string> sport = {
            "football", "penalty", "team", "coach", "goal", 
            "basketball", "tennis", "swimming", "running", "cycling", 
            "volleyball", "baseball", "hockey", "skiing", "boxing"
        };

        wordLists.push_back(flora);
        wordLists.push_back(fauna);
        wordLists.push_back(sport);
    }

    string getRandomWord(int choice) {
        vector<string> selectedWordList = wordLists[choice];

        int index = rand() % selectedWordList.size();

        return selectedWordList[index];
    }
};

#endif // WORDCHOOSER_H
