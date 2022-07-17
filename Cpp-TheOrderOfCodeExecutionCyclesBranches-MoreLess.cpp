/*
Больше-меньше
В двух строчках входного файла INPUT.TXT записаны числа A и B, не превосходящие по абсолютной величине 2×109. Запишите в выходной файл OUTPUT.TXT один символ "<", если A < B, ">", если A > B и "=", если A=B.
Примеры
INPUT.TXT    OUTPUT.TXT
5        <
7    
-7        >
-12
13        =
13    
 * */
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");
int main()
{
	    int a,b;
	        in >> a >> b;
		    if (a<b){
			            out << "<";
				        }
		        else{
				        if (a>b){
						            out << ">";
							            }
					        else{
							            if(a==b){
									                    out << "=";
											                }
								            }
						    }
			    return 0;
}
