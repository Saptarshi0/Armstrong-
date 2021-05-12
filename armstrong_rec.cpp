#include<iostream>
#include<math.h>
using namespace std;
int getDigitCount(long long n) { 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}
int getSum(int num) {
    static int order = getDigitCount(num);
    if(num == 0){
        return 0;
    }else{
        return pow(num%10, order) + getSum(num/10);
    }
}
int main (){
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;
    sum = getSum(num);
    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
        
    return 0;
}