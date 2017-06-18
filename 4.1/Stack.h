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

private:
    vector<string> _stack;
};

inline bool Stack::full(){
    return size() == _stack.max_size();
}

inline bool Stack::empty() {
    return size()<=0;
}
