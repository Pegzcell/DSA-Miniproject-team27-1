#ifndef QUESTION_H_
#define QUESTION_H_

typedef struct stack
{
    int top;
    char items[100001];
} stack;

typedef struct mcq
{
    char text[1000];
    double difficulty;
    char options[4][20];
    char correct[20];
} mcq;

typedef struct fill_up
{
    char text[1000];
    double difficulty;
    char correct[20];
} fill_up;

typedef struct true_false
{
	char text[1000];
	double difficulty;
	char correct;
} true_false;

typedef struct short_answer
{
	char text[1000];
	double difficulty;
	char correct[1000];
}short_answer;

#endif

