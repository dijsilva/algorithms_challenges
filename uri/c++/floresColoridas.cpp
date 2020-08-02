#include <stdio.h>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
       double sunflower, roses, violets, p;

       p = (a + b + c) / 2.0;
       violets = sqrt( p * (p - a) * (p - b) * (p - c));

       // r = (abc) / sqrt((a+b+c)(b+c-a)(c+a-b)(a+b-c))
       sunflower = ( a * b * c ) / sqrt(( a + b + c ) * ( b + c - a ) * ( c + a - b ) * ( a + b - c ));
       sunflower = pow(sunflower, 2) * M_PI;
       sunflower -= violets;

       // r = 2*(area do triangulo) / (a+b+c)
       roses = M_PI * pow((2 * violets) / (a+b+c), 2);

       violets -= roses;
       printf("%.4lf %.4lf %.4lf\n", sunflower, violets, roses);


    }

    return 0;
}
