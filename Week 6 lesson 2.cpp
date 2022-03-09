#include <array>
#include <cstdio>
#include <iostream>
#include <string>
#include <string_view>//shows only the amount of characters as what was assigned by the variable before so if you say copy1 = original and the length was 11 then it will stay 11 even if you re input a character for the variable it will still give you 11 characters so if the variable in the beginning was hi then u re set it to say hi there it will only say hi since it only shows the  first 2 characters

int main()
{
    std::string original = "Message";
    //creates "Message"

    std::string copy1 = original;//creates selerate space


    std::string_view view1 {original};//remembers loctation of original

    std::cout<< "original: "<< original <<std::endl;
    std::cout<< "copy1: "<< copy1 <<std::endl;
    std::cout<< "view: "<< view1 <<std::endl;

}