#include <stdio.h>

int main(void) {
	int no;
	int ans = 7;

	printf("0〜9の整数を当ててください。\n\n");

	do {
		printf("いくつかな：");
		scanf("%d", &no);
		
		if (no > ans) {
			printf("もっと小さいよ。\n");
		} else if (no < ans) {
			printf("もっと大きいよ。\n");
		};
	} while (no != ans);

	printf("正解です。\n");

	return 0;
}
