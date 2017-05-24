#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    if(argc == 0){
        cout<<"没有参数"<<endl;
        return 0;
    }

    for (int i = 0; i < argc; ++i) {
        cout<<argv[i]<<" ";
    }

    cout<<endl;

    return 0;
}


