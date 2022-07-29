#include <stdio.h>
#include <math.h>

int main()
{
//We define the type of values    
double l1,l2,x,q1,q2,i,l1cube,l1sq,l2cube,l2sq,Iy1,Iy2,Mb,J,W1,W2,Myx,l1_l2;

/*
l1=4;
l2=6;
Iy1=0.0000425;
Iy2=0.0000425;
q1=20;
q2=40;
x=10;
*/

// We want values from user
printf("Entering the values :\n");
printf("Length 1 [m] = ");
scanf("%lf",&l1);
printf("Length 2 [m] = ");
scanf("%lf",&l2);
printf("Moment of Inertia Iy1 [m^4] = ");
scanf("%lf",&Iy1);
printf("Moment of Inertia Iy2 [m^4] = ");
scanf("%lf",&Iy2);
printf("Load q1 [kN/m] = ");
scanf("%lf",&q1);
printf("Load q2 [kN/m] = ");
scanf("%lf",&q2);
printf("Calculation: Classification [-] = %.0lf \n",l1+l2);

//  Preliminary Calculation

l1_l2=l1+l2;
l1cube=pow(l1,3);
l1sq=pow(l1,2);
l2cube=(l2,3);
l2sq=pow(l2,2);
J = (Iy1 / Iy2);
Mb = (q1*(pow(l1,3))+q2*J*(pow(l2,3))*J)/(8*(l1+l2*J));

printf("\nOutput of The Values :\n");
printf("Support Torque M(x = %4.2lf ) = %.2lf kNm\n\n",l1,Mb);

for(x = 0;x <= l1_l2; x++)
{
    if (x < l1)
    {
	    W1 = ((x / l1) - ((x / l1) * (x / l1)));
	    Myx = ((Mb * (x / l1)) - ((q1 * l1sq * W1) / 2 ));
	    printf("x = %.2lf \t M(x) = %7.2lf kNm\n",x,Myx);
    }
    
    else if ( x > l1)
    {
        W2 = (((x - l1) / l2) - (((x - l1) / l2) * ((x - l1) / l2 )));
        Myx = (Mb * (1 - ((x - l1) / l2)) - ((q2 * l2sq * W2) / 2 ));
	    printf("x = %.2lf \t M(x) = %7.2lf kNm\n",x,Myx);
    }
    
    else 
    {
        /*
        Since the answer is equal to Mb when the **support** is right in the middle (l1 = l2), we do not calculate from the extra 
        */
        printf("x = %.2lf \t M(x) = %7.2lf kNm\n",x,Mb);
    }
   
    }//End of For
    
}//End of Main function
