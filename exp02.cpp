/*输出两个数较大值
#include<stdio.h>
int findMax(int a,int b)
{  int z;
if(a>b) z=a;
else z=b;
return z;
}
int main()
{
	int a,b,k;
    scanf("%d %d",&a,&b);
	k=findMax(a,b);
	printf("k=%d\n",k);
	return 0;
}
*/


/*三个找最小
#include<stdio.h>
int findMin(int a,int b,int c)
{  int m;
  m=a;
  if(m>b) m=b;
  if(m>c) m=c;
  return m;
}
int main()
{
	int a,b,c,m;
	scanf("%d %d %d",&a,&b,&c);
		m=findMin(a,b,c);
		printf("%d\n",m);
		return 0;
}
*/
/*求第50项
#include<stdio.h>
int f(int n,int a,int d)
{
  int k;
  k=a+(n-1)*d;
  return k;
}
int main()
{
	int k;
	k=f(50,2,5);
	printf("第50项为；%d\n",k);
	return 0;
}
*/
/*1到100的素数
#include<stdio.h>
int test(int m);
int main()
{ int i,k;
for(i=2;i<=100;i++)
{ k=test(i);
if(k==10); {printf("%d",i);}
}
return 0;
}
int test(int m)
{  int j,flag=1;
for(j=2;j<m-1;j++)
{  if(m%j==0)
     { flag=0;
        break;
     }
}
return flag;
}
*/



/*计算n的阶乘
#include<stdio.h>
int fun(int n)
{ int k;
if(n==1)
	k=1;
else
	k=n*fun(n-1);
return k;
}
int main()
{  int a,b;
   scanf("%d",&a);
   b=fun(a);
   printf("%d\n",b);
   return 0;
}
*/

/*求10个数中最大
#include<stdio.h>
int main()
{  int a[10],max;
   int i;
   for(i=0;i<10;i++)
	   scanf("%d",&a[10]);
   max=a[0];
   for(i=1;i<10;i++)
	   if(max<a[i])
		   max=a[i];
   printf("最大值为%d",max);
   return 0;
}
*/

/*
#include <stdio.h>
#define N 5
void max(int *g,int x);
float avg(int *g,int l);
int main()
{
int i,g[N];
int l=0;
float a;
char m[5][10];
printf("输入战斗机的型号和最大飞行高度:\n");
for(i=0;i<5;i++)
scanf("%s %d",m[i],&g[i]);
for(i=0;i<5;i++)
{ printf("%s:%d",m[i],g[i]);
printf("米\n");
}
max(g,5);
a=avg(g,5);
 printf("输出比平均飞行高度高的战斗机型号：\n");
 for(i=0;i<5;i++)
 {
   if(g[i]>a)
    printf("%s,",m+i);
 }
 printf("\n");
 printf("平均值：%.2f\n",a);
  printf("\n");
   printf("\n");
  return 0;
}
void max(int *g,int x)
{
   int i,j,t;
   for(i=0;i<x;i++)
   {
    for(j=0;j<x-i;j++)
      if(g[j]<g[j+1])
   {
    t=g[j];
    g[j]=g[j+1];
    g[j+1]=t;
   }
   }
   for(i=0;i<x;i++)
   {printf("%d米",g[i]);
   if(i<x-1)
     printf("、");}
   printf("\n");
}

float avg(int *g,int l)
{
  float sum=0,a;
  int i=0;
  for( ;i<l;i++)
  {
    sum=sum+g[i];
    a=sum/5;
  }
  return a;
}
*/
/*
#include<stdio.h>
{ FILE*fp;
  char ch,filename[10];
  printf("请输入所用的文件名:");
  scanf("%s",filename);
  if((fp=fopen(filename,"w"))==NULL)
  { printf("无法打开此文件\n");
  exit(0);
  }getchar();
  printf("请输入一个字符串(以#结束):");
  ch=getchar();
  while(ch!='#')
  { fputc(ch,fp);
  putchar(ch);
  ch=getchar();
  }
  fclose(fp);
  putchar(10);
  return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{FILE*fp;
char str[3][10],temp[10];
int i,j,k,n=3;
printf("Enter strings:\n");
for(i=0;i<n;i++)
	gets(str[i]);
for(i=0;i<n-1;i++)
{ k=i;
for(j=i+1;j<n;j++)
	if(strcmp(str[k],str[j])>0)k=j;
if(k!=i)
{ strcpy(temp,str[i]);
  strcpy(str[i],str[k]);
  strcpy(str[k],temp);}
}
if((fp=fopen("D;\\CC\\string.dat","w"))==NULL)
{printf("can't open file!\n");exit(0);}
printf("\nThe new sequence:\n");
for(i=0;i<n;i++)
{ fputs(str[i],fp);
  fputs("\n",fp);
  printf("%s\n",str[i]);
}
return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{ FILE*fp;char str[3][10];int i=0;
 if((fp=fopen("D:\\CC\\string.dat","r"))==NULL)
{printf("can't open file!\n");exit(0);}
 while(fgets(str[i],10,fp)!=NULL)
 {printf("%s",str[i]);i++;}
 fclose(fp);
 return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
void save()
{FILE*fp;int i;
if((fp=fopen("stu.dat","wb"))==NULL)
{printf("can't open file\n");
return;
}
for(i=0;i<SIZE;i++)
	if(fwrite(&stud[i],
		       sizeof(struct Student_type),
			   1,fp)!=1)
			   printf("file write error\n");
fclose(fp);
}
*/
/*
#include<stdio.h>
int main()
{
	int a[7];
	int i=0;
	int t=0;
	double sum=0,m=0;
	for(i=0;i<=7;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=7;i++){
	if(a[i]>a[i+1])
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	}
	for(i=1;i<=6;i++)
	{sum+=a[i];
	}
	m=sum/6;
	printf("%.1f",m);
	return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{ 
	double money,rate,interest;
	int year;
    scanf("%lf %d %lf",&money,&year,&rate);
    interest=money*pow((1+rate),year)-money;
    printf("interest=%.2f",interest);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
 if(a<b)
 {
  t=a;
  a=b;
  b=t;
 }
 if(a<c)
 {
  t=a;
  a=c;
  c=t;
 }
 if(b<c)
 {
  t=b;
  b=c;
  c=t;
 }
    printf("%d%d%d",a,b,c);
    return 0;
}
*/


/*
#include <stdio.h>
typedef struct Inf
{
 int sno;
 char name[10];
 int age;
 int high;
}Inf;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    Inf a[10];
    Inf t[10];
    for(i = 0; i < n; i++)
    {
        scanf("%d%s%d%d",&a[i].sno,a[i].name,&a[i].age,&a[i].high);
    }
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i].age<a[j].age) {
                t[i]=a[i];
                a[i]=a[j];
                a[j]=t[i];
            }
            if(a[i].age==a[j].age) {
                if(a[i].sno > a[j].sno) {
                    t[i]=a[i];
                    a[i]=a[j];
                    a[j]=t[i];
                }
            }
        }
    }
        for(i = 0; i < n; i++) {
            printf("%d %s %d %d\n",a[i].sno,a[i].name,a[i].age,a[i].high);
        }
}
*/
/*
 #include<stdio.h> 
 int sushu(int n) 
 {
	 for(int i=2;i<n;i++)
	 {
		 if(n%i==0)
		 {
			 return 0;
		 }
	 }
	 return 1;
 }
 int main()
 {
	 int n=0,enter_count=0;
	 scanf("%d",&n);
	 if(n<3) printf("%d wrong",n);
	 for(int i=3;i<=n;i++)
	 {
		 if(sushu(i))
		 {
			 printf("%d",i);
			 enter_count+=1;
			 if(enter_count%5==0)
			 {
				 printf("\n");
			 }
		 }
	 }
	 return 0;
 }
 */

/*
#include <stdio.h>
struct lingjian
{
	char name[20];
	int time;
	int price;
	int id;
};
struct                                                                                           lingjian
	a[5]={{"jishen",1,100000,111},{"jiyi",2,200000,112},{"fadongji",3,300000,113},{"dlzz",4,400000,114},{"qlj",7,500000,115}};
void show()
{
	int i;
	printf("所有零件信息:  \n");
	for(i=0;i<5;i++)
	printf("零件名称:%s  出厂时间:%d年前  价格:%d元  编号:%d\n",a[i].name,a[i].time,a[i].price,a[i].id);
}
 void sort()
{ 
struct lingjian temp;
int i,j,k;

for(i=0;i<4;i++)
{
	k=i;
for(j=i+1;j<5;j++)
	if(a[j].price>a[k].price)
	{
		k=j;
        temp=a[k];
		a[k]=a[i];
		a[i]=temp;
	}
}
printf("零件价格由高到低为:\n");
for(i=0;i<5;i++)
	printf("%d\n",a[i].price);
	printf("价格最高的零件信息:\n");
printf("%s %d %d %d\n",a[0].name,a[0].time,a[0].price,a[0].id);
}
void update()
{
	int i;
	printf("价格改为一半后:\n");
	for(i=0;i<5;i++)
		if(a[i].time>5){a[i].price=a[i].price/2;
	printf("%s %d %d %d\n",a[i].name,a[i].time,a[i].price,a[i].id);}
	}
	int main()
	{
		show();
		sort();
		update();
		return 0;
	}
*/
#include<stdio.h> 
#include<stdlib.h> 
 int main() 
 { 
 int a[50]; 
 int max; 
 int i, n, sum, flag=0; 
 printf("请输入数组长度："); 
 scanf_s("%d", &n); 
 printf("\n"); 
 printf("请输入数组元素："); 
 for (i = 0; i < n; i++) 
 { 
 scanf_s("%d", &a[i]); 
 if (a[i] > 0) 
	 flag = 1; 
 } 
 printf("\n"); 
 if (flag == 0) 
 { 
 printf("0"); 
 return 0; 
 } 
 max = a[0]; 
 if (a[0] < 0) max = 0; 
 sum = max; 
 for (i = 0; i < n-1; i++) 
 { 
 sum =sum + a[i + 1]; 
 if (sum > max) 
 { 
 max = sum; 
 } 
 else if (sum < 0) 
 sum = 0; 
 } 
 printf("最大字段和为：%d", max); 
 system("pause"); 
 return 0; 
 } 



/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node *list=NULL;
char filename[]="student.dat";
struct student
{
	char name[40];
	int id;
	int phone;
	char address[40];
	char inschoolday[40];
	char passby[10][40];
	char isyimiao[40];
	char day3temp[40];
};
struct Node
{
	struct student date;
	struct Node *next;
};
void MemuSystem();
void GetUserInput();
struct Node *CreateList();
struct Node *CreateNode(struct student date);
void InsertNodeByHead(struct Node *listHeadNode, struct student
data);
void SaveInfoToFile(char *fileName, struct Node *listHeadNode);

int main()
{
list = CreateList();
MemuSystem();
while (1)
{
GetUserInput();
}
}
void MemuSystem()
{
printf("\n\t\t 新冠疫情学生管理系统\t\t\n");
printf("\t* * * * * * * * * * * * * * * * * * * * *\n");
printf("\t*\t\t1.打印所有学生信息\t*\n");
printf("\t*\t\t2.添加学生信息\t\t*\n");
printf("\t*\t\t3.??????\t\t*\n");
printf("\t*\t\t4.??????\t\t*\n");
printf("\t*\t\t5.???????\t\t*\n");
printf("\t*\t\t6.?????\t\t*\n");
printf("\t* * * * * * * * * * * * * * * * * * * * *\n");
printf("\n 请输入 1-5:");
}

void GetUserInput()
{
int userKey;
int k = 0;
char *p ;
struct student tempData;
scanf("%d", &userKey);
system("cls");
MemuSystem();
switch (userKey)
{
case 1:
printf("\n\n\t\t 打印所有学生信息:\n\n");
break;
case 2:
printf("\n\n 输入学生信息\n");
printf("输入学生姓名:");
scanf("%s", tempData.name);
printf("输入学生学号:");
scanf("%d", &tempData.id);
printf("输入学生联系方式:");
scanf("%d", &tempData.phone);
printf("输入学生寝室号:");
scanf("%s", tempData.address);
printf("输入学生入校日期:");
scanf("%s", tempData.inschoolday);
printf("输入学生 14 日内途径地:");
char temp[40];
scanf("%s", temp);
p= strtok(temp, ",");
while (p != NULL)
{
strcpy(tempData.passby[k], p);
p = strtok(NULL, ",");
k++;
}
printf("输入学生是否接种过疫苗:");
scanf("%s", tempData.isyimiao);
printf("输入学生 3 日内体温:");
scanf("%s", tempData.day3temp);
InsertNodeByHead(list, tempData);
SaveInfoToFile(filename, list);
printf("输入完成\n");
break;
case 3:
printf("\n\n??????????????????????????????????:");
break;
case 4:
printf("\n\n?????????????????????????????????:");
break;
case 5:
printf("\n\n?????????????????????????????????:");
break;
case 6:
exit(0);
break;
default:
printf("\t\t?????????????????\n");
break;
}
printf("\n 请继续输入指令（1-5）:");
}
struct Node *CreateList()
{
struct Node *listHeadNode = (struct Node
*)malloc(sizeof(struct Node));
listHeadNode->next = NULL;
return listHeadNode;
};
struct Node *CreateNode(struct student data)
{
struct Node *newNode = (struct Node *)malloc(sizeof(struct
Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
};
void InsertNodeByHead(struct Node *listHeadNode, struct student
data)
{
struct Node *newNode = CreateNode(data);
newNode->next = listHeadNode->next;
listHeadNode->next = newNode;
}
void SaveInfoToFile(char *fileName, struct Node *listHeadNode)
{
FILE *fp = fopen(fileName, "w");
struct Node *pMove = listHeadNode->next;
while (pMove != NULL)
{
fprintf(fp, "%s\t%d\t%d\t%s\t%s\t", pMove->data.name,
pMove->data.id, pMove->data.phone, pMove->data.address,
pMove->data.inschoolday);
for (int i = 0; i < 10; i++)
{
if (i == 0)
{
fprintf(fp, "%s", pMove->data.passby[i]);
}
else
{
if (pMove->data.passby[i] != NULL)
{
fprintf(fp, ",%s", pMove->data.passby[i]);
}
}
}
fprintf(fp, "\t%s\t%s\n", pMove->data.isyimiao,pMove->data.day3temp);
pMove = pMove->next;
}
fclose(fp);
}

*/














/*

#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <vector> 
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;



struct Student{
    char name[12];  // 姓名
    int ID;          // 学号
    char tel[12];         // 联系方式
    int dormID;     // 寝室号
    char data[12];  // 入校日期
    int placednum;  // 途径地数量
    vector<string> placed; //途径地
    int vaccin = 0; // 是否接种过疫苗
    float temperature[3]; // 三日体温记录
};
int cnt = 0;
char stuinfo[205];
char stuinfoo[205];
string temp;

string FloatToStr(Student stu){
    string temp = "";
    for(int i = 0; i < 3; i ++ ){
        std::stringstream ss;
        ss << stu.temperature[i];
        std::string asString = ss.str();
        temp += asString;
        temp += ' ';
    }
    temp += '\n';
    return temp;
}

void getInfo(Student stu){
    cnt = 0; // stuinfo
    int i = 0;
    while(stu.name[i]!='\0')stuinfo[cnt++] = stu.name[i++]; stuinfo[cnt++] = ' ';
    i = 0;
    temp = to_string(stu.ID);
    while(temp[i]!='\0')stuinfo[cnt++] = temp[i++];  stuinfo[cnt++] = ' ';
    i = 0;
    while(stu.tel[i]!='\0')stuinfo[cnt++] = stu.tel[i++]; stuinfo[cnt++] = ' ';
    i = 0;
    temp = to_string(stu.dormID);
    while(temp[i]!='\0')stuinfo[cnt++] = temp[i++];  stuinfo[cnt++] = ' ';
    i = 0;
    while(stu.data[i]!='\0')stuinfo[cnt++] = stu.data[i++]; stuinfo[cnt++] = ' ';
    i = 0;
    stu.placednum = stu.placed.size();
    temp = to_string(stu.placednum);
    while(temp[i]!='\0')stuinfo[cnt++] = temp[i++];  stuinfo[cnt++] = ' ';
    i = 0;
    for(int j = 0; j < stu.placed.size(); j ++ ){
        i = 0;
        while(stu.placed[j][i]!='\0')stuinfo[cnt++] = stu.placed[j][i++];
        stuinfo[cnt++] = ' ';
    }
    stuinfo[cnt++] = '0'+stu.vaccin; stuinfo[cnt++] = ' ';
    i = 0;
    temp = FloatToStr(stu);
    while(temp[i]!='\n')stuinfo[cnt++] = temp[i++];stuinfo[cnt++] = '\n';
}


void addstu();
void ReadDat(); // 从文件中读取所有的信息
void WriteDat();
void updatee(int ID);
void searchstu();
void searchre(int ID);
void searchrestr(string str);
void filterstu();
vector<Student> students;
vector<Student>:: iterator itor;
int main()
{
    puts("===========================");
	puts("   欢迎使用疫情管理系统   ");
	puts("===========================");
    ReadDat();
	while(1){
		puts("(1)新增学生信息,(2)查询修改学生信息,(3)筛选途径风险区学生信息！");
		printf("请输入要执行的功能代号：");
		int mothedID = -1;
		scanf("%d", &mothedID);
		if(mothedID==1)addstu();
        if(mothedID==2)searchstu();
        if(mothedID==3)filterstu();
		if(mothedID==-1)break;
	}
    puts("========");
    WriteDat();
    return 0;
}
void filterstu(){
    set<int> dormIDS;
    set<int>::iterator itor;
    vector<int> IDS;
    string timee = "2022-11-05";
    string place_name;
    printf("请输入风险地名：");
    cin >> place_name;
    for(int i = 0; i < students.size(); i ++ ){
        bool vis = false; // 这个学生是不是途径了风险地区
        for(int j = 0; j < students[i].placednum; j ++ ){
            temp = students[i].placed[j];
            if(temp == place_name){
                vis = true;
                dormIDS.insert(students[i].dormID); // 存有问题的寝室号
                break;
            }
        }
    }

    ofstream outfile("guanzhu.dat");
    if(outfile.is_open())  
    {
        for(itor = dormIDS.begin(); itor != dormIDS.end(); itor ++ )
            for(int j = 0; j < students.size(); j ++ )
                if(students[j].dormID == *itor){
                    //IDS.push_back(students[i].ID);
                    getInfo(students[j]); // 刷新info
                    int ii = 0;
                    cnt = 0;
                    while(stuinfo[ii]!='\n')stuinfoo[cnt++] = stuinfo[ii++];stuinfoo[cnt++] = '\n';
                    outfile<<stuinfoo;
                    memset(stuinfo, '\0', sizeof(stuinfo));
                    memset(stuinfoo, '\0', sizeof(stuinfo));
                }
            
        outfile.close();
        puts("风险地学生写入成功！");
    }
    else
    {
        cout<<"can not open the file \n"<<endl;
    }
}
// 查找和修改
void searchstu(){
    printf("请输入要查询学生的学号或姓名：");
    string temp;
    cin >> temp;
    if(temp[0] >= '0' && temp[0] <= '9'){
        searchre(atoi(temp.c_str()));
    }else searchrestr(temp);
}
void searchre(int ID){
    for(itor = students.begin(); itor != students.end(); itor ++ ){
        int idd = itor->ID;
        if(ID == idd){
            puts("已找到如下信息：");
            
            // 输出
            getInfo(*itor);
            printf("%s\n", stuinfo);

            printf("是否进行修改：");
            cin >> temp;
            getchar();
            if(temp == "是"){
                students.erase(itor);
                addstu();
                puts("信息修改已完成！");
                return;
            }
            memset(stuinfo, '\0', sizeof(stuinfo));
        }
    }
}
void searchrestr(string str){
    for(itor = students.begin(); itor != students.end(); itor ++ ){
        string name = itor->name;
        if(str == name){
            puts("已找到如下信息：");
            
            // 输出
            getInfo(*itor);
            printf("%s\n", stuinfo);

            printf("是否进行修改：");
            cin >> temp;
            getchar();
            if(temp == "是"){
                students.erase(itor);
                addstu();
                puts("信息修改已完成！");
                return;
            }
            memset(stuinfo, '\0', sizeof(stuinfo));
        }
    }
}
// 输文件写入
void WriteDat(){
    ofstream outfile("myfile.dat");
    if(outfile.is_open())  
    {  
        printf("students的长度: %d\n ", students.size());
        for(int i = 0; i < students.size(); i ++ ){
            getInfo(students[i]); // 刷新info
//            printf("%s\n", stuinfo);
            int ii = 0;
            cnt = 0;
            while(stuinfo[ii]!='\n')stuinfoo[cnt++] = stuinfo[ii++];stuinfoo[cnt++] = '\n';
            
            outfile<<stuinfoo;
            memset(stuinfo, '\0', sizeof(stuinfo));
            memset(stuinfoo, '\0', sizeof(stuinfo));
        }
        outfile.close();
    }
    else
    {
        cout<<"can not open the file \n"<<endl;
    }
}
void addstu(){
	Student neww;
	printf("请输入学生姓名:");scanf("%s", neww.name);
	printf("学号：");cin>>neww.ID;//scanf("%d", &neww.ID);
	printf("联系方式:");cin>>neww.tel;//scanf("%s", neww.tel);
	printf("寝室号:");cin>>neww.dormID;//scanf("%d", &neww.dormID);
	printf("入校日期:");cin>>neww.data;//scanf("%s", neww.data);
	printf("分行输入途径地，-1终止:\n");
	string temp = "";
	int index = 0, j;
	while(cin>>temp && temp != "-1"){
        neww.placed.push_back(temp);
	}
    neww.placednum = neww.placed.size(); // ###
	printf("是否接种过疫苗:");cin>>neww.vaccin;//scanf("%d", &neww.vaccin);
	printf("分行输入三日体温记录:");
	for(int i = 0; i < 3; i ++ )cin>>neww.temperature[i];//scanf("%f", &neww.temperature[i]);
	students.push_back(neww);
	puts("该生信息已添加。");
}
void ReadDat(){
    puts("下面是第一次读如使的数据：");

    ifstream ifs("myfile.dat", ofstream::app);
    while(ifs){
        Student s1;
        ifs >> s1.name >> s1.ID >> s1.tel >> s1.dormID >> s1.data >> s1.placednum;
        if(ifs.eof()){ // 最后一行回车的特判
            break;
        }
        //cout << s1.name << s1.ID << s1.tel << s1.dormID << s1.data << s1.placednum << endl;
        
        for(int i = 0; i < s1.placednum; i ++ ){
            ifs >> temp;
            s1.placed.push_back(temp);
            //cout << temp << " ";
        }
        //cout << endl;
        ifs >> s1.vaccin >> s1.temperature[0] >> s1.temperature[1] >> s1.temperature[2];
        //cout << s1.vaccin << s1.temperature[0] << s1.temperature[1] << s1.temperature[2] << endl;
        students.push_back(s1);
    }
    ifs.close();
}
*/