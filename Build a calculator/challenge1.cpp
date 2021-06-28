#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, PI;
    int choice=0;
    while(choice!=15)
    {
        cout<<"\t\t\tSCIENTIFIC CALCULATOR\n";
        cout<<"---------------------------------------------------\n";
        cout<<"\t\t\tMENU";
        cout<<"\n--------------------------------------------------\n";
        cout<<"\n1: Division";
        cout<<"\n2: Multiplication";
        cout<<"\n3: Subtraction";
        cout<<"\n4: Addition";
        cout<<"\n5: Exponent";
        cout<<"\n6: Square root";
        cout<<"\n7: Sin";
        cout<<"\n8: Cos";
        cout<<"\n9: Tan";
        cout<<"\n10: Inverse of Sin";
        cout<<"\n11: Inverse of Cos";
        cout<<"\n12: Inverse of Tan";
        cout<<"\n13: Log";
        cout<<"\n14: Log with base 10";
        cout<<"\n15: EXIT";
        cout<<"\nEnter the function that you want to perform : ";
        cin>>choice;
        PI=3.14159265;
        switch(choice)
        {
            case 1:
                cout<<"Enter 1st number : ";
                cin>>a;
                cout<<"Enter 2nd number : ";
                cin>>b;
                cout<<"Division = "<<a/b<<endl;
                break;
            case 2:
                cout<<"Enter 1st number : ";
                cin>>a;
                cout<<"Enter 2nd number : ";
                cin>>b;
                cout<<"Multiplication = "<<a*b<<endl;
                break;
            case 3:
                cout<<"Enter 1st number : ";
                cin>>a;
                cout<<"Enter 2nd number : ";
                cin>>b;
                cout<<"Subtraction = "<<a-b<<endl;
                break;
            case 4:
                cout<<"Enter 1st number : ";
                cin>>a;
                cout<<"Enter 2nd number : ";
                cin>>b;
                cout<<"Addition = "<<a+b<<endl;
                break;
            case 5:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Enter the exponent : ";
                cin>>b;
                cout<<"Exponent = "<<pow(a,b)<<endl;
                break;
            case 6:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Square Root = "<<sqrt(a)<<endl;
                break;
            case 7:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Sin = "<<sin(a)<<endl;
                break;
            case 8:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Cos = "<<cos(a)<<endl;
                break;
            case 9:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Tan = "<<tan(a)<<endl;
                break;
            case 10:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl;
                break;
            case 11:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl;
                break;
            case 12:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl;
                break;
            case 13:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Log = "<<log(a)<<endl;
                break;
            case 14:
                cout<<"Enter the number : ";
                cin>>a;
                cout<<"Log with base 10 = "<<log10(a)<<endl;
                break;
            default:
                cout<<"Wrong Input"<<endl;
        }
    }
    return 0;
}
