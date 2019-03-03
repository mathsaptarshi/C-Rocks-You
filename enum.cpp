#include<stdio.h>
enum week {Monday=5,Tuesday,Wednesday,Thursday,Friday=7,Saturday,Sunday};

int main(){
	enum week day;
	day=Thursday;
	printf("%d\n",day);
	return 0;
}
