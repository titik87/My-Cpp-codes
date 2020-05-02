#include<iostream>
using namespace std;

char k[10][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void key(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<", ";
		return;
	}
	int digit = in[i]-'0';
	for(int t=0;k[digit][t]!='\0';t++){
		out[j]=k[digit][t];
		key(in,out,i+1,j+1);
	}

}
int main(int argc, char const *argv[])
{
	char in[100];
	char out[100];
	cout<<"Enter the phone number,(Please don't enter a number more than a 100 digits,\n also, for really good visualisation, enter a 2 or 3 digit number)"<<endl;
	cin>>in;
	key(in,out,0,0);	
	return 0;
}