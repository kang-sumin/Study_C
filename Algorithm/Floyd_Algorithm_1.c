//Floyd Algorithm Homework_#2 , path 없음

#include <stdio.h>

#define MIN(a,b) a<b?a:b //MIN함수 삼항연산으로 정리함, 최소값 반환함
#define MAX_VT 6 //정점의 개수
#define INF 99999999 //infinity 무한대

int D[MAX_VT][MAX_VT] = { 0 };	//D 배열 생성
int P[MAX_VT][MAX_VT] = { 0 };	//P 배열 생성


//출력함수
void show(int k, int table[MAX_VT][MAX_VT],char table_name) {

	int i, j;

	printf("\n ==================== [%c (%d)] ====================\n", table_name, k);
	printf("\t%d\t%d\t%d\t%d\t%d\t%d\t\n",1,2,3,4,5,6);
	printf("     ---------------------------------------------\n");
	for (i = 0; i < MAX_VT; i++) {
		printf("  %d |\t",i+1);
		for (j = 0; j < MAX_VT; j++) {
			if (table[i][j] == INF) {
				//edge없는 곳 무한대 표시
				printf("∞\t");
			}
			else {
				printf("%d\t", table[i][j]);
			}
		}
		printf("\n");
	}
	printf(" ==================================================\n\n");
}


//floyd 함수
void floyd(int n, const int W[MAX_VT][MAX_VT], int D[MAX_VT][MAX_VT], int P[MAX_VT][MAX_VT]) {
	
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			//모든 path를 0으로 초기화함
			P[i][j] = 0;
		}
	}
	
	D = W;	//D(0)=W랑 같음

	//D(0),P(0)테이블 출력
	show(0, D, 'D');
	show(0, P, 'P'); 

	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (D[i][k] + D[k][j] < D[i][j]) {
					//최단경로 중간에 정점이 존재하는 경우 가장큰 정점 기록
					//k가 0으로 시작하기때문에 k+1 해줌
					P[i][j] = k+1;

					//중간 정점을 거쳐서 가는 거리가 최소이면 바꿔줌
					D[i][j] = D[i][k] + D[k][j];

				}
			}
		}
		//D,P 테이블 출력
		show(k + 1, D, 'D');
		show(k + 1, P, 'P');
	}

}




int main() {

	//W=D(0)와 같음, D(0)로 초기화 해줌
	int W[MAX_VT][MAX_VT] = {{0,7,INF,11,INF,INF},
							 {3,0,INF,INF,17,INF},
							 {INF,6,0,INF,INF,INF},
							 {INF,INF,INF,0,9,INF},
							 {INF,5,15,16,0,2},
							 {INF,INF,11,INF,8,0}};

	floyd(MAX_VT, W, D, P);


	return 0;
}
