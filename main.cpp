#include <iostream>
#include "CmdLineParse.h"

#include <map>

using namespace std;


int main(int argc, char** argv) {
//    return ratel_commandline(argc - 1,argv + 1 );

    if(argc == 1){
        cout<<"没有参数"<<endl;
        return 0;
    }

    argc--;
    argv++;

    std::map<string,string> cmdlineMap;


    for (int i = 0; i < argc; ++i) {
        if(strcmp("-?",argv[i]) == 0 || strcmp("-help",argv[i]) == 0){
            usage();
            return 0;
        }

        if(strcmp("-cp",argv[i]) == 0 || strcmp("-classpath",argv[i]) == 0){
            int j = i;
            string value = "";
            i++;
            if(i >= argc){
                value = "";
            } else{
                value = argv[i];
            }
//            cmdlineMap.insert(argv[j],value);
        }


    }



}

int usage(){
    cout<<"ratel [option] \n"<<endl;
}




