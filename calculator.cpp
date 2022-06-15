#include<iostream>
using namespace std;

int main(){
    char op;
    bool flag=true;
    float result=0;
    float num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    result=num1;
    while(flag){
        cout<<"Enter operator"<<endl;
        cin>>op;
        if(op!='='){
            cout<<"Enter second number"<<endl;
            cin>>num2;
        }
        switch (op){
            case '+':
                result += num2;
                break;
            case '-':
                result -= num2;
                break;
            case '*':
                result *= num2;
                break;
            case '/':
                if(num2!=0){
                    result /= num2;
                }
                break;
            case '=':
                cout<<result<<endl;
                flag=false;
                break;
            case 'c':
                flag=false;
                break;
            default:
                cout<<"Please enter valid input";
                break;
        }
    }
    return 0;
}