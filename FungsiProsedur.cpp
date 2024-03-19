/*fungsi dan prosedur
fungsi = dapat menerima input dan menghasilkan output. main()
prosedur = fungsi yang tidak menerima input/hanya berisi perhitungan tanpa input. void [nama fungsi]()*/

#include <iostream>
using namespace std;

 //membuat nama fungsi add
 void add(int a, int b) //berisi parameter int variabel a dan b
 {
 	printf("%d + %d =%d\n", a, b, a+b);
 }
 
 int main() // ini adalah program utama
 {
 	add(1, 4);
 	add(8, 2);
    add(3, 2);
    return 0;
 }
