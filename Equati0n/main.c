#include <stdio.h>
#include <math.h>

double discrim(double a, double b, double c) {
    return b * b - 4 * a * c;
}

void calculate(double a, double b, double c) {
    double discrimResult = discrim(a, b, c);
    if (a == 0) {
        printf("방정식의 근: %f\n", -c / b);
    } else {
        if (discrimResult > 0) {
            double e;
            e = sqrt(discrimResult);
            printf("방정식의 두 근: %f, %f\n", (-b + e) / (2 * a), (-b - e) / (2 * a));
        } else if (discrimResult == 0) {
            printf("방정식의 한 근: %f\n", (-b) / (2 * a));
        } else {
            double f1, f2;
            
            f1 = -b / (2 * a);
            f2 = sqrt(-discrimResult) / 2;
            
            if (f2 == 1) {
                printf("방정식의 두 근: %f±i\n", f1);
            } else {
                printf("방정식의 두 근: %f±(%f)i\n", f1, f2);
            }
        }
    }
}

int main() {
    double a, b, c;
    
    printf("--- 방정식 계산기 ---\n");
    
    printf("ax² + bx + c = 0 형식의 방정식을 풉니다.\n");
    printf("일차방정식 계산을 위해서는 a의 값을 0으로 설정해 주세요.\n\n");
    
    printf("a를 입력하세요. : ");
    scanf("%lf", &a);
    printf("b를 입력하세요. : ");
    scanf("%lf", &b);
    printf("c를 입력하세요. : ");
    scanf("%lf", &c);
    
    calculate(a, b, c);
    
    return 0;
}
