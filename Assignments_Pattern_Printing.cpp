                                                   //  C++ Assignments | Pattern Printing - 1 | Week 3
               //Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1)-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n+1);i++){
        for(int j=1;j<=i;j++){
            if(i%2==0) cout<<(char)(j+64)<<" "; 
            else  cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(2*n)-1;i++){
        if(i<=n){ 
        for(int j=1;j<=i;j++){ 
            cout<<"*";
        }
        cout<<endl;
        }
        else {
            for(int j=1;j<=(2*n)-i;j++){ 
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}

// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    for(int i=1;i<=n;i++){
        p=i;
        for(int j=1;j<=i;j++){
            cout<<p<<" ";
            p--;
        }
        cout<<endl;
    }
    
    return 0;
}
