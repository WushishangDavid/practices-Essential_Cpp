//
// Created by Shishang Wu on 18/6/2017.
//
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Stack {
public:
    bool push(const string& );
    bool pop(string&);
    bool peek(string&);

    bool empty();
    bool full() const;

    unsigned long size() const {return _stack.size();}
    void set_max_size(int size){_max_size = size;}
    bool find(const string&) const;
    long count(const string&) const;

private:
    vector<string> _stack;
    int _max_size = 1000;
};

inline bool Stack::full() const{
    return size() == _max_size;
}

inline bool Stack::empty() {
    return size()<=0;
}
