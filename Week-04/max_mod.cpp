#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int l,r;
		scanf("%d%d",&l,&r);
		int b = (r+1)/2;
		int ans = -1;
		if(b >= l)
			ans = max(ans,b-1);
		int b2 = max((r+1)/2 + 1,l);
		ans = max(ans,r-b2);
		printf("%d\n",ans);
	}
	return 0;
}
