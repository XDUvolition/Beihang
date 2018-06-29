/*
关键字if，while，for对应的位置，按照关键字出现的顺序依次输出。输出格式为：关键字，后跟冒号，然后是出现的位置。扫描到关键字就输出，每个输出占一行。

样例输入：

#include <stdio.h> int main() {int i = 0; if(i == 0) printf("YES"); return 0;}

#include <stdio.h> int main() {int ifwhile = 0; int forif = 1;char if_for_while = 'a';char *str = "while"; while(ifwhile == 0) {ifwhile = 1;forif = 0;} if(forif == 0) {if_for_while = 'b';} if(ifwhile == 1) {if_for_while = 'c';} return 0;}

样例输出：

if:43

while:88

if:133

if:170
*/
