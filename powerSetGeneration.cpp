/*
    Display all subsets and print the differnce of the first and last element
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void solution(int ar[], int n){
    int num = pow(2, n);
    while(num--){
        int bin = num;
        int last, first;
        int x = 1;
        cout << "Subset:";
        for(int i = 0; i < n; i++){
            if(bin % 2 == 1){
                last = ar[i];
                if(x == 1)
                    first = ar[i];
                x++;
                cout << ar[i] << " ";
            }
            bin /= 2;
        }
        cout << "\nDifference:" << last - first << "\n\n";
    }
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    solution(ar, n);
}
