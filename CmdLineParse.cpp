//
// Created by 张红军 on 2017/5/25.
//

#include <iostream>
#include "CmdLineParse.h"

using namespace std;

int parseCommandLine(int argc, char **argv) {
    if(argc == 1){
        usage();
    }

    argc--;
    argv++;

    for (int i = 0; i < argc; ++i) {
        if(strcmp(argv[i],"-?") == 0 || strcmp(argv[i],"-help")){
            return usage();
        }

        if(strcmp(argv[i],"-version") == 0){
            return fprintf(stdout,"version: 0.0.1\n");
        }

        if(strcmp(argv[i],"-cp") == 0 || strcmp(argv[i],"-classpath") == 0){
            if(++i == argc){
                fprintf(stderr,"%s : lack of param\n",argv[--i]);
                return -1;
            }

            //解析 -cp/-classpath后面的参数
        }



    }



    return 0;
}

int usage() {
    fprintf(stdout, "Usage: ratel [-option] class [args...]\n");
    return 1;
}
