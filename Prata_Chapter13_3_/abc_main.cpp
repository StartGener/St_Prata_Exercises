//#include "abc.h"
#include "bc.h"
#include "ac.h"

int main(){
	
ABC* op[4];
int i;
int k;

for(i=0;i<4;i++){
	std::cout<<"Enter 1 if BC or 2 if AC \n";
	std::cin>>k;
	
	if(k==1)
	*(op+i)=new BC();
	else
	*(op+i)=new AC();
	
}
for(i=0;i<4;i++){
	delete op[i];
}
return 0;

}
