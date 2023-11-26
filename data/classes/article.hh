#ifndef ARTICLE_HH
#define ARTICLE_HH

#include <iostream>
#include <vector>

using namespace std;

class Article {
private:
    string name;
    int first_pick;
    int second_pick;
    int third_pick;
    int fourth_pick;
    int fifth_more_pick;

public:
    Article(string name, int first_pick, int second_pick, int third_pick, int fourth_pick, int fifth_more_pick);

    // Métodos
};

#endif // ARTICLE_HH