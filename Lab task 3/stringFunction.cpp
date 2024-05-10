#include <iostream>
#include <cstring> 
using namespace std; 
int main () {
    
char strl[10] = "Hello"; 
char str2[10] = "World";
char str3[10];
int len ; 

// copy strl into str3 
strcpy( str3, strl);

cout << "strcpy( str3, strl) : " << str3 << endl; 

// concatenates strl and str2 
strcat( strl, str2); 

cout << "strcat( strl, str2): " << strl << endl; 

// total lenghth of strl after concatenation len = strlen(strl); 
cout << "strlen(strl) : " << len << endl; 

return 0; 
}
