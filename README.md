# 

<h3>Guess The Number</h3>
<p><strong>Task</strong>:<br />trying to guess the number at the computer</p>
<p><strong>Сonclusion</strong>:<br />./test<br />
Какое число вы загадали?45<br />
Мое число больше<br />
Какое число вы загадали?100<br />
Мое число меньше<br />
Какое число вы загадали?75<br />
Мое число больше<br />
Какое число вы загадали?90<br />
Мое число больше<br />
Какое число вы загадали?95<br />
Мое число меньше<br />
Какое число вы загадали?94<br />
Мое число меньше<br />
Какое число вы загадали?92<br />
Мое число меньше<br />
Какое число вы загадали?91<br />
Ты угадал<br />
Продолжить? (y/n) n</p>
<p><strong>Task</strong>:<br />Now, on the contrary, we are trying to guess our number</p>
<p><strong>Сonclusion</strong>:<br />Вы загадали 50<br />
Правильно? (+/-/=) -<br />
25<br />
Правильно? (+/-/=) @<br />
Вы ввели не правильный символ, повторите<br />
Правильно? (+/-/=) -<br />
12<br />
Правильно? (+/-/=) +<br />
18<br />
Правильно? (+/-/=) -<br />
15<br />
Правильно? (+/-/=) +<br />
17<br />
Правильно? (+/-/=) =<br />
17</p>
<h3>Multiplication Table</h3>
<p><strong>Сonclusion</strong>:<br />./project<br />
1<br />
2<br />
3<br />
4<br />
5<br />
6<br />
7<br />
8<br />
9<br />
10</p>
<p><strong>Сonclusion</strong>:<br />./project<br />
     1    2    3   4     5    6    7    8    9   10<br />
     2    4    6   8   10  12  14  16  18   20<br />
     3    6    9  12  15  18  21  24  27   30<br />
     4    8  12  16  20  24  28  32  36   40<br />
     5  10  15  20  25  30  35  40  45   50<br />
     6  12  18  24  30  36  42  48  54   60<br />
     7  14  21  28  35  42  49  56  63   70<br />
     8  16  24  32  40  48  56  64  72   80<br />
     9  18  27  36  45  54  63  72  81   90<br />
   10  20  30  40  50  60  70  80  90 100</p>
<h3>Условный оператор</h3>
<p><strong>Task</strong>:</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test1 C-Isu-ConditionalOperator.c -lm<br />
:~$ ./test1<br />
  Введи a,b,c<br />
  0,2,3<br />
  x=-1.500<br />
:~$ ./test1<br />
  Введи a,b,c<br />
  2,-10,12<br />
  x1=3.000<br />
  x2=2.000<br />
:~$ ./test1<br />
  Введи a,b,c<br />
  2,-8,26<br />
  x1=  2.00 +i*  3.00<br />
  x2=  2.00 -i*  3.00</p> 
<h3>Циклические выражения</h3>
<p><strong>Task</strong>:<br />Составить программу вычисления фактори­ала n! = 1*2*3*...*n тремя способами - с использованием цикла while, цикла do-while и цикла for.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-CyclicExpressions.c<br />
:~$ ./test0<br />
  Введите число: 3<br />
  3!=6<br />
:~$ ./test0<br />
  Введите число: 4<br />
  4!=24</p>
<h3>Function printf</h3>
<p><strong>Task</strong>:<br />Convert the following program:<br />#include&lt;stdio.h&gt;<br />#include&lt;conio.h&gt;<br />void main()<br />{ <br />&nbsp;int j; char k; double a;<br />&nbsp;j=21; k=&rsquo;m&rsquo;; a=3.1415926;<br />&nbsp;printf("PRINT INTEGER j =%d\n",j);<br />&nbsp;printf("PRINT SYMBOL k=%c\n" ,k);<br />&nbsp;printf("PRINT LONG FLOAT a=%lf \n",a);<br />&nbsp;printf("PRINT STRING"); <br />&nbsp;getch();<br />}<br />so that in the first line it is printed: <br />Value of symbol k = R, Value of integer j = -14,<br />&nbsp;во второй строке:<br />Value of float variable а is 1.652730E+02<br />&nbsp;in exponential form (in %e format), and in the third line the text:<br />&nbsp;END of PROGRAMM.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Printf.c -lcurses<br />
:~$ ./test0<br />
  Value of symbol k=R<br />
  Value of float variable a is 1.652730e+02<br />
  End of programm</p>  
<h3>Arithmetic expressions, mathematical and other useful functions</h3>
<p><strong>Task</strong>:<br />Using the mathematical function tan, print a table of tangents and cotangents in the form:<br />a&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; tg(a)&nbsp;&nbsp; ctg(a)<br />30.0&nbsp; ...&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &hellip;<br />45.0 ...&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &hellip;<br />60.0 ...&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &hellip;<br />In place... the corresponding values of trigonometric functions with three significant digits in the fractional part should be printed.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-ArithmeticExpressionsMathematicalAndOtherUsefulFunctions.c -lcurses -lm<br />
:~$ ./test0<br />
  a tg(a) ctg(a)<br />
  30.0  0.58  1.73<br />
  45.0  1.00  1.00<br />
  60.0  1.73  0.58</p>    
<h3>Assignment expressions and data entry into the program</h3>
<p><strong>Task</strong>:<br />For the value of the real variable a entered from the console, print a table of function values of the form:<br />sin(a)=...<br />arccos(a)==...<br />ехр(a).==...<br />ln(a)=^...<br />ceil(a)=... <br />floor(a)=...<br />sqrt(a)=&hellip;<br />pow(2,a)=...<br />In place a, the number entered from the keyboard should be displayed in place &hellip; - the value of the corresponding function.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-AssignmentExpressionsAndDataEntryIntoTheProgram.c -lcurses -lm<br />
:~$ ./test0<br />
  Напишите число: 36.1<br />
  sin(a)=0.59<br />
  arccos(a)=0.89<br />
  exp(a)=4764640456692079.00<br />
  ln(a)=3.59<br />
  ceil(a)=37.0<br />
  floor(a)=36.0<br />
  sqrt(a)=6.01<br />
  pow(2,a)=73651633626.70</p> 
<h3>Functions</h3>
<p><strong>Task</strong>:<br />we need to create a function that takes as arguments the polar coordinates of the point p and f and passes to the program calling this function the Cartesian coordinates of the point X and Y, calculated by the formulas: *X=p*Cos(ф), Y=p*Sin(ф)</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Functions.c<br />
:~$ ./test0<br />
2.0<br />
30.0<br />
1.000000 1.732051</p>
<p><strong>Task</strong>:<br />Create a program that prints a table of factorials from 0 to 7. A function that calculates the factorial of its argument must be created and used in the program.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Functions1.c<br />
:~$ ./test0<br />
1!    1<br />
2!    2<br />
3!    6<br />
4!    24<br />
5!    120<br />
6!    720<br />
7!    5040</p>
<p><strong>Task</strong>:<br />Create a program that accepts Cartesian coordinates of a point from the keyboard and prints spherical coordinates. The coordinate transformation must be performed by a void type function using the formulas</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Functions2.c<br />
:~$ ./test0<br />
x=2<br />
y=3<br />
z=4<br />
5.385165<br />
42.031113<br />
56.309932</p>
<h3>Arrays</h3>
<p><strong>Task</strong>:<br />determine the length of the string.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays.c<br />
:~$ ./test0<br />
    14</p>
<p><strong>Task</strong>:<br />Write a program that forms a unit matrix and displays it on the screen</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays1.c<br />
:~$ ./test0<br />
    10000<br />
    01000<br />
    00100<br />
    00010<br />
    00001</p>
<p><strong>Task</strong>:<br />Fill a real array of 20 elements with random real numbers in the range from - 3.0 to +3.0. Display a numbered column of values of array elements. Determine and output the number and value of the largest element of the array.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays2.c<br />
:~$ ./test0<br />
    Array=-2.00<br />
    Array= 1.00<br />
    Array=-1.00<br />
    Array= 2.00<br />
    Array=-2.00<br />
    Array= 0.00<br />
    Array= 0.00<br />
    Array=-1.00<br />
    Array=-2.00<br />
    Array= 0.00<br />
    Array=-1.00<br />
    Array= 2.00<br />
    Array= 3.00<br />
    Array= 1.00<br />
    Array= 3.00<br />
    Array=-3.00<br />
    Array= 0.00<br />
    Array=-2.00<br />
    Array=-1.00<br />
    Array=-1.00</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays3.c<br />:~$ ./test0<br />
0 -2.00<br />
1  1.00<br />
2 -1.00<br />
3  2.00<br />
4 -2.00<br />
5  0.00<br />
6  0.00<br />
7 -1.00<br />
8 -2.00<br />
9  0.00<br />
10 -1.00<br />
11  2.00<br />
12  3.00<br />
13  1.00<br />
14  3.00<br />
15 -3.00<br />
16  0.00<br />
17 -2.00<br />
18 -1.00<br />
19 -1.00</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays4.c<br />
:~$ ./test0<br />
1 -2.00<br />
2  1.00<br />
3 -1.00<br />
4  2.00<br />
5 -2.00<br />
6  0.00<br />
7  0.00<br />
8 -1.00<br />
9 -2.00<br />
10  0.00<br />
11 -1.00<br />
12  2.00<br />
13  3.00<br />
14  1.00<br />
15  3.00<br />
16 -3.00<br />
17  0.00<br />
18 -2.00<br />
19 -1.00<br />
20 -1.00<br />
<br />
3.000000</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays5.c<br />
:~$ ./test0<br />
1  2.31<br />
2  2.51<br />
3  0.88<br />
4 -0.41<br />
5  1.11<br />
6 -0.65<br />
7  1.82<br />
8  0.61<br />
9  2.84<br />
10 -2.93<br />
11  2.61<br />
12 -0.40<br />
13 -0.05<br />
14 -0.47<br />
15 -0.87<br />
16 -1.14<br />
17 -0.92<br />
18 -2.31<br />
19  1.43<br />
20 -1.27<br /><br />
 2.84    9</p>
<p><strong>Task</strong>:<br />Fill the 6*6 matrix with random integers in the range from 0 to 200. Display the matrix on the screen in the form of a table. After that, output the matrix in the transposed form. </p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays6.c<br />
:~$ ./test0<br />
xxxxxx<br />
xxxxxx<br />
xxxxxx<br />
xxxxxx<br />
xxxxxx<br />
xxxxxx</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays7.c<br />
183    86    177    115    193    135<br />    
186    92    49    21    162    27<br />    
90    59    163    126    140    26<br />
172    136    11    168    167    29<br />
182    130    62    123    67    135<br />
129    2    22    58    69    167</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-Arrays8.c<br />
:~$ ./test0<br />
183    86    177    115    193    135    <br />
186    92    49    21    162    27    <br />
90    59    163    126    140    26    <br />
172    136    11    168    167    29    <br />
182    130    62    123    67    135    <br />
129    2    22    58    69    167    <br />
<br />
183    186    90    172    182    129    <br />
86    92    59    136    130    2    <br />
177    49    163    11    62    22    <br />
115    21    126    168    123    58    <br />
193    162    140    167    67    69    <br />
135    27    26    29    135    167</p>
<h3>Addresses And Pointers</h3>
<p><strong>Task</strong>:<br />Using only pointers, fill the array with ten random integers in the range from 0 to 10. Display a numbered array of values in a column on the screen. After that, print the numbers, values and addresses of those elements that turned out to be even. Use Operation %.</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-AddressesAndPointers.c<br />
:~$ ./test0<br />
6<br />
10<br />
6<br />
2<br />
1<br />
4<br />
0<br />
6<br />
3<br />
1</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-AddressesAndPointers1.c<br />:~$ ./test0<br />
1    6<br />
2    10<br />
3    6<br />
4    2<br />
5    1<br />
6    4<br />
7    0<br />
8    6<br />
9    3<br />
10    1</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-AddressesAndPointers2.c<br />:~$ ./test0<br />
1    6    0x7ffc718f2820<br />
2    10    0x7ffc718f2824<br />
3    6    0x7ffc718f2828<br />
4    2    0x7ffc718f282c<br />
5    1    0x7ffc718f2830<br />
6    4    0x7ffc718f2834<br />
7    0    0x7ffc718f2838<br />
8    6    0x7ffc718f283c<br />
9    3    0x7ffc718f2840<br />
10    1    0x7ffc718f2844</p>
<p><strong>Сonclusion</strong>:<br />:~$ gcc -o test0 C-Isu-AddressesAndPointers3.c<br />:~$ ./test0<br />
1    6    0x7ffcf9079ab0<br />
2    10    0x7ffcf9079ab4<br />
3    6    0x7ffcf9079ab8<br />
4    2    0x7ffcf9079abc<br />
6    4    0x7ffcf9079ac4<br />
7    0    0x7ffcf9079ac8<br />
8    6    0x7ffcf9079acc</p>
<h3>Telephone Directory</h3>
<p><strong>Task</strong>:<br />I created a list of names with phone numbers in the file beforehand file.txt . You need to create a program so that when you enter a name on the console, the number of the right person is given. I'll do it with a vector.</p>
<p><strong>Сonclusion</strong>:<br />Введите имя (или стоп)АННА<br />
Введите имя (или стоп)АНДРЕЙ<br />
Введите имя (или стоп)КАТЯ<br />
КАТЯ 56456546<br />
Введите имя (или стоп)АНЯ<br />
АНЯ 4534568345<br />
Введите имя (или стоп)ДАША<br />
ДАША 6576576576<br />
Введите имя (или стоп)стоп</p>
<h3>TicTacToe</h3>
<p><strong>Сonclusion</strong>:<br />./main<br />
Welcome<br />
<br />
подсказка хода<br />
-7-|-8-|-9-<br />
-4-|-5-|-6-<br />
-1-|-2-|-3-<br />
---|---|---<br />
---|---|---<br />
---|---|---<br />
ваш ход: 3<br />
Вы ввели: 3<br />
<br />
<br />
подсказка хода<br />
-7-|-8-|-9-<br />
-4-|-5-|-6-<br />
-1-|-2-|-3-<br />
---|---|---<br />
---|---|---<br />
---|---|-x-<br />
ваш ход: 2<br />
Вы ввели: 2<br />
<br />
<br />
подсказка хода<br />
-7-|-8-|-9-<br />
-4-|-5-|-6-<br />
-1-|-2-|-3-<br />
---|---|---<br />
---|---|---<br />
---|-o-|-x-<br />
ваш ход: 3<br />
введите правильный ход: 1<br />
Вы ввели: 1<br />
<br />
<br />
подсказка хода<br />
-7-|-8-|-9-<br />
-4-|-5-|-6-<br />
-1-|-2-|-3-<br />
---|---|---<br />
---|---|---<br />
-x-|-o-|-x-<br />
ваш ход: 5<br />
Вы ввели: 5<br />
<br />
<br />
подсказка хода<br />
-7-|-8-|-9- <br />
-4-|-5-|-6- <br />
-1-|-2-|-3- <br />
---|---|--- <br />
---|-o-|--- <br />
-x-|-o-|-x- <br />
ваш ход: 7<br />   
Вы ввели: 7<br />
<br />
<br />
подсказка хода<br />
-7-|-8-|-9-<br />
-4-|-5-|-6-<br />
-1-|-2-|-3-<br />
-x-|---|---<br />
---|-o-|---<br />
-x-|-o-|-x-<br />
ваш ход: 8<br />
Вы ввели: 8<br />
player O: поздравляю, вы выйграли<br />
    -x-|-o-|---<br />
    ---|-o-|---<br />
    -x-|-o-|-x-<br />
 Статистика Игрока Х: 0, Игрока О: 1 И нeчьи 0<br />
Хотите продолжить?(y/n) n</p>
<h3>Two-dimensional arrays</h3>
<p><strong>Сonclusion</strong>:<br />./main<br />1 1<br />
. . .<br />
. x .<br />
. . .<br />
0 0<br />
x . .<br />
. x .<br />
. . .<br />
2 2<br />
x . .<br />
. x .<br />
. . x<br />
2 1<br />
x . .<br />
. x .<br />
. x x<br />
2 0<br />
x . .<br />
. x .<br />
x x x</p>
<h3>ArraysStringsPointersReferences</h3>
<h3>Search by number in a sorted array</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />VVedite iskonoe chislo35<br />&nbsp;&nbsp;&nbsp; chislo35 nahoditsia po indeksu 9</p>
<h3>A maze using a two-dimensional array</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jjjjjjjjjjjj&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jjjjjjjjjj&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjjjjjj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jjjjjjjjjjjj&nbsp; jjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjj<br />&nbsp;&nbsp;&nbsp; jjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp; jjjj&nbsp; jjjjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjjjjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jjjjjjjjjjjjjjjjjjjjjjjjjj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jjjjjjjjjjjjjjjjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjjjj&nbsp; jj&nbsp; jjjjjj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jjjjjjjjjjjjjjjj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jjjjjjjjjjjjjjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjjjjjj&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp; jjjjjjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp; jjjjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp; jjjjjjjjjjjjjjjjjjjj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jjjjjjjjjjjjjjjjjjjj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp; jjjj&nbsp; jjjjjjjjjjjjjjjj&nbsp;&nbsp; &nbsp;<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp; jjjj&nbsp; jjjj&nbsp; jjjjjjjjjjjjjj<br />&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp; jjjj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; jj<br />&nbsp;&nbsp;&nbsp; jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj</p>
<h3>A sinusoidal graph using two-dimensional arrays</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br /><img src="img/589.png"></p>
<h3>Dynamic memory allocation</h3>
<p><strong>Task</strong>:<br />It is necessary to organize the dynamic input of a square matrix.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Enter size : 3<br />
Enter matrix<br />
1 7 54<br />
3 6 3<br />
1 5 8</p>
<p><strong>Task</strong>:<br />Let's develop a program in which we will create a one-dimensional dynamic array filled with random numbers.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />array = 4    1    0    1    0    2    1    1    2    2</p>
<p><strong>Task</strong>:<br />Let's develop a program in which we will create a two-dimensional dynamic array.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />0   3   1   2   0<br />2   1   10   1   3</p>
<p><strong>Task</strong>:<br />Fill the allocated memory with random integers in two ways:<br />
a) working with allocated memory as with a regular array (variables with an index),<br />
b) using only pointers. In both cases, display the result on the screen.<br />
Release the allocated memory and display the array on the screen again.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />5<br />00A7B598<br />
41<br />
18467<br />
6334<br />
26500<br />
19169<br />
15724<br />
11478<br />
29358<br />
26962<br />
24464<br />
-572662307   -572662307   -572662307   -572662307   -572662307</p>
<p><strong>Task</strong>:<br />Dynamically allocate memory for a matrix of 3 rows and 3 columns of an integer type.<br />Consider the first two lines as vectors with random values of elements in the range from 5 to 10.<br />Calculate the third line as a vector product of the first two vectors. Display the matrix on the screen.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />0   0   0<br />
1   1   2<br />
1   0   1</p>
<p><strong>Task</strong>:<br />For a given matrix of size n by m, find k such that the kth row of the matrix coincides with the kth column.<br />Find the sum of the elements in those rows that contain at least one negative element.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />$ ./project<br />
Vvedite kolichestvo strok v massive<br />
5<br />
Vvedite kolichestvo stolbcov v massive<br />
3<br />
<br />
4     2     -1<br />
-4     1     -5<br />
-3     4     4<br />
1     -2     4<br />
-5     2     -1<br />
<br />
<br />
Net sovpadaushih strok i stolbcov<br />
<br />
Summa elementov na 1 stroke ravna 5<br />
<br />
Summa elementov na 2 stroke ravna -8<br />
<br />
Summa elementov na 3 stroke ravna 5<br />
<br />
Summa elementov na 4 stroke ravna 3<br />
<br />
Summa elementov na 5 stroke ravna -4</p>
<h3>Operations with pointers</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />0x7ffd49c51a98 5<br />0x7ffd49c51a9c 7</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Address = 0x7ffd27502d1c<br />Value = 10</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Value = 10</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />x = 45</p>
<p><strong>Task</strong>:<br />Assign another pointer to a pointer.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Variable a: address=0x7ffd429b8450     value=10<br />
Variable b: address=0x7ffd429b8454     value=2<br />
Variable b: address=0x7ffd429b8454     value=2</p>
<h3>References to pointers</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />p value=10<br />
a value=70<br />
p value=6</p>
<p><strong>Task</strong>:<br />Dereference the pointer.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Value on pointer pa: 25<br />
Value on pointer pb: 25<br />
Value of variable a: 25</p>
<h3>Pointer address</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />address of pointer=0x7ffdf52d77e0<br />
address stored in pointer=0x7ffdf52d77dc<br />
value on pointer=10</p>
<h3>Comparison operations</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />pa (0x7ffd4b788120) is less or equal pb (0x7ffd4b788124)</p>
<h3>Type conversion</h3>
<p><strong>Task</strong>:<br />It is required to assign a pointer of one type the value of a pointer of another type.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />pv=0x7ffda592100f<br />
pd=0x7ffda592100f<br />
pc=N���</p>
<h3>Memory allocation and cleanup</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />10</p>
<h3>Dynamic array</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />0x7ffd58294fac 0x7ffd58294fb0 0x7ffd58294fb4</p>
<h3>Dynamic one-dimensional array</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />2<br />
1<br />
2<br />
<br />
1 2</p>
<h3>Dynamic two-dimensional arrays</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Input a size of a array: 4<br />
Input a element the array [0][0] : 1<br />
Input a element the array [0][1] : 2<br />
Input a element the array [0][2] : 5<br />
Input a element the array [0][3] : 6<br />
Input a element the array [1][0] : 3<br />
Input a element the array [1][1] : 4<br />
Input a element the array [1][2] : 5<br />
Input a element the array [1][3] : 12<br />
Input a element the array [2][0] : 3<br />
Input a element the array [2][1] : 2<br />
Input a element the array [2][2] : 1<br />
Input a element the array [2][3] : 3<br />
Input a element the array [3][0] : 5<br />
Input a element the array [3][1] : 1<br />
Input a element the array [3][2] : 2<br />
Input a element the array [3][3] : 4<br />
1 2 5 6<br />
3 4 5 12<br />
3 2 1 3<br />
5 1 2 4</p>
<h3>Vector Declaration</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />3 4 5</p>
<h3>Vector Methods</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />3<br />1 5 3</p>
<h3>Adding and removing names in the list</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />1-dobavit<br />
2-udalit<br />
3-pechay<br />
1<br />
vvedite imya:Dato<br />
1-dobavit<br />
2-udalit<br />
3-pechay<br />
1<br />
vvedite imya:Datv<br />
1-dobavit<br />
2-udalit<br />
3-pechay<br />
3<br />
1 Dato<br />
2 Datv<br />
1-dobavit<br />
2-udalit<br />
3-pechay</p>
<h3>Creating a two-dimensional array using a vector</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0<br />
0 0 0 0 0 0 0 0 0 0</p>
<p><strong>Task</strong>:<br />Find prime numbers.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />2<br />
3<br />
5<br />
7<br />
9<br />
11<br />
...<br />
9999937<br />
9999943<br />
9999971<br />
9999973<br />
9999991</p>
<h3>Iterating through arrays</h3>
<p><strong>Task</strong>:<br />run through the entire array and access its elements through the indexes.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />1<br />
2<br />
3<br />
4</p>
<p><strong>Task</strong>:<br />Use the loop form to iterate through the array.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />1<br />
2<br />
3<br />
4</p>
<p><strong>Task</strong>:<br />Create an array with arbitrary values, write a program for calculating the minimum and maximum elements of the array.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />max=99<br />min=2</p>
<p><strong>Task</strong>:<br />Output a minimum and another minimum from the array.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />min2=4<br />
k2=2<br />
min=3<br />
k=1</p>
<h3>Two-dimensional arrays</h3>
<p><strong>Task</strong>:<br />Declaring two-dimensional arrays.</p>
<p><strong>Сonclusion</strong>:<br />1 2<br />
3 4</p>
<h3>Multidimensional arrays</h3>
<p><strong>Сonclusion</strong>:<br />1    2<br />
3    4<br />
5    6.</p>
<h3>Number E</h3>
<p><strong>Task</strong>:<br />Print the number E rounded to n digits after the decimal point to the output file. In this problem, we will assume that the number E is exactly equal to 2.7182818284590452353602875.<br />
Input file INPUT.TXT contains an integer n (0 ≤ n ≤ 25). To the output file OUTPUT.TXT output the answer to the problem.<br />
Example<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    0        3<br />
2    25        2.7182818284590452353602875<br />
3    13        2.7182818284590</p>
<p><strong>Сonclusion</strong>:<br />2.72</p>
<h3>Basics Of Object-Oriented Programming</h3>
<h3>Classes</h3>
<p><strong>Task</strong>:<br />Let's develop a program in which we declare the simplest class in which one function will be declared that prints a message</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />website: cppstudio.com<br />theme: Classes and Objects in C + +</p>
<h3>set и get — функции классов</h3>
<p><strong>Task</strong>:<br />Let's modify the CppStudio class so that it can store the date in the format dd.mm.yy. To change and view the date, we implement the set and get functions, respectively.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />day: 10
month: 10<br />
year: 1010<br />
website: cppstudio.com<br />
theme: Classes and Objects in C + +<br />
Date: 10.10.1010</p>
<h3>Constructors</h3>
<p><strong>Task</strong>:<br />Let's add a constructor to it</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />website: cppstudio.com<br />
theme: Classes and Objects in C + +<br />
Date: 10.10.1010</p>
<h3>Brownian Motion 1</h3>
<p><strong>Сonclusion</strong>:<br /><img src="img/601.png"></p>
<h3>Functions</h3>
<h3>Factorial</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />
1<br />
2<br />
6<br />
24<br />
120<br />
720<br />
5040<br />
40320<br />
362880<br />
3628800</p>
<h3>Fibonacci Numbers</h3>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />1</p>
<h3>Function overload</h3>
<p><strong>Task</strong>:<br />Consider the areaRectangle() function, which calculates the area of a rectangle. And let's create another function, assuming that our initial data (the sides of the rectangle) are given in meters and centimeters, for example such: a = 2м 35 см; b = 1м 86 см</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />S1 = 1376<br />S2 = 93916</p>
<h3>Длина отрезка</h3>
<p><strong>Task</strong>:<br />The segment is defined by the coordinates of its end points. It is required to calculate the length of this segment.<br />
Input file INPUT.TXT contains the coordinates of the ends of the segment in the format X1 Y1 X2 Y2 . All coordinates are integers not exceeding 1000 in absolute value. To the output file OUTPUT.TXT output the length of the segment with an accuracy of 10-5.<br />
                        Example<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    3 4 8 4        5</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />99.005050</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />4</p> 
<h3>Gravity Simulation</h3>
<p><strong>Task</strong>:<br />let's write a program that simulates gravity. Let's make a model of the solar system and use OpenGL to display the simulation result on the screen</p>
<h3>Operator Overloading</h3>
<p><strong>Task</strong>:<br />Пример с классом Counter, который представляет секундомер и хранит количество секунд</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />30 seconds</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />30 seconds<br />45</p>
<h3>CPP-Chess1</h3>
<p><strong>Task</strong>:<br />The chess rook moves horizontally or vertically. Given two different cells of the chessboard, determine whether the rook can get from the first cell to the second one in one move. The program receives four numbers from 1 to 8 each, specifying the column number and row number first for the first cell, then for the second cell. The program should output YES if it is possible to get into the second cell from the first cell by the move of the rook, or NO otherwise..</p>
<p><strong>Task</strong>:<br />The chess king moves horizontally, vertically and diagonally, but only by 1 square. Given two different squares of the chessboard, determine whether the king can get from the first square to the second one in one move. The program receives four numbers from 1 to 8 each, specifying the column number and row number first for the first cell, then for the second cell. The program should output YES if it is possible to get to the second square from the first square by the king's move, or NO otherwise.</p>
<p><strong>Task</strong>:<br />The chess bishop moves diagonally. Given two different cells of the chessboard, determine whether the bishop can get from the first cell to the second one in one move. The program receives four numbers from 1 to 8 each, specifying the column number and row number first for the first cell, then for the second cell. The program should output YES if it is possible to get to the second cell from the first cell by the bishop's move, or NO otherwise.</p>
<p><strong>Task</strong>:<br />The chess queen moves diagonally, horizontally or vertically. Given two different cells of the chessboard, determine whether the queen can get from the first cell to the second one in one move. The program receives four numbers from 1 to 8 each, specifying the column number and row number first for the first cell, then for the second cell. The program should output YES if it is possible to get into the second cell from the first cell by the move of the queen, or NO otherwise.</p>
<p><strong>Task</strong>:<br />The chess knight moves with the letter “G” — two squares vertically in any direction and one square horizontally, or vice versa. Given two different squares of the chessboard, determine whether the knight can get from the first square to the second one in one move. The program receives four numbers from 1 to 8 each, specifying the column number and row number first for the first cell, then for the second cell. The program should output YES if it is possible to get to the second square from the first square by the knight's move, or NO otherwise.</p>
<h3>Regular expression methods</h3>
<h3>Method regex_match</h3>
<p><strong>Task</strong>:<br />we need to find a certain piece of text that is enclosed between a colon and a dot in a string variable, we need to find a certain piece of text that is enclosed between a colon and a dot in a string variable "MyEmail:email@host.ru LOL11!!!!" (This applies, for example, when you work with a parser in Internet sites) </p>
<p><strong>Сonclusion</strong>:<br />:email@host.<br />
:<br />
email@host<br />
.</p>
<h3>Method regex_search</h3>
<p><strong>Task</strong>:<br />Replace our mail на ---lulz---</p>
<p><strong>Сonclusion</strong>:<br />MyEmail ---lulz--- ru LOL11!!!!</p>
<h3>Scope And Other Types Of Variables</h3>
<h3>Structures</h3>
<p><strong>Task</strong>:<br />Let 's define the simplest structure</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Name: Tom   Age: 34</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Name: Tom   Age: 22<br />Name: Tom   Age: 31</p>
<p><strong>Task</strong>:<br />Let's create a structure, create a structure object, fill in the structure elements (object data) with values and display these values on the screen.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Владелец квартиры: Денис<br />
Квартира находится в городе: Симферополь<br />
Количество комнат: 5<br />
Стоимость: 150000 $</p>
<p><strong>Task</strong>:<br />Create a TREYGOL structure, the fields of which will be three real arrays of 2 elements each, specifying the X and Y coordinates of the vertices of the triangle on the plane, and one real variable in which the perimeter of the triangle will be located. Create an instance of the structure via the structure name using a tag. In the program, fill in the coordinates with numbers entered from the keyboard, calculate the perimeter and enter the found value in the last field of the structure. Display the value of the last field on the screen.</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Coord 1: 1 1.1<br />
Coord 2: 2 2.2<br />
Coord 3: 3.3 3<br />
P= 2.99816</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Enter X and Y for coord1:<br />
2.5<br />
5.1<br />
2.5     5.1<br />
Enter X and Y for coord2:<br />
4.1<br />
5.5<br />
4.1     5.5<br />
Enter X and Y for coord3:<br />
1.1<br />
2.2<br />
1.1     2.2</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Enter X and Y for coord1:<br />
1.0<br />
1.1<br />
1       1.1<br />
Enter X and Y for coord2:<br />
2.0<br />
2.2<br />
2       2.2<br />
Enter X and Y for coord3:<br />
3.0<br />
3.3<br />
3       3.3<br />
2.72991</p>
<h3>The Basics</h3>
<h3>Arithmetic progression</h3>
<p><strong>Task</strong>:<br />The first and second elements of the arithmetic progression are given. It is required to write a program that will calculate the element of the progression by its number.<br />
Input file INPUT.TXT contains three integers separated by spaces – the first element of the progression A1 (1 ≤ A1 ≤ 1000), the second element of the progression A2 (1 ≤ A2 ≤ 1000), and the number of the required element N (1 ≤ N ≤ 1000). Output file OUTPUT.The TXT must contain a single integer - the nth element of the arithmetic progression.<br />
Example<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    1 5 3        9  </p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />21</p>
<h3>Enya</h3>
<p><strong>Task</strong>:<br />There is unrest now on the stocks of the sixth dock of the intergalactic port of the planet Torn. In just a month, the reconstruction of the small armored corvette "Enya" will be completed. Once again, this warship and its valiant crew will face heavy battles for control of the Sibelius plutonium mines. The work does not stop for a second, laser welding machines work around the clock. The joints of repair robots melt from continuous work. But you can't stay even for a second.<br />And in this turmoil, it is discovered that the thermal protection panels of the corvette again require urgent treatment with thorium sulfide. It is known that 1 nanogram of sulfide is required to process one square meter of the panel. In total, it is necessary to process N rectangular panels measuring A by B meters. You need to calculate as soon as possible how much total sulfide is needed to process all the panels of the "Enii". And don't forget that the panels require processing on both sides. <br />In the input file INPUT.TXT contains 3 positive integers N (N &le; 100), A (A &le; 100), B (B &le; 100).To the output file OUTPUT.TXT it is necessary to output a singular number &ndash; the weight required for processing thorium sulfide in nanograms.<br />Examples<br />INPUT.TXT&nbsp;&nbsp; &nbsp;OUTPUT.TXT<br />5 2 3&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;60<br />14 23 5&nbsp;&nbsp; &nbsp;3220</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />60</p>
<h3>Two bandits</h3>
<p><strong>Task</strong>:<br />Bandits Harry and Larry were relaxing in nature. Having decided to shoot, they put several cans of Coca-Cola on the log (no more than 10). Harry started shooting the cans in order, starting from the leftmost, Larry from the rightmost. At some point it turned out that they shot the same last jar at the same time. <br />Harry was indignant and said that Larry owed him a lot of money for depriving him of the pleasure of shooting several cans. In response, Larry said that Harry owed him even more money for the same reasons. They began to argue who owed whom how much, but none of them remembered how many cans there were in the beginning, and they were reluctant to look for shot cans all over the neighborhood. Each of them remembered only how many cans he shot himself.<br />Use this data to determine how many cans Harry didn't shoot and how many cans Larry didn't shoot.<br />In the single line of the input file INPUT.TXT recorded 2 numbers &mdash; the number of cans shot by Harry and Larry respectively.<br />To the OUTPUT file.TXT output 2 numbers - the number of cans not shot by Harry and Larry, respectively.<br />Example<br />INPUT.TXT&nbsp;&nbsp; &nbsp;OUTPUT.TXT<br />4 7&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;6 3</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />6 3</p>
<h3>Cranes</h3>
<p><strong>Task</strong>:<br />Petya, Katya and Seryozha make cranes out of paper. Together they made S cranes. How many cranes did each child make, if it is known that Petya and Seryozha made the same number of cranes, and Katya made twice as many cranes as Petya and Seryozha together?<br />In the single line of the input file INPUT.TXT recorded one natural number S &ndash; the total number of cranes made (S &lt; 106). To a single line of the output file OUTPUT.TXT you need to print three numbers separated by spaces - the number of cranes that each child made (Petya, Katya and Seryozha).<br />Examples<br />№&nbsp;&nbsp; &nbsp;INPUT.TXT&nbsp;&nbsp; &nbsp;OUTPUT.TXT<br />1&nbsp;&nbsp; &nbsp;6&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;1 4 1<br />2&nbsp;&nbsp; &nbsp;24&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;4 16 4<br />3&nbsp;&nbsp; &nbsp;60&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;10 40 10</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />4 16 4</p>
<h3>Repair</h3>
<p><strong>Task</strong>:<br />Your beloved uncle is the director of a company that makes European repairs in offices. Due to the financial and economic crisis, my uncle decided to optimize his company.There have been rumors for a long time that the foreman in his uncle's firm buys an extra amount of building materials, and uses the remnants to finish his new dacha. Your uncle was interested in how many cans of paint are actually needed to paint the walls in an office with a length of L meters, a width of W and a height of H, if one can is enough for 16m2, and the size of doors and windows can be neglected? There are a lot of orders, so my uncle asked me to write a program that will count all this.<br />Input file INPUT.TXT contains three natural numbers L, W, H &ndash; the length, width and height of the office in meters, respectively, each of which does not exceed 1000. To the output file OUTPUT.TXT output a single integer - the minimum number of cans of paint needed to paint the walls in the office.<br />Examples<br />№&nbsp;&nbsp; &nbsp;INPUT.TXT&nbsp;&nbsp; &nbsp;OUTPUT.TXT<br />1&nbsp;&nbsp; &nbsp;8 8 2&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;4<br />2&nbsp;&nbsp; &nbsp;1 1 3&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;1&nbsp;&nbsp;</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />4</p> 
<h3>The Order Of Code Execution Cycles Branches</h3>
<h3>Salary</h3>
<p><strong>Task</strong>:<br />The department employs 3 employees who receive salaries in rubles. It is required to determine: how much the salary of the highest paid of them differs from the lowest paid.In the single line of the input file INPUT.TXT the salaries of all employees are recorded separated by a space. Each salary is a natural number not exceeding 105. To the output file OUTPUT.TXT it is necessary to print a single integer — the difference between the maximum and minimum wages.<br />
Examples<br />
INPUT.TXT    OUTPUT.TXT<br />
100 500 1000    900<br />
36 11 20    25</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />900</p>
<h3>Game</h3>
<p><strong>Task</strong>:<br />In their free time, classmates Vasya and Petya like to play various logic games: sea battle, tic-tac-toe, chess, checkers and much more. The guys have already tried and played all kinds of classic games of this kind, including computer games. One day they wanted to play something new, but they couldn't find anything suitable. Then Petya came up with the following Guessing game: two participants play. The first one guesses any three-digit number, such that the first and last digits differ from each other by more than one. Next, the player who made the number turns over the hidden number, changing the first and last digits in places, thus getting another number. Then the minimum is subtracted from the maximum of the two numbers obtained. The task of the second player is to guess the number itself by the first digit of the number obtained as a result of subtraction. For example, if Vasya guessed the number 487, then by rearranging the first and last digits he will get the number 784. After which he will have to subtract the number 487 from 784, resulting in the number 297, which Petya must guess by the specified first digit "2" taken from this number. Petya does better than Vasya in math, so he almost always wins in games of this type. But in this case, Petya cheated and specially came up with a game in which he would not lose to Vasya in any case. The fact is that the game invented by Petya has a winning strategy, which is as follows: the desired number is always three-digit and its second digit is always nine, and to get the value of the last one, it is enough to subtract the first one from nine, i.e. in the case discussed above, the last digit is 9-2 = 7. Help Petya to simplify the process of guessing a number by its given first digit by writing the appropriate program.<br />
In a single line of the input file INPUT.TXT a single digit K is given, corresponding to the first digit of the value obtained by Vasya as a result of subtracting the smallest value guessed by Vasya from the largest. To the output file OUTPUT.TXT it is necessary to output the value of the difference received by you.<br />
Examples<br />
INPUT.TXT    OUTPUT.TXT<br />
5        594<br />
2        297<br />
7        792</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />594</p>
<h3>Cake</h3>
<p><strong>Task</strong>:<br />On his birthday, Petya bought a beautiful and delicious cake that had a perfectly round shape. Petya didn't know how many guests would come to his birthday, so he had to develop an algorithm according to which he could quickly cut the cake into N equal parts. It should be noted that cake cuts can be made both in radius and diameter.<br />
Help Petya solve this problem by determining the smallest number of cake cuts for a given number of guests.<br />
Input file INPUT.TXT contains a natural number N – the number of guests, including the hero of the occasion (N ≤ 1000).<br />
To the output file OUTPUT.TXT output the minimum possible number of cake cuts.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    2        1<br />
2    3        3</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />1</p>
<h3>Flowers</h3>
<p><strong>Task</strong>:<br />On Christmas eve, there were three flowers on the window, from left to right: geranium, crocus and violet. Every morning Masha wiped the window and swapped the flower on the right with the central flower. And Tanya watered the flowers every evening and swapped the left and central flower. It is required to determine the order of colors at night after K days.<br />
In the input file INPUT.TXT contains a natural number K – the number of days (K ≤ 1000). To the output file OUTPUT.TXT it is required to print three English letters: "G", "C" and "V" (capital letters without spaces), describing the order of colors on the window after K days (from left to right). Designations: G – geranium, C – crocus, V – violet.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    1        VGC<br />
2    5        CVG</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />CVG</p>
<h3>Programmer's Day</h3>
<p><strong>Task</strong>:<br />Programmer's Day is celebrated on the 255th day of the year (while January 1 is considered the zero day). It is required to write a program that will determine the date (month and number of the Gregorian calendar) on which the programmer's Day falls in a given year.<br />
In the Gregorian calendar , a leap year is:<br />
1) the year whose number is divided entirely by 400<br />
2) a year whose number is divisible by 4, but not divisible by 100<br />
In the single line of the input file INPUT.TXT an integer is written from 1 to 9999 inclusive, which denotes the number of the year of our era. To a single line of the output file OUTPUT.TXT it is necessary to output the date of the Programmer's Day in the format DD/MM/YYYY, where DD is a number, MM is the number of the month (01 — January, 02 — February, ..., 12 — December), YYYY is the year in decimal notation.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    2000        12/09/2000<br />
2    2009        13/09/2009</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />12/09/2000</p>
<h3>Lucky ticket</h3>
<p><strong>Task</strong>:<br />Do you use public transport? You probably paid for the fare and received a ticket with a number. A lucky ticket is a ticket with a six–digit number, where the sum of the first three digits is equal to the sum of the last three. I.e., a ticket with the number 385916 is a lucky one, because 3+8+5=9+1+6. You need to write a program that checks the ticket's happiness.<br />
In a single line of the input file INPUT.TXT a single integer N (0 ≤ N < 10^6) is written.<br />
To the output file OUTPUT.TXT you need to print "YES" if the ticket with the number N is lucky and "NO" otherwise.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    385916        YES<br />
2    123456        NO</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />YES</p>
<h3>Extraterrestrial guests</h3>
<p><strong>Task</strong>:<br />Recently, traces of flying saucers landing were found in Farmer John's field. The Mew Yorc Courier newspaper even wrote about it.<br />
Farmer John's field has the shape of a circle with radius r1. According to journalists, two traces of flying saucers, shaped like circles, were found. One of them had radius r2, the second had radius r3. It is also reported that they were inside Farmer John's field and did not intersect, neither of them was lying inside the other. At the same time, they may have touched each other and/or the border of the field.<br />
Since journalists often tend to exaggerate the scale of events, it is necessary to write a program that will check whether the events described in the newspaper could have taken place.<br />
Input file INPUT.TXT contains three positive integers - r1, r2, r3 (1 ≤ r1, r2, r3 ≤ 109). To the output file OUTPUT.TXT print the word YES if the information published in the newspaper may correspond to the truth, and the word NO otherwise.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    10 10 10    NO<br />
2    10 3 4        YES</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />NO</p>
<h3>More-less</h3>
<p><strong>Task</strong>:<br />In two lines of the input file INPUT.TXT the numbers A and B, which do not exceed 2=109 in absolute magnitude, are recorded. Write to the output file OUTPUT.TXT one character "<" if A < B, ">" if A > B and "=" if A=B.<br />
Examples<br />
INPUT.TXT    OUTPUT.TXT<br />
5        <<br />
7    <br />
-7        ><br />
-12<br />
13        =<br />
13    </p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br /><</p>
<h3>Arithmetic</h3>
<p><strong>Task</strong>:<br />Last year, Vasya went to school and learned to count. This year he studied the multiplication table and now knows how to multiply any numbers from 1 to 10 without errors. Petya's friend told him about the number systems other than decimal. In particular, about binary, octal and even hexadecimal. Now Vasya can easily (but with the help of a piece of paper and a pen) multiply numbers from 1 to 10 in these systems, using the translation from a non-standard system to decimal and back from decimal. For example, if Vasya needs to multiply the numbers 101 and 1001 in binary, then he first translates these numbers into decimal representation as follows:<br />
(101)2=1*2^2+0*2^1+1*2^0=4+0+1=5<br />
(1001)2=1*2^3+0*2^2+0*2^1+1*2^0=8+0+0+1=9<br />
After that, Vasya easily multiplies the numbers 5 and 9 in the decimal system in his mind and gets the number 45. Next, the conversion from decimal to binary is performed. To do this, Vasya divides the number 45 by 2 (the order of the number system), memorizing the remainder of the division, until the number 0 remains as a result.<br />
The answer is made up of the received residues from the division by writing them in reverse order. Thus, Vasya gets the result: (101)2 * (1001)2 = (101)2. But now Vasya is studying the multiplication table of numbers from 1 to 100 in the decimal system, and since it is very difficult to remember such a table, Vasya will have to cram it for a very long time. Make a program for Vasya that will help him test his knowledge.
In the input file INPUT.TXT there are three natural numbers A, B and C separated by a space. Numbers A и B ≤ 10^2, а C ≤ 10^6.<br />
In the output file, you need to output YES if A*B=C and output NO otherwise.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    8 54 432    YES<br />
2    16 19 777    NO</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />YES</p>
<h3>Five five - twenty five</h3>
<p><strong>Task</strong>:<br />Vasya and Petya are in the same class at school. Recently, Petya told Vasya about a clever way to square natural numbers ending in the digit 5. Now Vasya can easily square two-digit (and even some three-digit) numbers ending in 5. The method is as follows: to square a number ending in 5, it is enough to multiply the number obtained from the original by crossing out the last five to the next number in order, then it remains only to attribute "25" to the resulting result on the right. For example, in order to square the number 125, it is enough to multiply 12 by 13 and assign 25, i.e. attributing the number 25 to the number 12 * 13 = 156, we get the result 15625, i.e. 1252 = 15625. Write a program that squares a number ending in 5 so that Vasya can test his skills.<br />
In a single line of the input file INPUT.TXT there is one natural number A, ending in the digit 5, not exceeding 4 * 105. To the output file OUTPUT.TXT output one natural number - A2 without leading zeros.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    5        25<br />
2    75        5625<br />
3    4255        18105025</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />25</p>
<h3>Four - digit palindrome</h3>
<p><strong>Task</strong>:<br />You need to write a program that determines whether a four-digit natural number N is a palindrome, i.e. a number that is equally readable from left to right and from right to left.<br />
Input file INPUT.TXT contains a natural number N (1000 ≤ N ≤ 9999). To the output file OUTPUT.TXT should output the word "YES" if the number N is a palindrome, or "NO" if not.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    6116        YES<br />
2    1231        NO</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />YES</p>
<h3>Binary numbers</h3>
<p><strong>Task</strong>:<br />They say that a bad programmer is someone who believes that there are 1000 bytes in one kilobyte, and a good programmer is someone who believes that there are 1024 meters in one kilometer.<br />
Many people understand this joke, since everyone knows that in the processes related to computer science and computer technology, there are many values expressed by the power of two, that is, numbers of the form 2K, where K is some non–negative integer. Let's call such numbers binary. These are numbers such as 2, 4, 8, 16, 32, etc. Indeed, when it comes to the size of memory or the resolution of the monitor screen, we often come across binary numbers. All this is connected with the principle of storing information in computer memory.<br />
An integer N is given. It is required to determine whether it is binary.<br />
Input file INPUT.TXT contains a single integer N that does not exceed 10000 in absolute value. To the output file OUTPUT.TXT output YES if the given number is binary, and NO otherwise.<br />
Examples<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    1024        YES<br />
2    23        NO</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />NO</p>
<h3>U-turn</h3>
<p><strong>Task</strong>:<br />Given a natural number N and a sequence of N elements. It is required to output this sequence in reverse order.<br />
In the first line of the input file INPUT.TXT the natural number N (N ≤ 103) is written. In the second line, separated by a space, there are N integers, modulo not exceeding 103 - elements of the sequence. To the output file OUTPUT.TXT output the specified sequence in reverse order.<br />
Example<br />
№    INPUT.TXT    OUTPUT.TXT<br />
1    3<br />
    1 2 3        3 2 1</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />3 2 1</p>
<h3>Factorial</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Введите число: 5<br />5! = 120</p>
<h3>Units</h3>
<p><strong>Task</strong>:<br />In computer science lessons, you were probably taught to translate numbers from one number system to another and perform other similar operations. It's time to demonstrate this knowledge. Find the number of units in the binary notation of a given number.<br />In the input file INPUT.TXT the integer n is written (0 &le; n &le; 2&times;10^9). To a single line of the output file OUTPUT.TXT it is necessary to output a single integer - the number of binary units in the record of the number n.<br />Examples<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2<br />2&nbsp;&nbsp;&nbsp; 7&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3</p>
<p><strong>Сonclusion</strong>:<br />$ cat output.txt<br />3</p>
<h3>Declension of words</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />Введите кoличество пирожков: 4353453<br />Я собираюсь съесть 4353453 пирожка.</p>
<h3>Generating pseudorandom numbers</h3>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />1257358393<br />$ ./project<br />353351443</p>
<h3>While</h3>
<p><strong>Task</strong>:<br />print the squares of numbers from 1 to 9</p>
<p><strong>Сonclusion</strong>:<br />$ ./project<br />1 * 1 = 1<br />
3 * 3 = 9<br />
5 * 5 = 25<br />
7 * 7 = 49<br />
9 * 9 = 81</p>
<h3>For</h3>
<p><strong>Task</strong>:<br />print the squares of numbers from 1 to 9</p>
<p><strong>Сonclusion</strong>:<br />1 * 1 = 1<br />
2 * 2 = 4<br />
3 * 3 = 9<br />
4 * 4 = 16<br />
5 * 5 = 25<br />
6 * 6 = 36<br />
7 * 7 = 49<br />
8 * 8 = 64<br />
9 * 9 = 81</p>
<p><strong>Сonclusion</strong>:<br />1    2    3    4    5    6    7    8    9<br />    
2    4    6    8    10    12    14    16    18<br />    
3    6    9    12    15    18    21    24    27<br />    
4    8    12    16    20    24    28    32    36<br />    
5    10    15    20    25    30    35    40    45<br />    
6    12    18    24    30    36    42    48    54<br />    
7    14    21    28    35    42    49    56    63<br />    
8    16    24    32    40    48    56    64    72<br />    
9    18    27    36    45    54    63    72    81</p>
<h3>do,while</h3>
<p><strong>Сonclusion</strong>:<br />6<br />
5<br />
4<br />
3<br />
2<br />
1</p>
<h3>Operator continue</h3>
<p><strong>Task</strong>:<br />calculate the sum of only odd numbers from a certain range</p>
<p><strong>Сonclusion</strong>:<br />result = 25</p>
<h3>Dollars and euros</h3>
<p><strong>Сonclusion</strong>:<br />1 39.47 53.21<br />
2 78.94 106.42<br />
3 118.41 159.63<br />
4 157.88 212.84<br />
5 197.35 266.05<br />
6 236.82 319.26<br />
7 276.29 372.47<br />
8 315.76 425.68<br />
9 355.23 478.89<br />
10 394.7 532.1<br />
11 434.17 585.31<br />
12 473.64 638.52<br />
13 513.11 691.73<br />
14 552.58 744.94<br />
15 592.05 798.15<br />
16 631.52 851.36<br />
17 670.99 904.57<br />
18 710.46 957.78<br />
19 749.93 1010.99<br />
20 789.4 1064.2</p>
<h3>Basketball</h3>
<p><strong>Task</strong>:<br />The results of each of the 4 quarters of the basketball meeting are known. It is necessary to determine the winner of the match. The team with the most points during the whole match wins.<br />Input file INPUT.TXT contains 4 lines, each line contains two integers a and b - the final score in the corresponding quarter. a &ndash; the number of points scored in a quarter by the first team, b &ndash; the number of points scored in a quarter by the second team. (0 &le; a,b &le; 100). To the output file OUTPUT.TXT output the number of the winning team, in case of a draw, output "DRAW".<br />Examples<br />INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />26 17<br />13 15<br />19 11<br />14 16&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br />14 15<br />17 18<br />20 20<br />15 17&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2<br />15 16<br />18 17<br />10 12<br />14 12&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; DRAW</p>
<p><strong>Сonclusion</strong>:<br />1</p>
<h3>Coins</h3>
<p><strong>Task</strong>:<br />There are n coins on the table. Some of them are tails up, and some are coats of arms. Determine the minimum number of coins that need to be turned over so that all the coins are turned up with the same side.<br />In the first line of the input file INPUT.TXT the natural number N (1 &le; N &le; 100) is written &ndash; the number of coins. Each of the following N lines contains one integer - 1 if the coin is tails up and 0 if the coat of arms is up.<br />To the output file OUTPUT.TXT output the minimum number of coins to flip.<br />Example<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 5<br />&nbsp;&nbsp;&nbsp; 1<br />&nbsp;&nbsp;&nbsp; 0<br />&nbsp;&nbsp;&nbsp; 1<br />&nbsp;&nbsp;&nbsp; 1<br />&nbsp;&nbsp;&nbsp; 0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2</p>
<p><strong>Сonclusion</strong>:<br />2</p>
<h3>Bus tour</h3>
<p><strong>Task</strong>:<br />The Organizing Committee of the Moscow City Olympiad decided to organize a sightseeing tour of Moscow for the participants of the Olympiad. To do this, a double-decker bus was ordered (there are quite a lot of participants in the Olympics and they do not fit into a regular one) with a height of 437 centimeters. There are N bridges on the excursion route. The jury and the organizing committee of the Olympiad are very concerned that a high double-decker bus may not pass under one of them. They managed to find out the exact height of each of the bridges. A bus can pass under a bridge if and only if the height of the bridge exceeds the height of the bus.<br />Help the organizers find out if the tour will end safely, and if not, then establish where the accident will occur.<br />In the input file INPUT.TXT first contains the number N (1 &le; N &le; 1000). Then there are N natural numbers that do not exceed 10000 - the height of the bridges in centimeters in the order in which they meet on the bus path. To a single line of the output file OUTPUT.TXT you need to print the phrase "No crash" if the tour ends safely. If an accident occurs, then you need to output the message "Crash k", where k is the number of the bridge where the accident will occur. Output phrases without quotes with exactly one space inside.<br />Examples<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 1<br />&nbsp;&nbsp;&nbsp; 763&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; No crash<br />2&nbsp;&nbsp;&nbsp; 3<br />&nbsp;&nbsp;&nbsp; 763 245 113&nbsp;&nbsp;&nbsp; Crash 2<br />3&nbsp;&nbsp;&nbsp; 1<br />&nbsp;&nbsp;&nbsp; 437&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Crash 1</p>
<p><strong>Сonclusion</strong>:<br />Crash 2</p>
<h3>Census</h3>
<p><strong>Task</strong>:<br />There are N tenants living in the house. One day they decided to conduct a census of all the tenants of this house and compiled a list in which they indicated the age and gender of each tenant. It is required to find the number of the oldest male resident.<br />In the input file INPUT.TXT the first line contains a natural number N &ndash; the number of tenants (N&le; 100). The next N lines contain information about all residents: each line contains two integers: V and S &ndash; age and gender of the person (1 &le; V &le; 100, S &ndash; 0 or 1). The value S=1 corresponds to the male gender, and S=0 corresponds to the female gender. Output file OUTPUT.The TXT must contain the number of the oldest man in the list. If there are several such tenants, then the smallest number should be displayed. If there are no male residents, then output -1.<br />Examples<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 4<br />&nbsp;&nbsp;&nbsp; 25 1<br />&nbsp;&nbsp;&nbsp; 70 1<br />&nbsp;&nbsp;&nbsp; 100 0<br />&nbsp;&nbsp;&nbsp; 3 1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2<br />2&nbsp;&nbsp;&nbsp; 2<br />&nbsp;&nbsp;&nbsp; 25 0<br />&nbsp;&nbsp;&nbsp; 25 1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2</p>
<p><strong>Сonclusion</strong>:<br />2</p>
<h3>Watermelons</h3>
<p><strong>Task</strong>:<br />Ivan Vasilyevich came to the market and decided to buy two watermelons: one for himself and the other for his mother-in-law. It is clear that you need to choose a heavier watermelon for yourself, and a lighter one for your mother-in-law. But here's the problem: there are too many watermelons and he does not know how to choose the lightest and heaviest watermelon? Help him!<br />In the first line of the input file INPUT.TXT one number is set N &ndash; the number of watermelons. The second line contains N numbers separated by a space. Here, each number is the mass of the corresponding watermelon. All numbers are natural and do not exceed 30,000. To the output file OUTPUT.TXT you need to print two numbers separated by a space: the mass of the watermelon that Ivan Vasilyevich will buy and the mass of the watermelon that he will buy for himself.<br />Example<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 5<br />&nbsp;&nbsp;&nbsp; 5 1 6 5 9&nbsp;&nbsp;&nbsp; 1 9</p>
<p><strong>Сonclusion</strong>:<br />1 9</p>
<h3>NEERC</h3>
<p><strong>Task</strong>:<br />In the semifinals of the NEERC Student Programming World Championship (http://neerc.ifmo.ru ) teams from n institutes participate. Participants for the competition are distributed in k halls, each of which has a size sufficient to accommodate all teams from all institutes. At the same time, according to the rules of the competition, no more than one team from the institute can be in one hall.<br />Many institutes have already applied to participate in the semifinals. The organizing committee of the semifinal wants to allow the maximum possible number of teams to participate. At the same time, of course, it should be possible to seat them in the halls without violating the rules.<br />Write a program that determines the maximum number of teams that can be allowed to participate in the semifinals.<br />The first line of the input file is INPUT.TXT contains the number n - the number of institutions that have submitted applications. The second line of the input file contains n numbers a1, &hellip;, an (ai is the number of commands declared from the institute number i). The last line of the input file contains the number k - the number of halls in which the competitions are held. All numbers in the input file are integers, positive and do not exceed 10000. To the output file OUTPUT.TXT output a single integer - the answer to the problem.<br />Examples<br />№&nbsp;&nbsp;&nbsp; INPUT.TXT&nbsp;&nbsp;&nbsp; OUTPUT.TXT<br />1&nbsp;&nbsp;&nbsp; 3<br />&nbsp;&nbsp;&nbsp; 1 2 4<br />&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 6<br />2&nbsp;&nbsp;&nbsp; 3<br />&nbsp;&nbsp;&nbsp; 1 2 4<br />&nbsp;&nbsp;&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 7</p>
<p><strong>Сonclusion</strong>:<br />2</p>
<p><strong>Manual</strong>:<br />I created programs in the terminal Ubuntu 20.04.</p>
<ol>
<li>To work in the system, you need to install the C++ compiler in the terminal in this way:<br />as@as:$ sudo apt install build-essential<br />as@as:$ g++ --version<br />&nbsp;&nbsp; &nbsp;g++ (Ubuntu 9.3.0-10ubuntu2) 9.3.0<br />&nbsp;&nbsp; &nbsp;Copyright (C) 2019 Free Software Foundation, Inc.<br />&nbsp;&nbsp; &nbsp;This is free software; see the source for copying conditions.&nbsp; There is NO<br />&nbsp;&nbsp; &nbsp;warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.</li>
<li>To start the program, you need to enter the following commands in the terminal:<br />$ vim main.cpp<br />$ g++ main.cpp -o main<br />$ ./main<br />Или запустить так:<br />$ vim hello.cc<br />$ g++ -o hello hello.cc<br />$ ./hello</li>
<li>You can run the program in the linux systems terminal using the following commands<br />$ sudo apt install build-essential<br />$ ls<br />&nbsp;&nbsp;&nbsp; main.cpp<br />$ g++ main.cpp -o main -lglut -lGLU -lGL<br />$ ls<br />&nbsp;&nbsp;&nbsp; main&nbsp; main.cpp<br />$ ./main</li>
<li>A cross-platform free IDE for development in C, C++ and QML - QT creator must be installed. I recommend installing the IDE in Windows using the following link: <a href="https://www.youtube.com/watch?v=2Scwa8KuNQU&amp;t=79s" target="_blank">youtube</a></li>
<li>after installation - run QT creator - open the project with the extension .pro - in the projects tab, click on launch - put a mark on run in the terminal - in the editor tab, run the project</li>
</ol>
<p><strong>Source</strong>:</p>
<ol>
<li><a href="https://www.youtube.com/playlist?list=PL30625C8F5ADD5BB4" target="_blank">youtube</a></li>
<li><a href="https://codetown.ru/category/plusplus" target="_blank">codetown</a></li>
<li><a href="http://cppstudio.com/cat/274/" target="_blank">cppstudio</a></li>
<li><a href="https://acmp.ru/index.asp?main=tasks" target="_blank">acmp</a></li>
<li><a href="https://www.youtube.com/playlist?list=PLlqeq-isbP97wcBzq4YhOfaEHY59gGyQx" target="_blank">youtube</a></li>
<li><a href="https://www.youtube.com/playlist?list=PLqs2IDfjfprE0cYdFi2exaCzOV22yk9Dl" target="_blank">youtube</a></li>
<li><a href="https://metanit.com/cpp/tutorial/" target="_blank">metanit</a></li>
</ol>