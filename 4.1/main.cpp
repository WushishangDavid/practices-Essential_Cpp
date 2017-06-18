// practices 4.1 & 4.2: Implement a stack
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack s;
    string elem;

    string str = "fucker";
    if(s.push(str)){
        str = "fucker2";
        s.push(str);
    };
    cout<<s.size()<<endl;

    if(s.peek(elem)){cout<<elem<<endl;}

    s.pop(elem);
    cout<<s.empty()<<endl;

    s.pop(elem);
    cout<<s.empty()<<endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}