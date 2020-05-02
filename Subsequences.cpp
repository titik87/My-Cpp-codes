#include <iostream>
using namespace std;
int count =0;
void subseq(char *in, char*out, int i, int j){
	if(in[i]=='\0'){
		out[j]= '\0';
		cout<<out;
        if(out[0]=='\0') cout<<"."<<endl;
        else if((count+1)%8==0) cout<<endl;
        else cout<<", ";
    count++;
		return;
	}
	out[j] = in[i];
	subseq(in,out,i+1,j+1);
	subseq(in,out,i+1,j);
	return;
}
int main(int argc, char const *argv[])
{
	char in[1000];
	char out[1000];
	cin>>in;
	subseq(in,out,0,0);
    cout<<"Total subsequences printed are "<<count;
	return 0;
}
