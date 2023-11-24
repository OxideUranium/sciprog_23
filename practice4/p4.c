#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


// A global variable to store the result
double tan_values[13];
int N=12;

//Convert degree to radian
double degree_to_radian(double degree){
    return degree*M_PI/180.0;   
}

//
double trapezodial(int N){

    // Define area
    double result=0.0;
    double w = degree_to_radian((60.0 - 0) / (2.0*N));   // Width

    //First and last term
    result = tan_values[0] + tan_values[N];

    //Middle terms
    int i;
    for( i=1; i<N; i++){
        result += tan_values[i] * 2.0;
    }

    return result*w;       
}



int main(void){

    //Variable for angle
    double angle_degree;
    double angle_radian;

    // First calculate the tan values and place  it in an array
    for(int i=0; i<=N; i++){
        angle_degree = i*5.0;
        angle_radian = degree_to_radian(angle_degree);
        tan_values[i]= tan(angle_radian);
    }

    // Using trapezodial rule to calculate
    double area = trapezodial(N);
    
    printf("Integral from 0 to 60 degree of the tan(x) with respect to x is = %f", area);
}