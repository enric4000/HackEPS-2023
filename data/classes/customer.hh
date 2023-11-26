#ifndef CUSTUMER_HH
#define CUSTUMER_HH

#include <iostream>
#include <vector>

using namespace std;

class Customer {
private:
    string id;
    int step_seconds;
    int picking_offset;
public:
    Customer(string id, int step_seconds, int picking_offset);  
    // Métodos
    struct position
    {
        pair<int, int> post;
        
        void move_right() { post.first++; };
        void move_left() { post.first--; };
        void move_down() { post.second--; };
        void move_up() { post.second++; };
    }; 
};

#endif // CUSTUMER_H