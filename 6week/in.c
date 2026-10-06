#include <stdio.h>

// 삽입정렬(기출가능성)
int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    printf("정렬 전: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    // 첫 번째 숫자(인덱스 0)는 이미 정렬되어 있다고 가정하기 때문에, 두 번째(인덱스 1)부터 시작
    for (int i = 1; i < n; i++) {
        
        // 자리를 찾아줄 숫자를 'key'라는 주머니에 따로 빼두기
        int key = arr[i]; 
        
        // j는 key의 '바로 앞자리'부터 시작해서 맨 앞(0)까지 거꾸로 되돌아가며 비교할 때 사용
        int j = i - 1;

        // j가 0보다 크거나 같고(배열 범위를 벗어나지 않고),
        // 앞쪽에 있는 숫자가 내가 가진 key보다 크다면? -> 뒤로 한 칸씩 비켜
        while (j >= 0 && arr[j] > key) {
            
            // 더 큰 숫자를 뒤쪽(오른쪽)으로 한 칸 밀어내기
            arr[j + 1] = arr[j]; 
            
            // j를 1 감소시켜서, 그보다 더 앞에 있는 숫자와도 비교를 실행
            j--; 
        }

        // while 반복문이 끝났다는 것은 더 이상 key보다 큰 숫자가 없거나 맨 앞까지 도달했다는 뜻.
        // 앞쪽 숫자들을 다 밀어내서 생긴 빈자리(j + 1)에 따로 빼두었던 key를 삽입
        arr[j + 1] = key;

        // (참고용)
        printf("%d번째 위치의 숫자(%d) 삽입 후: ", i, key);
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