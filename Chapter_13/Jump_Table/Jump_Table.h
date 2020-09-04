
#pragma once
#include <stdio.h>
#include <stdlib.h> //引入exit
enum {
    ADD,
    SUB,
    MUL,
    DIV
};

double calculate(int oper,double op1,double op2);
double add(double,double);
double sub(double,double);
double mul(double,double);
double my_div(double,double);
double (*oper_func[])(double op1,double op2);
