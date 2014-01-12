/********************************************************** 
 *  int coinValue [4] = {25, 10, 5, 1};
 *  int coinCount [4] = {0, 0, 0, 0};

 *  for(int i = 0; i < 4; i++)
 *  {
 *  countCount[i] = change / coinValue[i];
 *  change -= countCount[i] * coinValue{i};
 *  }
 ***********************************************************/
 #include <stdio.h>
 #include <cs50.h>
 #include <math.h>
 
 int main(void)
 {
    printf("Give me an amount: ");
    int amount = (int)round((GetFloat() * 100));
    int coins[4] = {25, 10, 5, 1};
    int total = 0;
    for (int i = 0; i < 4; i++) {
        int num = (int)(amount  / coins[i]);
        amount -= num * coins[i];
        total += num;
        switch(i) {
            case 0:
                printf("quarters: %d\n", num);
                break;
            case 1:
                printf("dimes: %d\n", num);
                break;
            case 2:
                printf("nickels: %d\n", num);
                break;
            case 3:
                printf("pennies: %d\n", num);
                break;
        }
    }
    printf("total: %d\n", total);
 }
 
 
 
 
