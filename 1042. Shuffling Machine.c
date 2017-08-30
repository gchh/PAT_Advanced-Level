#include <stdio.h>
#define MAX 54
void Shuffle(int* card, int* order) {
	int shuffledCard[MAX];
	for(int i = 0; i < MAX; ++i)
		shuffledCard[order[i] - 1] = card[i];
	for(int i = 0; i < MAX; ++i)
		card[i] = shuffledCard[i];
	return;
}
void Output(int* card) {	//将整数转化为对应的卡牌并输出 
	for(int i = 0; i < MAX; ++i) {
		if(i)
			printf(" ");
		if(card[i] / 13 == 0)
			printf("S%d", card[i] % 13 + 1);
		else if(card[i] / 13 == 1)
			printf("H%d", card[i] % 13 + 1);
		else if(card[i] / 13 == 2)
			printf("C%d", card[i] % 13 + 1);
		else if(card[i] / 13 == 3)
			printf("D%d", card[i] % 13 + 1);
		else
			printf("J%d", card[i] % 13 + 1);
	} 
	return;
}
int main() {
//	freopen("dsin", "r", stdin);
	int card[MAX];
	for(int i = 0; i < MAX; ++i)	//初始化卡牌顺序 
		card[i] = i;
	int k;				//洗牌次数 
	scanf("%d", &k);
	int order[MAX] = {};	//洗牌规则 
	for(int i = 0; i < MAX; ++i)
		scanf("%d", &order[i]);
	while(k--) 
		Shuffle(card, order);		//洗牌 
	Output(card);		//输出 
	
	return 0;
} 
