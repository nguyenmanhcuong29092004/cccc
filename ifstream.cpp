#include<iostream>
#include<fstream>
int main(){
std::ifstream inputFile("ifstream.cpp");
while(inputFile){
std::string line;
std::getline(inputFile, line);
if(inputFile){
std::cout<<line<<std::endl;}
}
inputFile.close();
return 0;
}
