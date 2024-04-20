#include<iostream>
using namespace std;

void removeX(char s[]){
    if(s[0]=='\0'){
        return ;
    }
    if(s[0]!='x'){
        removeX(s+1);
    }else{
        int i=1;
         for(;s[i]!=0;i++){
            s[i-1]=s[i];
         }
         s[i-1]=s[i];
        removeX(s+1);
    }
}
int main(){
   char arr[100]="xabaxc";
    removeX(arr);
    for(int i=0;arr[i]!='\0';i++){
        cout << arr[i];
    }


}