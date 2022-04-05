#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = round(get_cents() * 100);

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    float money;
    do
    {
        money = get_float("Change owed: ");
    } while (money <= 0);
    return money;
}

int calculate_quarters(int cents)
{
    // TODO
    if (cents >= 25)
    {
        return round(cents) / 25;
    }
    else
    {
        return 0;
    }
    return cents;
}

int calculate_dimes(int cents)
{
    // TODO
    if (cents >= 10)
    {
        return round(cents) / 10;
    }
    else
    {
        return 0;
    }
    return cents;
}

int calculate_nickels(int cents)
{
    // TODO
    if (cents >= 5)
    {
        return round(cents) / 5;
    }
    else
    {
        return 0;
    }

    return cents;
}

int calculate_pennies(int cents)
{
    // TODO
    if (cents >= 1)
    {
        return round(cents) / 1;
    }
    else
    {
        return 0;
    }
    return cents;
}
