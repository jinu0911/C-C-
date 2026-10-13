    #include <stdio.h>

int main() {
    int value = 10;
    int *pnum;

    pnum = &value;
    int result;

    value = 10;
    result = (*pnum)++;
    printf("(*pnum)++  -> 반환된 결과: %d, 연산 후 변수 값: %d\n", result, *pnum);

    value = 10;
    result = (*pnum) + 1;
    printf("(*pnum)+1  -> 반환된 결과: %d, 연산 후 변수 값: %d\n", result, *pnum);

    value = 10;
    *pnum += 1;
    printf("*pnum+=1   -> 연산 후 변수 값: %d\n", *pnum);

    value = 10;
    (*pnum) += 1;
    printf("(*pnum)+=1 -> 연산 후 변수 값: %d\n", *pnum);

    value = 10;
    *pnum = *pnum + 1;
    printf("*pnum=*pnum+1 -> 연산 후 변수 값: %d\n", *pnum);

    value = 10;
    result = ++*pnum;
    printf("++*pnum    -> 반환된 결과: %d, 연산 후 변수 값: %d\n", result, *pnum);

    value = 10;
    result = ++(*pnum);
    printf("++(*pnum)  -> 반환된 결과: %d, 연산 후 변수 값: %d\n", result, *pnum);

    return 0;
}

/* (*p)++: 현재 값을 반환하고 이후 값을 증가시킨다.
 * (*p)+1: 값을 변경하지 않고 1만큼 더한 결과를 반환한다.
 * *p+=1: 값을 1 증가시키고 결과를 다시 저장한다.
 * (*p)+=1: *p+=1과 동일하다.   *p=*p+1: 값을 1 더하고 결과를 저장한다.
 * ++*p: 값을 먼저 1 증가시키고 증가된 값을 반환한다.
 * ++(*p): ++*p와 동일하며, 연산 순서를 명확히 표현한 것이다. */ 