#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
	int get_sqrt(int n, int sqrt);
int is_prime_number(int n);
	int divisibility(int n, int div);
int is_palindrome(char *s);
	int get_strlen(char *s);
	int check_palindrome(char *s, int len, int i);
int wildcmp(char *s1, char *s2);
	int strlen_no_wilds(char *s);
	void iterate_wild(char **wildstr);
	char *postfix_match(char *s, char *p);

#endif
