#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isValid(char *input){
    int length=strlen(input);
    if((length==0) || (input[0]>='0' && input[0]<='9')){
        return false;
    }

    for(int i=0;i<length;i++){
        char c=input[i];
        if(!((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || c=='_')){
            return false;
        }
    }

    return true;
}

int main(){
    char input[20];
    printf("Enter the identifier: ");
    scanf("%s", input);

    if(isValid(input)){
        printf("Identifier is Valid");
    }else{
        printf("Identifier is Not Valid");
    }
    
    return 0;
}
