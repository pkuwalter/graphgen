//
//  main.cpp
//  GraphGen
//
//  Created by Paul on 12/6/12.
//  Copyright (c) 2012 Paul. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <time.h>

int main(int argc, const char * argv[])
{
    srand( time(NULL) );
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    std::stringstream S;
    std::fstream F;
    std::string fName;
    int X,Y;
    S << M << "x" << M << "-" << N << ".txt";
    fName = S.str();
    F.open(fName,std::fstream::out);
    F << N << std::endl << M << std::endl;
    for (int i = 0; i < N; i++)
    {
        X = rand() % M;
        Y = rand() % M;
        F << X << " " << Y << "\n";
    }
    F.close();
    
    // insert code here...
    return 0;
}

