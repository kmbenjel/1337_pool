#include <unistd.h>
#include <stdio.h>
int power_to(int a, int b)
{
    int result = 1;
    while(b)
    {
        result = result * a;
        b--;
    }
    return result;
}
int string_to_int(char *str, int is_negative)
{
    int i;
    int k;
    int number;
    i = 0;
    while(!(str[i] >= '0' && str[i] <= '9'))
    {
        i++;
    }
    k = 0;
    while(str[k + i] >= '0' && str[k + i] <= '9')
    {
        k++;
    }
    int digit;
    number = 0;
    while(k)
    {
        digit = str[i] - 48;
        number = number + digit * power_to(10, k);
        k--;
        i++;
    }
    return number/10 * is_negative;
}
int is_negative(char *str)
{
    int i = 0;
    int is_negative = 1;
    char *num;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            is_negative = is_negative * -1;
        }
        i++;
    }
    return is_negative;
}
int a_toi(char *str)
{
    int i = 0;
    char only_digits[4232];
    int k = 0;
    int contains_digit = 0;
    while(str[i])
    {
        if(str[i] == '-' || str[i] == '+' || ( str[i] >= '0' && str[i] <= '9'))
        {
            only_digits[k] = str[i];
            if(only_digits[k] >= '0' && only_digits[k] <= '9')
            {
                contains_digit = 1;
            }
            k++;
        }
        else
        {
            break;
        }
        i++;
    }
    i = 0;
    if (contains_digit == 0)
    {
        return 0;
    }
    else
    {
        return (string_to_int(only_digits, is_negative(only_digits)));
    }
}
int main()
{
    char hh[] = "+---+5433";
    printf("%d", a_toi(hh));
}
