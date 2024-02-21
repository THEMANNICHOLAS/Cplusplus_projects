/************************************************
file: string_array.cpp
dev: Nicholas Perez
desc: A program to append strings to an existing
string and capitalizing the first letter of each
string. For COP 3003
************************************************/

#include <iostream>
#include <string>


int main(){
    std::string userString;
    std::string stringArr;

    do{
        std::cout<<"Enter a word ('stop' to stop):";
        std::cin >> userString;    //Grabs the string from the User
        if(userString != "stop")    //while the string is not 'stop' keep adding to stringArr with space
            stringArr = stringArr +" " + userString;
    }while(userString != "stop");


    std::cout << stringArr << std::endl;    //Shows before modification string

    for(int i = 0; i < stringArr.length(); i++){ //Iterates through the stringArr
        if(i==0 || stringArr[i-1] == ' ' )
            stringArr[i] = toupper(stringArr[i]);    //Capitalizes first char and chars after a space
        else
            stringArr[i] = tolower(stringArr[i]);     //Otherwise, lowercase all other chars
    }

    std::cout << stringArr << std::endl;    //Shows after modification string

    return 0;
}

