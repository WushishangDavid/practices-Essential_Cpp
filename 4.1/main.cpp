// practices 4.1 & 4.2: Implement a stack
// All from Essential C++
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
//    Stack s;
//    string elem;
//
//    string str = "fuer";
//    if(s.push(str)){
//        str = "fucker2";
//        s.push(str);
//    };
//    cout<<s.size()<<endl;
//
//    if(s.peek(elem)){cout<<elem<<endl;}
//
//    s.pop(elem);
//    cout<<s.empty()<<endl;
//
//    s.pop(elem);
//    cout<<s.empty()<<endl;

    Stack st;
    string str;

    cout << "Please enter the max size: ";
    int max_size;
    cin>>max_size;
    st.set_max_size(max_size);

    cout << "Please enter the string: ";
    while(!st.full() && cin>>str){
        st.push(str);
    }

    if(str.empty()){
        cout<<'\n'<<"Oops: no string were read -- bailing out!\n";
        return 0;
    }

    st.peek(str);

    if (st.size()==1 && str.empty()){
        cout<<'\n'<<"Oops: no string were read -- bailing out!\n";
        return 0;
    }

    cout<<'\n'<<"Read in " << st.size() << " strings!\n";

    // Eliminate EOF
    cin.clear();

    cout << "What word to search for? ";
    cin >> str;

    bool found = st.find(str);
    long count = found ? st.count(str) : 0;

    cout << str << (found ? " is " : " is not ") << "found in the stack.\n";
    if(found)
        cout << "It occurs " << count << " times." << endl;

    cout<< "The strings in reverse order: \n";

    while(st.size()){
        st.pop(str);
        cout<< str << " ";
    }

    cout << '\n' << "There are now " << st.size() << " elements in the stack!\n";

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
