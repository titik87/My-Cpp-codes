#include<iostream>
using namespace std;

void permut(char*in,char*out,int i,int j){
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<", ";
		return;
	}
	for(int t=i;in[t]!='\0';t++){
		swap(in[t],in[i]);
		out[j]=in[i];
		permut(in,out,i+1,j+1);
		swap(in[t],in[i]);
	}
}
int main(int argc, char const *argv[])
{
	char in[100];
	char out[100];
	permut(in,out,0,0);
	return 0;
}