#include <stdio.h>

//�׳�
int main() {
	int n;
	scanf("%d", &n);
	int fact = 1;
	int i = n;
	/*while (i <= n) {
		fact *= i;
		i++;
	}*/
	//for (int i = 2; i <= n; i++) {
	//	fact *= i;
	//}
	//for(i=n;i>1;i--){
	//	fact*=i;
	//}
	for (; n > 1; n--) {//n=n����ʡ�� �������ʽ����ʡ��ĳһ��
		fact *= n;
	}
	printf("%d!=%d\n", i, fact);
	return 0;
}
