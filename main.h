#ifndef MAIN_H
#define MAIN_H

typedef struct spec
{
  char *sign;
	void (*print)(va_list);	
} spec_t;


void my_char(va_list types);
void my_int(va_list types);
void my_digit(va_list types);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
int _printf(const char *format, ...);

#endif

