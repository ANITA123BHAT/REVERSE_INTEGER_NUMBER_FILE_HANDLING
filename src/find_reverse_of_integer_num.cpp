#include<iostream>
#include "../include/reverse_number.h"
using namespace std;

int
reverse_of_integer(int int_num){
    int reminder,res=0;
    while(int_num!=0){
        reminder=(int_num%10);
        res=(res*10)+reminder;
        int_num=int_num/10;
    }
    return res;
}
// Function to reverse an integer number (passed as a string)

// void reverse_of_integer(const std::string& num) {
//     int start = 0;

//     if (num[0] == '-') {
//         std::cout << num[0];
//         start = 1;
//     }

//     for (int i = num.size() - 1; i >= start; i--) {
//         std::cout << num[i];
//     }
// }
