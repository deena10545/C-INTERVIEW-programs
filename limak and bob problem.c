/*Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob? In the first sample, Limak weighs 4 and Bob weighs 7 initially.

After one year their weights are 4·3=12 and 7·2=14 respectively (one weight is tripled while the

other one is doubled). Limak isn't larger than Bob yet.

After the second year weights are 36 and 28, so the first weight is greater than the second one.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the initial weight of Limak and Bob:");
    scanf("%d %d",&a,&b);
    int count=0;
    while(a<=b)
    {
        count++;
        a*=3;
        b*=2;
    }
    printf("%d",count);
}
