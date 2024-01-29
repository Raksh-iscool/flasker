#include <stdio.h>
#include <string.h>
/*
//1 check anagrams
void anagram(char a[],char b[],int x,int y);

int main(){
    int x,y;
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
    anagram(a,b,x,y);
    return 0;
}
void anagram(char a[],char b[],int x,int y){
    if(x==y){
    int i,j,c=0;
    for (i=0;i<x;i++){
        for (int j=0;j<x;j++){
            if (a[i]==b[j]){
                c++;
                b[j]=' ';
            }
        }
    }
    if(c==x){
        printf("anagram");
    }else{
        printf("not anagram");
    }
}else{
    printf("not anagram");
}



}

//2 find second maximum occuring letter

int main(){
    char s[20];
    scanf("%s",s);
    char max='a';
    char sec='a';
    for(int i=0;i<strlen(s);i++){
        if (s[i]>max){
            max=s[i];
        }
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]>sec){
        if (s[i]<max){
            sec=s[i];
        }}
    }
    printf("%c",sec);
}

//3 print odd no of letters in a string
int main(){
    char s[20];
    scanf("%s",s);
    int a[256]={0};
    for(int i=0;i<strlen(s);i++){
        a[s[i]]++;
    }
    for(int i=0;i<strlen(s);i++){
        if(a[s[i]]%2!=0){
            printf("%c",s[i]);
        }
    }
    return 0;
}

//4 print odd no of digits in an array
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int f[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        f[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                f[i]++;
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0 && f[i]%2!=0){
            printf("%d /n",arr[i]);
        }
    }
}
*/
//5 first unique letter in a word
int main(){
    char s[20];
    scanf("%s",s);
    int a[256]={0};
    for(int i=0;i<strlen(s);i++){
        a[s[i]]++;
        
        
    }
    for(int i=0;i<strlen(s);i++){
        if(a[s[i]]==1){
            printf("%c",s[i]);
            break;
        }
    }
}

