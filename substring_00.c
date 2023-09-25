#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    int state=0;
    int length = strlen(str);

    for(int i=0;i<=length;i++){
        if(str[i]=='0' && state==0){
            state=1;
        }else if(str[i]=='1' && state==0){
            state=0;
        }else if(str[i]=='1' && state==1){
            state=0;
        }else if(str[i]=='0' && state==1){
            state=2;
            break;
        }
    }
    
    if(state==2){
        printf("Accepted");
    }else{
        printf("Not accepted");
    }
    
    return 0;
}
