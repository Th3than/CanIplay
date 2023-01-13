#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[], int n, double r[]){
    double all = 0;
    for (int i = 0; i < n; i++)
    {
        all += a[i];
    }
    r[0] = all/n;
   
    double all2 = 1,all4 = 0;
    for (int i = 0; i < n; i++)
    {
        all2 *= a[i];
        all4 += pow((a[i]-r[0]),2);
    }
    r[1] = sqrt(all4/n);
    r[2] = pow(all2,1.0/n);
    double all3 = 0;
    for (int i = 0; i < n; i++)
    {
        all3 += 1/a[i];
    }
    r[3] = n/all3;
    double hi ,low ;
    hi = a[0];
    low = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > hi)
        {
            hi = a[i];
        }else if (a[i] < low)
        {
            low = a[i];
        }
    }
    r[4] = hi;
    r[5] = low;
}