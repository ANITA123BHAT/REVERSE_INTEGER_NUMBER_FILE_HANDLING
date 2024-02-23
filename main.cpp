#include<iostream>
#define DEBUG_ENABLE 1;
#include "./include/reverse_number.h"
using namespace std;

/*function to validate the input */
bool 
isInteger(string str){
    int integerNum;
    try {
        size_t pos;
        integerNum = std::stoi(str, &pos);

        // Check if the entire string can able to  converted to an integer
        if (pos != str.length()) {//check uncoverted string 
            return false;
        }
    } catch (const std::exception&) {
        return false;
    }
    // Check if the number is within the valid range for integers
    return (integerNum >= std::numeric_limits<int>::min() && integerNum <= std::numeric_limits<int>::max());
}

int 
main(int argc,char* argv[]){
    cout<<"**Program to reverse an integer number**"<<endl;
    /*taking the input file through command line argument*/
    if(argc<2){
        cout<<"Usage:<./program_name> <file_name.txt>"<<endl;
        return 1;
    }
    string filename(argv[1]);
    cout<<"\n"<<"Read the input from the file:"<<filename<<endl;
    ifstream inputFile(filename);
    if(!inputFile){
        cerr << "Error opening the file: " << filename <<endl;
        return 1;
    }
    string line;
    while(getline(inputFile,line)){
        if(line.empty()){
            /*skip the line*/
            continue;
        }      
        if(isInteger(line)){//validation of input
            int integer_num=stoi(line);
            cout<<"input number before reverse "<<integer_num<<endl;
            int reverse_of_number= reverse_of_integer(integer_num);
            cout<<"input number after reverse "<<reverse_of_number<<endl;
            cout<<"\n";
        }else{
            /*skip the line*/
            continue;
        }   
    }
    inputFile.close();
    return 0;
};
