//
//  main.c
//  training_code
//
//  Created by 李宇宸 on 2017/12/9.
//  Copyright © 2017年 李宇宸. All rights reserved.
//

#include <stdio.h>

// Ex 1-15
//function
float celsius(float fahr);
int main()
{
    float fahr;
    int lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while(fahr <= upper){
        printf("%3.0f %6.1f\n",fahr,celsius(fahr));
        fahr = fahr + step;
    }
}

float celsius(float fahr){
    return (5.0/9.0)*(fahr-32.0);
}
