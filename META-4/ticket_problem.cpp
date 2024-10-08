/*Every day, Mike goes to his job by a bus, where he buys a ticket. On the ticket, there is a letter-code that can be represented as a string of 
upper-case Latin letters. Mike believes that the day will be successful in case exactly two different lettersin the code alternate. Otherwise, he 
believes that the day will be unlucky. Please see note section for formal
definition of alternating code.

You are given a ticket code. Please determine, whether the day will be successful for Mike or not. Print "YES" or "NO" (without quotes) 
corresponding to the situation.

Input
The first line of the input contains an integer T denoting the number of test cases. The description
of T test cases follows.
The first and only line of each test case contains a single string S denoting the letter code on the ticket.
Output
For each test case, output a single line containing "YES" (without quotes) in case the day will be
successful and "NO" otherwise.

Note
Two letters x, y where x != y are said to be alternating in a code, if code is of form "xyxyxy...".
Constraints
 1 ≤ T ≤ 100
 S consists only of upper-case Latin letters
Subtask 1 (50 points):
 |S| = 2
Subtask 2 (50 points):
 2 ≤ |S| ≤ 100*/

#include<iostream>
#include<string>
using namespace std;
string ticket(string s){
    int sl,f;
    char fc;
    char sc;
    sl=s.length();
    //jsut assume that the first two chracter are alternate so setting f=1;//the flag variable
    fc=s[0];
    sc=s[1];
    f=1;

    //checking for even number indeces
    for(int i=0;i<sl;i=i+2){
        if(s[i]!=fc){
            f=0;
            break;
        }
    }
    //checking for odd indeces
    if(f==1){
        for(int i=1;i<sl;i=i+2){
            if(s[i]!=sc){
                f=0;
                break;
            }
        }
    }
    //checking if both the elements are differnt or not
    if(f==1){
        if(sc==fc){
            f=0;
        }
    }

    if(f==1){
        return "yes";
    }
    else{
        return "no";
    }
}

int main(){
    //enter the test cases
    int t;
    string s;
    string result;
    cout<<"Enter the test cases"<<endl;
    cin>>t;
    while(t--){
        cout<<"Enter the string or character"<<endl;
        cin>>s;
        result=ticket(s);
        cout<<result<<endl;
    }
}