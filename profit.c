#include <stdio.h>

//define profit(revenue,cost)
#define profit(r,c) (r-c)

//define revenue(price,n)
#define revenue(a,n) (a*n)

//define cost(n)
#define cost(n) (500+n*3)

//define attendees(price)
#define attendees(a) ((15-a)*20/5+120)

int main(){
 int price=25;
 int n=attendees(price);
 printf("Ticket Price = %d => profit = %.2d\n",price,profit(revenue(price,n),cost(n)));
 return 0;
}
