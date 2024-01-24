#include<iostream>
int main() {

    // namespace std::cout means standard character output
    // std::endl means standard endline which 
    // ends line ans tarts a new one, can be replaced with \n which is faster peformance wise
    std::cout<<"Hello World!"<<std::endl; //endl flushes he biffer
    std::cout<<"this is the second line"<< '\n';
    std::cout<<"this is the third line";
    return 0;
}