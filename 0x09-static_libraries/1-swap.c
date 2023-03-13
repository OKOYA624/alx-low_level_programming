/*
*File: 1-swap.c
*Auth: Lawrence Ochieng
*/
#include "main.h"
/**
* swap_int - swaps
* @a: first
* @b: second
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

