#include <iostream>
#include <stdio.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>



using namespace std;

bool IsPowTwoDivision(int num){

if (num < 0) return false;
if (num == 1) return true;

while((num%2)==0){
    if((num/=2)==1) return true;
}
return false;
}

bool IsPowTwoBitCheck(int num){
    if (num <= 0) return false;
    int i = 0;

    while(num!=0){
    if (num & 1) i++;
    if (i > 1) return false;
    num >>= 1;
    }

    return true;
}

int main()
{
    /*
        Only for positive int
    */
    int N = 0;
    cout << "Enter Any Number:" << endl;
    cin >> N;
    printf("Number %d, %s (division with module 2)\n",N,((IsPowTwoDivision(N)     ? "true" : "false")));
    printf("Number %d, %s (checking for only one bit in number)\n",N,((IsPowTwoBitCheck(N) ? "true" : "false")));

    return 0;
}
