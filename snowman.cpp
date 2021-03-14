/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include "snowman.hpp"
#include "main.hpp"
using namespace std;
const int option1=1;
    const int option2=2;
    const int option3=3;
    const int option4=4;
	const int numOfArr=8;
	const int h=0;
	const int n=1;
	const int e1=2;
	const int e2=3;
	const int a1=4;
	const int a2=5;
	const int t=6;
	const int b=7;
	string H(int x,int y)
    {
    switch(x)
    {
        case option1:
        if (y==option1){
            return " _===_ ";}
        else{
            return "_===_";}
        break;
        case option2:
        if (y==option1){
            return "  ___  \n ..... ";}
        else{
            return " ___ \n.....";
		}
        break;
        case option3:
        if (y==option1){
            return "   _   \n  /_\\   ";
		}
        else{
            return "  _  \n /_\\  ";
		}
        break;
        case option4:
        if (y==option1){
			return "  ___  \n (_*_) ";
		}
        else{
            return " ___ \n(_*_)";
		}
        break;
		default:
			return "";
    }        
	}
string N(int x)
{
    switch(x)
    {
        case option1:
        return ",";
        break;
        case option2:
        return ".";
        break;
        case option3:
        return "_";
        break;
        case option4:
        return " ";
        break;
		default:
			return "";
    }        
}
string E(int x)
{
    switch(x)
    {
        case option1:
        return ".";
        break;
        case option2:
        return "o";
        break;
        case option3:
        return "O";
        break;
        case option4:
        return "-";
        break;
		default:
			return "";
    }        
}

string X(int x)
{
    switch(x)
    {
        case option1:
        return "<";
        break;
        case option2:
        return "\\";
        break;
        case option3:
        return "/";
        break;
        case option4:
        return " ";
        break;
		default:
			return "";
    }        
}
string Y(int x)
{
    switch(x)
    {
        case option1:
        return ">";
        break;
        case option2:
        return "/";
        break;
        case option3:
        return "\\";
        break;
        case option4:
        return " ";
        break;
		default:
			return "";
    }        
}
string T(int x)
{
    switch(x)
    {
        case option1:
        return " : ";
        break;
        case option2:
        return "] [";
        break;
        case option3:
        return "> <";
        break;
        case option4:
        return "   ";
        break;
		default:
			return "";
    }        
}
string B(int x)
{
    switch(x)
    {
        case option1:
        return " : ";
        break;
        case option2:
        return "\" \"";
        break;
        case option3:
        return "___";
        break;
        case option4:
        return "   ";
        break;
		default:
			return "";
    }        
}
namespace ariel{
    
	std::string snowman(int number){
	    
	    std::string s=to_string(number);
	    std::string snowi;

		if(s.length()!=numOfArr)
		{
			throw std::out_of_range ("not in range");
		}
		for (int i=0;i<numOfArr;i++){
			if(s.at(i)-'0'>option4 or s.at(i)-'0'<option1)
			{
				throw std::out_of_range ("not in range");
			}
		}
	    if (s.at(option4)=='4'){
			snowi+=H(s.at(h)-'0',0);
		}else{
			snowi+=H(s.at(h)-'0',1);
		}
        snowi+= "\n";    
        if(s.at(a1)=='2'){
		snowi+=X(s.at(option4)-'0');}
        else{
            if(s.at(a1)!='4'){
			snowi+= " ";}}
        snowi+="(";
        snowi+=E(s.at(e1)-'0');
        snowi+=N(s.at(n)-'0');
        snowi+=E(s.at(e2)-'0');
        snowi+=")";
        if(s.at(a2)=='2'){
            snowi+=Y(s.at(a2)-'0');
		}
        else{
            if(s.at(option1+option4)!='4'){
                snowi+=" ";
			}
		}
        snowi+="\n";
        if(s.at(option4)=='1' or s.at(option4)=='3'){
           snowi+= X(s.at(option4)-'0');
		}
        else{
            if(s.at(option4)!='4'){
                snowi+=" ";
		}}
        snowi+="(";
        snowi+=T(s.at(option4+option2)-'0');
        snowi+=")";
        if(s.at(option4+option1)=='1' or s.at(option4+option1)=='3'){
            snowi+=Y(s.at(option4+option1)-'0');
		}
        else{
            if(s.at(option4+option2)!='4'){
                snowi+=" ";
		}}
        if(s.at(option4)!='4'){
            snowi+="\n (";
		}
        else{
            snowi+="\n(";
		}
        snowi+=B(s.at(b)-'0');
        if(s.at(option4)!='4'){
            snowi+=") \n";
		}
        else{
            snowi+=")\n";
		}
		return snowi;
		
	}
}



