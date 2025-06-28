#include <iostream>
#include <string>
using namespace std;

class Print{
    public:
        void show(string s){
            cout << s << endl;
        }
        void show(int i){
            cout << i << endl;
        }
};
