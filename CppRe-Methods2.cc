// Метод regex_search
#include <iostream>
#include <string>
#include <regex>
int main(){
    std::string str = "MyEmail:email@host.ru LOL11!!!!";
    std::regex regular("(:)" "([.]*[^\.]+)" "(\.)");
    std::cout<<regex_replace(str.c_str(), regular, " ---lulz--- ");
}