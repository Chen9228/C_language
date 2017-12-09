//
//  main.c
//  sample_code
//
//  Created by 李宇宸 on 2017/12/9.
//  Copyright © 2017年 李宇宸. All rights reserved.
//

#include <stdio.h>
// while 循环
//int main() {
//    int fahr, celsius;
//    int lower, upper, step;
//    lower = 0;
//    upper = 300;
//    step = 20;
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = 5 * (fahr - 32) / 9;
//        printf("%3d\t%6d\t\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//    system("pause");
//    return 0;
//}

// for 循环
//int main() {
//    int fahr;
//    for (fahr = 300; fahr >=  0; fahr = fahr - 20) {
//        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
//    }
//    system("pause");
//    return 0;
//}

// #define 字符常量
//int main() {
//    int fahr;
//# define UPPER 300
//# define LOWER 0
//# define STEP 20
//    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
//        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
//    }
//    system("pause");
//    return 0;
//}

// 输入输出
//int main() {
//    long nc;
//    nc = 0;
//    while (getchar()!= EOF) //getchar() /eof: end of file
//    {
//        ++nc; //nc = nc + 1;
//    }
//    printf("%ld\n", nc);
//    system("pause");
//    return 0;
//}

// ÷∆±Ì∑˚ ø’∏Ò ªª––º∆ ˝
//int main() {
//    long nc;
//    int c;
//    nc = 0;
//    while ((c = getchar())!= eof)//getchar() read input
//    {
//        if (c == '\n'||'\t'||' ') {
//            ++nc; //nc = nc + 1;
//        }
//    }
//    printf("%ld\n", nc);
//    system("pause");
//    return 0;
//}

//word count
//int main() {
//#define IN 1 // inside word
//#define OUT 0 // outside word
//    int c, nl, nw, nc, state;
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF) {
//        ++nc;
//        if (c == '\n')
//            ++nl;
//        if (c == ' ' || c == '\t' || c == '\n')
//            state = OUT;
//        else if (state == OUT) {
//            state = IN;
//            ++nw;
//        }
//    }
//    printf("%d %d %d\n", nl, nw, nc);
//    system("pause");
//    return 0;
//}

//array
//int main() {
//    int c, i, nwhite, nother;
//    int ndigit[10];
//    nwhite = nother = 0;
//    for (i = 0; i < 10; ++i)
//        ndigit[i] = 0;
//    while ((c = getchar()) != EOF) {
//        if (c >= '0' && c <= '9')
//            ++ndigit[c - '0'];
//        else if (c == ' ' || c == '\n' || c == '\t')
//            ++nwhite;
//        else
//            ++nother;
//    }
//    printf("digits=");
//    for (i = 0; i < 10; ++i)
//        printf("%d", ndigit[i]);
//    printf(", white space = %d,other = %d\n", nwhite, nother);
////    system("pause"); // not need in xcode
//    return 0;
//}

//function power(m,n)
//int power(int m,int n);
//// test function
//int main(){
//    int i;
//    for (i = 1; i < 10; ++i){
//        printf("%d %d %d\n",i,power(2,i),power(-3,i));
//    }
//    return 0;
//}
//// calculate base^n
//int power(int base, int n){
//    int p,i;
//    p = 1;
//    for (i = 1; i <= n; ++i){
//        p = p * base;
//    }
//    return p;
//}


