//
// Created by 吳士商 on 18/6/2017.
//
#include "Stack.h"

bool Stack::push(const string &elem){
    if(full())
        return false;

    _stack.push_back(elem);

    return true;
}

bool Stack::peek(string& elem){
    if(empty())
        return false;

    elem = _stack.back();

    return true;
}

bool Stack::pop(string& elem){
    if(empty())
        return false;

    elem = _stack.back();

    _stack.pop_back();

    return true;
}

bool Stack::find(const string& elem) const{
    return ::find(_stack.begin(), _stack.end(), elem) != _stack.end();
}

long Stack::count(const string& elem) const {
    return ::count(_stack.begin(), _stack.end(), elem);
}

