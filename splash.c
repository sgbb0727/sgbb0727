#include <stdio.h>
#include <string.h>

int main() {
    short name[50];  // 이름을 저장할 배열
    short date[11];  // 날짜를 저장할 배열 (yyyy-mm-dd 형식)

   
    printf("현재 날짜를 'yyyy-mm-dd' 형식으로 입력하세요: ");
    scanf("%s", date); 

    
    printf("당신의 이름을 입력하세요: ");
        scanf("%s", name);  

  


    // 입력 확인 메시지 출력
    printf("**입력이 정상적으로 처리되었습니다.**\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    // 스플래시 화면 출력
    printf("                         [마그라테아 ver 0.1]\n");
    printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들어내는 곳 마그라테아,\n");
    printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빚는 곳,\n");
    printf("           마그라테아에 오신 걸 환영합니다.\n");

    // 입력받은 이름과 날짜 출력
    printf("================================================================================\n");
    printf("[사용자]: %s                                   [실행 시간]: %s\n", name, date);    //사용자 영어는 입력되는데 한글이 안됨 오류인거 같음.  
    printf("================================================================================\n");

    return 0;
}
