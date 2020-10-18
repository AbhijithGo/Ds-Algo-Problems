https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

// Wrong Output
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf(" %d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf(" %d \n %ld \n %c \n %.3f \n %.9lf", a, b, c, d, e);
    return 0;
}

// Correct Output
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}