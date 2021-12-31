#include <stdio.h>

int main(void) {
struct jk
{
char name[50];
int rollno;
int mark[5];
int total;
char grade;
}jk[100];
int n;
 
// printf("Enter the number of students\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    // printf("Enter the rollno of student\n");
  scanf("%d",&jk[i].rollno);
  // printf("Enter the name of student\n");
  scanf("%s",jk[i].name);

  // printf("Enter the marks for five subjects out of 100\n");
  int sum =0;
  for(int j=0;j<3;j++){
    scanf("%d",&jk[i].mark[j]);
    sum=sum+jk[i].mark[j];
  }
   jk[i].total=sum;
  int avg = ((jk[i].total/150)*100);
  // printf("%d",avg);
  // printf("Total marks is %d\n ",sum);
  if((sum<=150) && (sum>=130)){
    jk[i].grade='A';

  }
    else if((sum<130) && (sum>=120)){
    jk[i].grade='B';
  }
    else if((sum<120) && (sum>=100)){
    jk[i].grade='C';
  
  }
    else if((sum<110) && (sum>=90)){
    jk[i].grade='D';
  }
    
  

}
printf("Roll No  Name     Total Marks   Grade");
for(int i=0;i<n;i++ ){
  
  printf("\n%-9d%-11s%-13d%c",jk[i].rollno,jk[i].name,jk[i].total,jk[i].grade);

}
}