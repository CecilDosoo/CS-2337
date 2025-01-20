//  CS 2337/L
//  2023 Fall 
//  Assignment 3
//  Name: Cecil Dosoo
//  Buff-Id: 1121730
//
//  Note: 
//      1. The only parts of this file to modify is to add your code to the
//         functions to be implemented.
//      2. You may only use the functions pow and sqrt from <cmath> for
//         implementing the stdev function

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cassert>

using namespace std;

//  Note: do not use sort
//  Precondition: n > 0, A contains n numbers.
//  Postcondition: the smallest (min) number in A is returned.
double min(double A[], size_t n)
{
    double min_ = n;
    for (size_t i=0; i<n; ++i)
        if (A[i] < min_)
            min_ = A[i];
    return min_;

}

//  Note: do not use sort
//  Precondition: n > 0, A contains n numbers.
//  Postcondition: The largest (max) number in A is returned.
double max(double A[], size_t n)
{
    double max_;
    for (size_t i=0; i<n; ++i)
        if (A[i] > max_)
            max_ = A[i];
    return max_;
}

//  Precondition: n > 0, A contains n numbers and A is sorted from smallest to
//                largest (sort will be applied to A so that when A is passed
//                into this function, A is sorted from least to greatest number).
//  Postcondition: The middle number is returned when n is odd.
//                 Else, the average of the two middle numbers is returned when n
//                 is even.
double med(double A[], size_t n)
{   
        if (n % 2 == 1){
            return A[n/2];
        }
        else {
            double med1 = A[n/2];
            double med2 = A[(n/2) - 1];
            return (med1 + med2)/2; 
        }         

}


//  Precondition: n > 0, A contains n numbers.
//  Postcondition: The average (or mean) of the numbers in A is returned.
double avg(double A[], size_t n)
{
    double avg_;
    double sum;
    for (size_t i=0; i<n; ++i)
        sum += A[i];
    avg_ = sum/n;
    return avg_;

}

//  Note: see attached pdf file that shows the standard deviation calculation
//  Precondition: n > 0, A contains n numbers.
//  Postcondition: The population standard deviation of the numbers in A is returned.
double stdev(double A[], size_t n)
{
    double avg_ = avg(A, n);
    double stdev_ = 0;

    for(size_t i=0; i<n; ++i){
        stdev_ += pow(A[i] - avg_, 2);
    }
    return sqrt(stdev_ /= n);

}




// Do not modify code after this line
//--------------------------------------------------------------
void read_data(double data[], std::string file_name)
{
    std::string line;
    double val;
    size_t i = 0;
    std::ifstream file_to_read(file_name);
    while(std::getline(file_to_read, line))
    {
        std::stringstream ss(line);
        while(ss >> val)
        {
            data[i] = val;
            ++i;
            if(ss.peek() == ',')
                ss.ignore();
        }
    }
    file_to_read.close();
}

void print_stats(double A[], size_t n)
{
    cout << "Min    = " << min(A,n) << endl;
    cout << "Max    = " << max(A,n) << endl;
    sort(A,A+n);
    cout << "Median = " << med(A,n) << endl;
    cout << "Averge = " << avg(A,n) << endl;
    cout << "Stdev  = " << stdev(A,n) << endl;
}

int main()
{
    size_t n1 = 30;
    double D1[n1];
    read_data(D1,"data1.csv");
    cout << "data1" << endl;
    print_stats(D1,n1);

    size_t n2 = 101;
    double D2[n2];
    read_data(D2,"data2.csv");
    cout << endl << "data2" << endl;
    print_stats(D2,n2);

    size_t n3 = 300;
    double D3[n3];
    read_data(D3,"data3.csv");
    cout << endl << "data3" << endl;
    print_stats(D3,n3);
 
    return 0;
}
