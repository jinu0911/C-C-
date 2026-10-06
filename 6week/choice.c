#include <stdio.h>

// 선택정렬(기출가능성)
int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5; // 배열에 들어있는 숫자의 개수

    printf("정렬 전: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // i는 '현재 채워넣을 자리(인덱스)'를 의미
    // 마지막 자리는 남은 하나가 자동으로 들어가므로 n-1까지만 반복
    for (int i = 0; i < n - 1; i++) {
        
        // 현재 자리(i)에 있는 값을 가장 작다고 가정하고 그 위치를 기억
        int min_index = i; 
        
        // j는 현재 자리(i) 다음부터 끝까지 탐색하면서 진짜 제일 작은 값을 찾는 역할
        for (int j = i + 1; j < n; j++) {
            // 우리가 기억하고 있던 가장 작은 값보다 더 작은 값을 발견시
            if (arr[j] < arr[min_index]) {
                // 그 값의 위치(인덱스)로 min_index를 업데이트
                min_index = j; 
            }
        }
        
        // 값을 바꿀 때는 temp라는 빈 변수가 필요
        int temp = arr[i];           // i자리의 값을 temp(빈 컵)에 잠시 보관
        arr[i] = arr[min_index];     // 빈 i자리에 가장 작은 값을 이동
        arr[min_index] = temp;       // 원래 자리에 temp 값 삽입
        
        // (참고용)
        printf("%d번째 자리 정렬 후: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("\n최종 정렬 완료: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}