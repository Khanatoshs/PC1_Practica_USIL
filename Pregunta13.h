#ifndef __PREGUNTA13_H__
#define __PREGUNTA13_H__
#include<iostream>
#include"Stack.h"
using namespace std;

void pregunta13(int numDec){
    Stack<int> stack_bin;
    while(numDec>0){
        int div = numDec/2;
        int rest = numDec%2;
        stack_bin.push(rest);
        numDec = div;
    }

    while(!stack_bin.is_empty()){
        cout<<stack_bin.pop()<<", ";
    }

}

#endif