#ifndef  __STACK_H__
#define  __STACK_H__

#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

#define STACK_SIZE 100
class FloatStack {
private:
 float stack[STACK_SIZE];
 int top;
public:
 FloatStack() { top = -1; }
 void push(float val) { stack[++top] = val; }
 float pop() { return stack[top--]; }
 int isEmpty() { return top == -1; }
 int isFull() { return top == STACK_SIZE-1; }
};


class CharStack {
private:
 char stack[STACK_SIZE];
 int top;
public:
 CharStack() { top = -1; }
 void push(char val) { stack[++top] = val; } 
 char pop() { return stack[top--]; }   
 int isEmpty() { return top == -1; }  
 int isFull() { return top == STACK_SIZE-1; }
 char getTop() { return stack[top]; }
};


#endif
