/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    int n;
    cin>>n;
    int i;
    while(i<=n){
    for(int j=1;j<=i;j++){
    char ch;
    ch='A'+i-1;
    cout<<ch<<" ";
    }
    cout<<endl;
    i++;
    }

    return 0;
}