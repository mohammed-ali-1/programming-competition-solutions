//
//  main.cpp
//  calm.cpp
//  This program finds if a number is calm or not.
//  A calm number is a number in which every pair of adjacent digits differ by at most 1.
//  For example, 54 is a calm number because the difference between 5 and 4 is 1.
//  While 13 is not a calm number becuase the difference between 1 nad 3 is 2, which is bigger than 1.
//
//  Created by Mohammed Al Ameen on 11/13/17.
//  Copyright © 2017 Mohammed Al Ameen. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    while(1==1){
        string N; //This is the input
        bool yes = true;
        int current=0;
        stack<int> s,t;
    
        cout << "Enter number to find if calm: ";
        cin >> N;
        
        if(N=="0")
            exit(0);

        //This converts every character in the input to an integer, and then pushes it to the stack.
        for(int i=0 ; i < N.length() ; i++){
            if(s.empty()&&(int)N[i]-48==0) //We ignore any leading zeroes
                {}
            else
                s.push((int)N[i]-48); //We need to subtract 48 from the character in order to get rid of the ASCII value
                                      //You can find the ASCII table here: http://ee.hawaii.edu/~tep/EE160/Book/chap4/subsection2.1.1.1.html
        }
        
        //When we push the digits to the stack, their order is reversed. So I use another stack to reverse the order again.
        //The order of the input won't affect the final result so you can ignore this step.
        while (!s.empty()) {
            t.push(s.top());
            s.pop();
        }
        
        //This part of the code checks the difference between every pair of digits in the input.
        while(!t.empty()){
            current = t.top();
            t.pop();
            
            if(t.empty())
                break;
        
            if(abs(current-t.top()) > 1){
                yes=false;
                break;
            }
        }
    
        if(yes)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
