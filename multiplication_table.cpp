#include<stdio.h>

int main()
{

int i,j,result;

printf(" ");

for (i=1;i<10;i++){ 
   for(j=1;j<10;j++){
      result=i*j;
      printf("%d*%d=%-3d",i,j,result); /*-3d��ܥ�����A��3��*/
   }
printf(" "); /*�C�@��ᴫ��*/
}

}
