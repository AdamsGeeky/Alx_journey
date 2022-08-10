/* Title: line ragreration equation program for finding the corelation of bivariate data 
 * Arthur: ADAMU M. MUHAMMAD aka (AdamsGeeky)
 * Date: jul 30, 2022
 *
 */
#include <stdio.h>
#include <math.h>
typedef int number , counter;
typedef float marks;
int main(){
       /* declaration of variables */
       number n;
       counter i,j;
       marks slopeX,slopeY, interceptX,interceptY,corelation_coefficient, X2, XY_sum,Xsquare_sum, Ysquare_sum, X_sum, Y_sum, X_mean, Y_mean;

       /* the number of data points */
       printf("Enter the number of student: ");
       scanf("%i",&n);
       marks X_value[n];
       marks Y_value[n];

       /* array declaration with length takin from the user */
        marks Xsquare[n] ,Ysquare[n] ,XY[n];

/* taken marks score for Economics*/
printf("Enter the marks score students in Economics: \n");
for(i=1;i<=n;i++){
       scanf("%f",&X_value[i]);
}
/* taken marks score for Mathematics*/
printf("Enter the marks score students in Mathematics: \n");
for(i=1;i<=n;i++){
       scanf("%f",&Y_value[i]);
}
/* multiplication Xsquare Ysquare XY*/
for(i=1;i<=n;i++){
       Xsquare[i] = X_value[i]*X_value[i];
       Ysquare[i] = Y_value[i]*Y_value[i];
       XY[i] = X_value[i]*Y_value[i];
}

/* sum */
Xsquare_sum = 0;
Ysquare_sum = 0;
for(i=1;i<=n;i++){
       X_sum += X_value[i];
       Y_sum += Y_value[i];
       Xsquare_sum += Xsquare[i];
       Ysquare_sum += Ysquare[i];
       XY_sum += XY[i];
}
/* formula computation */
X_mean = X_sum/n;
Y_mean = Y_sum/n;
slopeX = (n*XY_sum - (X_sum*Y_sum))/(n*Xsquare_sum - (X_sum*X_sum));
slopeY = (n*XY_sum - (X_sum*Y_sum))/(n*Ysquare_sum - (Y_sum*Y_sum));
interceptX = Y_mean - slopeX*X_mean;
interceptY = X_mean - slopeY*Y_mean;

/* calculation of the corelation btn X and Y */
float multiple = slopeX * slopeY;
 corelation_coefficient = sqrt(multiple);
/* output each array element's value */
     printf("\t |  X   |   Y  |  x^2 |  y^2 |  xy  |\n");
     printf("\t ************************************\n");
   for (j = 1; j <= n; j++ ) {
     printf("\t | %.2f | %.2f | %.2f | %.2f | %.2f |\n",X_value[j],Y_value[j],Xsquare[j],Ysquare[j],XY[j]);
   }
     printf("\t***********************************\n");
     printf("\t | %.2f | %.2f | %.2f | %.2f |  %.2f \n",X_sum,Y_sum,Xsquare_sum,Ysquare_sum,XY_sum);
printf("\n \n Hance the regression line equation is: on y depend on x Y = %.4fX + %.4f\n", slopeX, interceptX);
printf("\n \n also  the regression line equation is: on x depend on y Y = %.4fX + %.4f\n", slopeX, interceptY);
printf("\n\n\n");
printf("\t \n the corelation between X and Y is : = %.4f\n", corelation_coefficient);

	return 0;
}
