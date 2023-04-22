/**
 * my_char - prints a character
 * @forms: variable argument list
 */
void my_char(va_list forms)
{
    char character = va_arg(forms, int);
    write(STDOUT_FILENO, &character, 1);
}
