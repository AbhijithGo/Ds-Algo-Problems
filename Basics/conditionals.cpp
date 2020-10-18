https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?h_r=next-challenge&h_v=zen

// Fails in negative number input
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string int_map[] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(n > 9){
        cout << "Greater than 9" << endl;
    }
    else {
        cout << int_map[n-1] << endl;
    }
    return 0;
}

// Fix negative number input with logical bug. -1 is not greater than 9
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string int_map[] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(n > 9 || n < 0){
        cout << "Greater than 9" << endl;
    }
    else {
        cout << int_map[n-1] << endl;
    }
    return 0;
}
