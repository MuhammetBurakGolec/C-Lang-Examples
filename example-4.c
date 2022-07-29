//
//  xcode
//  Created by Muhammet Burak Göleç on 19.12.2021.
//

#include <stdio.h>

double fun(double x){
    return (x + 1) * (x - 1);  // Action to be taken when calling fun function
}

int main() {
    // Determining data types and assigning values ​​of some numbers
    double a,b,u = 0.0,cons,epsilon = 0.000001;
    int i;
   
    // We ask the user for the value of the numbers a and b
    printf("Give A = ");
    scanf("%lf",&a);
    printf("Give B = ");
    scanf("%lf",&b);
    printf("Start\n"); // We notify  that the calculation process has begun

    for (i=1;i<=100;i++){
        
        // We calculate u
        u = a - (fun(a)*(b-a))/(fun(b)-fun(a));
        cons=(fun(u)*fun(a));
        
        if (cons < 0){
            b = u;
        }
        
        else {
            a = u ;
        }
        printf("piece = %3.d\t f(u) = %8.6lf\t u = %8.6lf\n",i,fun(u),u);
        
        // If f(u) is less than epsilon, the loop starts to repeat itself, so we terminate the loop
        if (fun(u)<epsilon){
            break;
        }
    }
    
    printf("Done !\n"); // We notify that the calculation process has end
    
    return 0;
}

