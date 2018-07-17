#include<iostream>
using namespace std;

int main(int argc,char *argv[])

{
if(argc!=2)
{
cout<<"forgot to type....";
exit(0);
}
cout<<"hell0 "<<argv[1];
return 0;
}


/*
output
g++ jas10.cpp
[student@intlab37-20 ~]$ ./a.out
forgot to type....[student@intlab37-20 ~]$ ./a.out Jasmine....
hell0 Jasmine....[student@intlab37-20 ~]$ 
*/
