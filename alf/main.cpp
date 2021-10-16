#include <iostream>
#include <array>

using namespace std;
void a(array<string, 6> &s){
    s[0]+=  "  --  ";
    s[1]+=  "/    \\";
    s[2]+=  "|   ||";
    s[3]+=  "||==||";
    s[4]+=  "||  ||";
    s[5]+=  "||  ||";

}

void b(array<string, 6>&s)
{
    s[0] +=" |--\\  ";
    s[1] +=" |   | ";
    s[2] +=" |   | ";
    s[3] +=" |---\\ ";
    s[4] +=" |    |";
    s[5] +=" |____/";
}
void c(array<string, 6> &s){
    s[0] +="  ====== ";
    s[1] +=" /       ";
    s[2] +="|        ";
    s[3] +="|        ";
    s[4] +=" \\      ";
    s[5] +="  ====== ";
}
void i(array<string, 6> &s){
    s[0] +="  ====== ";
    s[1] +="    ||   ";
    s[2] +="    ||   ";
    s[3] +="    ||   ";
    s[4] +="    ||   ";
    s[5] +="  __||__ ";
}
int main()
{
    array<string, 6> screen;
    a(screen);
    b(screen); 
    c(screen); 
    i(screen);
    for (int i=0;i<6;i++)
        cout<<screen[i]<< endl;
    return 0;
}

