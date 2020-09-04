
#include "Jump_Table.h"

double calculate(int oper,double op1,double op2){
    double result;
    switch(oper)
    {
        case ADD:   result=add(op1,op2);break;
        case SUB:    result=sub(op1,op2);break;
        case MUL:    result=mul(op1,op2);break;
        case DIV:     result=my_div(op1,op2);break;
    }
    return result;
}

//函数定义
double add(double a, double b)
{
    return a+b;
}
double sub(double a, double b)
{
    return a-b;
}
double mul(double a, double b)
{
    return a*b;
}
double my_div(double a, double b)
{
    if( b == 0 )
    {
        printf( "The divisor cannot be 0!!! ");
        exit(EXIT_FAILURE);
    }
    return a/b;
}

//使用转移表的方式
double (*oper_func[])(double op1,double op2)={
        add,sub,mul,my_div
};