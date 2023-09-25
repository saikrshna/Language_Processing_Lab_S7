#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    int state=0;
    int length = strlen(str);

    for(int i=0;i<=length;i++){
        if(str[i]=='a' && state==0){
            state=1;
        }else if((str[i]=='b' && state==0) || (str[i]=='c' && state==0)){
            state=0;
        }else if(str[i]=='b' && state==1){
            state=2;
        }else if(str[i]=='a' && state==1){
            state=1;
        }else if(str[i]=='c' && state==1){
            state=0;
        }else if(str[i]=='c' && state==2){
            state=3;
        }else if(str[i]=='a' && state==2){
            state=1;
        }else if(str[i]=='b' && state==2){
            state=0;
        }else if(state==3){
            state=3;
            break;
        }
    }
    
    if(state==3){
        printf("Accepted");
    }else{
        printf("Not Accepted");
    }
    
    return 0;
}
