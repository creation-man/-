//学生管理系统
#include <stdio.h>

struct student
{
    char name[20];
    int age;
    char sex;
    float score;
};

void print_student()
{
printf("1,添加学生信息\n2,显示所有学生信息\n3,查询学生信息\n4,删除学生信息\n5,退出系统\n请选择：");
printf("请输入相应的序号选择："); 
}




int main()
{
 int num = 0;
 while (1)
{
  print_student();
  scanf("%d",&num);
   
   switch (num)
   {
   case 0:

    break;
    case 1:
  
    break;
    case 2:
   
    break;
    case 3:
    
    break;
   
   default:
    break;
   } 
    
    }

}