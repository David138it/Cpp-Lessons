// Метод regex_match
#include <iostream>
#include <string>
#include <regex>
int main(){
    std::string str = "MyEmail:email@host.ru LOL11!!!!";
    std::cmatch result;
    std::regex regular("(:)" "([.]*[^\.]+)" "(\.)");
    if(std::regex_search(str.c_str(), result, regular)){
        for (int i=0; i<result.size(); i++){
            std::cout<<result[i]<<std::endl;
        }
    }
}