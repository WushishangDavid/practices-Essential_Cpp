//
// Created by Shishang Wu on 18/6/2017.
//
#include <string>
#include <vector>
using namespace std;

class Stack {
public:
    bool push(const string& );
    bool pop(string&);
    bool peek(string&);

    bool empty();
    bool full();

    int size(){return _stack.size();}
    void set_max_size(int size){_max_size = size;}

private:
    vector<string> _stack;
    int _max_size = 1000;
};

inline bool Stack::full(){
    return size() == _max_size;
}

inline bool Stack::empty() {
    return size()<=0;
}
