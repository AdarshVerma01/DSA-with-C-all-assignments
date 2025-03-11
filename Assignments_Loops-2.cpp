// Predict the output  questions number 01

#include <bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
} 
  // ans :  infinite loop it will not terminate because always it will give the condition true;

//Predict the output  questions number 02

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}
/*ans: Hello
      Hello
      Hello  */

//Predict the output  questions number 03

#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}
/* ans : 
In for loop
In for loop
In for loop */


//Predict the output  questions number 04

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}
//ans: 
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include <bits/stdc++.h>
using namespace std;
int main( ) {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int m,sum=0;
    while(n>0){
       m=n%10;
       n/=10;
       if(m%2==0) sum=sum+m;
    }
    cout<<"sum is : "<<sum;
return 0;
}


// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number by user : ";
    int n;
    cin>>n;
    int m,rev=0,rem;
    m=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
        
    }
    cout<<(rev+m);

    return 0;

}

// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include<iostream>
using namespace std;
int fact(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int n;
    cout<<"enter any number : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<endl;
    }
    return 0;
}

// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :
// 1 1 2 3 5 8 13 21 34 55

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number : ";
    cin>>n;
    int a=1,b=1,c=0;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){  
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";       
    }
}



Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
Output :
1
153
370
371
407
