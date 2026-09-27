#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;

    //Arithmetic Operators
    cout<<"\nArithmetic Operators:"<<endl;
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;
    cout<<"a%b="<<a%b<<endl;


    //Relational Operators
    cout<<"\nRelational Operators:"<<endl;
    cout<<"a==b="<<(a==b)<<endl;
    cout<<"a!=b="<<(a!=b)<<endl;
    cout<<"a>b="<<(a>b)<<endl;
    cout<<"a<b="<<(a<b)<<endl;
    cout<<"a>=b="<<(a>=b)<<endl;
    cout<<"a<=b="<<(a<=b)<<endl;


    //Logical Operators
    cout<<"\nLogical Operators:"<<endl;
    cout<<"(a==b)&&(a<b)="<<((a==b)&&(a<b))<<endl;
    cout<<"(a==b)||(a<b)="<<((a==b)||(a<b))<<endl;
    cout<<"!(a==b)="<<(!(a==b))<<endl; 
    cout<<"!(a<b)="<<(!(a<b))<<endl;
    cout<<"!(a>b)="<<(!(a>b))<<endl;

    //Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int c = a;
    c += b; cout << "c += b: " << c << endl;
    c -= b; cout << "c -= b: " << c << endl;
    c *= b; cout << "c *= b: " << c << endl;
    c /= b; cout << "c /= b: " << c << endl;
    c %= b; cout << "c %= b: " << c << endl;


    //Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

     // Increment/Decrement Operators
    cout << "\nIncrement/Decrement Operators:" << endl;
    cout << "++a = " << (++a) << endl;
    cout << "a++ = " << (a++) << " (after increment: " << a << ")" << endl;
    cout << "--b = " << (--b) << endl;
    cout << "b-- = " << (b--) << " (after decrement: " << b << ")" << endl;

    // Conditional (Ternary) Operator
    cout << "\nConditional Operator:" << endl;
    int max = (a > b) ? a : b;
    cout << "Max of a and b: " << max << endl;
    



    return 0;
}