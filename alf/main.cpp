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

void k(array<string, 6> &s){
    s[0] +=" || //  ";
    s[1] +=" ||//   ";
    s[2] +=" ||     ";
    s[3] +=" ||===  ";
    s[4] +=" ||  |  ";
    s[5] +=" ||  |  ";
}
void m(array<string, 6> &s){
    s[0] +="==  == ";
    s[1] +="||  || ";
    s[2] +="||__|| ";
    s[3] +="|    | ";
    s[4] +="|    | ";
    s[5] +="|    | ";
}

void o(array<string, 6> &s){
    s[0] +="  ====== ";
    s[1] +=" |     | ";
    s[2] +=" |     | ";
    s[3] +=" |     | ";
    s[4] +=" |     | ";
    s[5] +=" ======  ";
}

void q(array<string, 6> &s){
    s[0] +="  ====== ";
    s[1] +=" |     | ";
    s[2] +=" |     | ";
    s[3] +=" |     | ";
    s[4] +=" |_____| ";
    s[5] +="     ||_ ";
}

int main()
{
    array<string, 6> screen;
    a(screen);
    b(screen); 
    c(screen); 
    i(screen);
    k(screen); 
    m(screen); 
    o(screen); 
    q(screen); 
    for (int i=0;i<6;i++)
        cout<<screen[i]<< endl;
    return 0;
}

