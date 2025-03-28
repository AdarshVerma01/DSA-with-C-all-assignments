// Assignments | Pattern Printing - 2 | Week 3
// Print the following pattern
// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cin>>n;
    for(int i=1;i<n;i++){
        //for space
        for(int j=1;j<=(n-1)-i;j++){
            cout<<"  ";
        }
        //for pattern 
        for(int k=1;k<=p;k++){
            cout<<k<<" ";
        }
        p+=2;
        cout<<endl;

    }  
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        //for space
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        //for pattern 
        for(int k=1;k<=p;k++){
            cout<<(char)(k+64)<<" ";
        }
        p+=2;
        cout<<endl;

    }  
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
#include<iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=(n-i);j++){ 
            cout<<"  ";
        }
        
        p=i;
        for(int k=1;k<=i;k++){
            cout<<(char)(p+64)<<" ";
            p--;
        }
        
        for(int m=2;m<(i+1);m++){
            cout<<(char)(m+64)<<" ";
        }
        cout<<endl;  
    }  
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
#include<iostream>
using namespace std;
int main(){
    int n,p,b;
    cin>>n;
    p=(n-1);
    for(int a=1;a<(2*n);a++){
        cout<<(char)(a+64)<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        
        b=1;
        for(int j=1;j<=(p+1)-i;j++){
            cout<<(char)(j+64)<<" ";
            b++;
        }
        
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"  ";
            b++;
        }
        
        for(int l=1;l<=(p+1)-i;l++){
            cout<<(char)(b+64)<<" ";
            b++;
        }
        cout<<endl;
    }
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

// Print the following pattern
// Input : n = 5
// Output:
// *               *
//   *           *
//     *       *
//       *   *
//         *
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-i;j++){
            if(i==j || (i+j)==2*n)
                cout<<"*";      
            else 
                cout<<" ";                   
        }
        cout<<endl;
    }   
    return 0;
}

// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *
Print the following pattern
Sample Input : n = 4
Output :
      1
    2   2
  3       3
4           4
Print the following pattern
Sample Input : n = 5
Output :

   *
  ***
 * * *
* * *
* * *
***********
* * *
* * *
* * *
***
*

Print the following pattern
Input : n = 4
Output :

* *
** **
*** ***
*******
*******
*** ***
** **
* *

Print the following pattern
Input: n = 4

Output:
*******
*** ***
** **
* *
** **
*** ***
*******
