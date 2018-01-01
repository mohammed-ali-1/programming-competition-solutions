//
//  main.cpp
//  factorization.cpp
//
//  Created by Mohammed Al Ameen on 11/17/17.
//  Copyright © 2017 Mohammed Al Ameen. All rights reserved.
//

#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main(){
    int fact, power, numberOfFactors;
    stack<int> s;
    bool no = false;
    
    cout << "Enter the number of factors: ";
    cin >> numberOfFactors;
    
    int i=0;
    
    cout << "Enter each factor followed by its power: ";
    
    while(i<numberOfFactors){
        cin >> fact >> power;
        
        if(power > 1)
            s.push(fact);
        
        i++;
    }
    
    int numOfDivisors, divisor;
    
    cout << "Enter number of divisors: ";
    cin >> numOfDivisors;
    
    int j=0;
    
    while(j<numOfDivisors){
        cout << "Enter divisor: ";
        cin >> divisor;
        stack<int> t;
        t=s;
        
        while(!t.empty()){
            if(divisor%t.top()==0 && divisor!=round(sqrt(divisor))*round(sqrt(divisor))){
                cout << "Yes!\n";
                no=true;
                break;
            }
            else
                t.pop();
        }
        
        if(no==false)
            cout << "No\n";
        
        j++;
        no=false;
    }
}

