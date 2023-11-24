#include <stdio.h>
#include <math.h>


//Convert degree to radian
double degree_to_radian(double degree){
    return degree*M_PI/180.0;   
}

//
double trapezodial(int num_points){

    // Define area
    double result=0.0;
    double a=0;
    double b =degree_to_radian(60);
    double h = (b - a) / (N - 1);   // Width

    //First and last one
    result += tan(tan_values[0])
}

// A global variable to store the result
const int N=13;
double tan_values[N];

int main(void){

    //Variable for angle
    double angle_degree;
    double angle_radian;

    // First calculate the tan values and place  it in an array
    for(int i=0; i<N; i++){
        angle_degree = i*5.0;
        angle_radian = degree_to_radian(angle_degree);
        tan_values[i]=angle_radian;
    }

}