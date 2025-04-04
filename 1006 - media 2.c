#include <stdio.h>
 
int main() {
    double a, b, c, m;
    
    scanf("%lf\n %lf\n %lf\n", &a, &b, &c);
    
    m = (2 * a + 3 * b + 5 * c) / 10;
    
    printf("MEDIA = %.1lf\n",m);
    
    return 0;
}
