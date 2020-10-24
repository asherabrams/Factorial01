
//
//  main.cpp
//  Factorial01
//
//  Created by Asher Abrams on 2018/12/2.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int x=1;
long int y;
long int func01(long int);

// DEFINITIONS
long int func01(long int x)
{
    if(x==0 || x==1){ return 0;
    }
    else
    {
    return (x*func01(x-1));
    }
}

// MAIN
int main() {
    func01(x);
    return 0;
}
