// Program 71: Check if number is palindrome
#include <stdio.h>
int main() {
    int n=121, temp=n, rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(n==rev)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    return 0;
}

// Program 72: Check Armstrong number (3 digits)
#include <stdio.h>
int main() {
    int n=153, sum=0, temp=n;
    while(temp>0){
        int d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    if(n==sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}

// Program 73: Check if number is perfect
#include <stdio.h>
int main() {
    int n=28, sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
    return 0;
}

// Program 74: Check if character is special symbol
#include <stdio.h>
int main() {
    char ch='@';
    if((ch<'0') || (ch>'9' && ch<'A') || (ch>'Z' && ch<'a') || (ch>'z'))
        printf("%c is a special symbol\n", ch);
    else
        printf("%c is not a special symbol\n", ch);
    return 0;
}

// Program 75: Check if triangle is valid
#include <stdio.h>
int main() {
    int a=60,b=60,c=60;
    if(a+b+c==180)
        printf("Valid triangle\n");
    else
        printf("Invalid triangle\n");
    return 0;
}

// Program 76: Check if triangle is equilateral
#include <stdio.h>
int main() {
    int a=5,b=5,c=5;
    if(a==b && b==c)
        printf("Equilateral triangle\n");
    else
        printf("Not equilateral triangle\n");
    return 0;
}

// Program 77: Check if triangle is isosceles
#include <stdio.h>
int main() {
    int a=5,b=5,c=8;
    if(a==b || b==c || a==c)
        printf("Isosceles triangle\n");
    else
        printf("Not isosceles triangle\n");
    return 0;
}

// Program 78: Check if triangle is scalene
#include <stdio.h>
int main() {
    int a=3,b=4,c=5;
    if(a!=b && b!=c && a!=c)
        printf("Scalene triangle\n");
    else
        printf("Not scalene triangle\n");
    return 0;
}

// Program 79: Check roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main() {
    int a=1,b=4,c=4;
    int d=b*b-4*a*c;
    if(d>0)
        printf("Real and distinct roots\n");
    else if(d==0)
        printf("Real and equal roots\n");
    else
        printf("Imaginary roots\n");
    return 0;
}

// Program 80: Check person eligible to vote
#include <stdio.h>
int main() {
    int age=18;
    if(age>=18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
    return 0;
}
