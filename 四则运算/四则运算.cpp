#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	int answer,num,n,num1,num2;	//answer为计算出的正确答案,num为用户输入的答案，n为产生的随机数用来选择运算，num1、num2为运算的算数 
	int i; 
	int score = 0;							//成绩 
	cout<<"欢迎使用小学生四则运算程序"<<endl;
	srand(time(NULL));
	for(i=1;i<=10;i++){						//产生10道题 
		num1 = rand()%100;					//产生0~99随机数 
		num2 = rand()%100;
		n = rand()%4;
		switch(n){
			case 0:							//进行加法运算时，和不超过100 
				while(num1 + num2 > 100){
				num1 = rand()%100;
				num2 = rand()%100;
			}
				cout<<"第"<<i<<"题"<<endl;
				cout<<num1<<"+"<<num2<<"=";
				answer=num1+num2;
				break;
			case 1:							//进行减法运算时，差不为负数 
				while(num1 - num2 < 0){
				num1 = rand()%100;
				num2 = rand()%100;
			} 
				cout<<"第"<<i<<"题"<<endl;
				cout<<num1<<"-"<<num2<<"=";
				answer=num1-num2;
				break;
			case 2:							//进行乘法运算时，积不超过100 
				while(num1 * num2 > 100){
				num1 = rand()%100;
				num2 = rand()%100;
			} 
				cout<<"第"<<i<<"题"<<endl;
				cout<<num1<<"*"<<num2<<"=";
				answer=num1*num2;
				break;
			default:						//进行除法运算时，除数不为0，且必须整除 
				while(num1 % num2 != 0){
				num1 = rand()%100;
				num2 = 1 + rand()%99;
			}
				cout<<"第"<<i<<"题"<<endl;
				cout<<num1<<"/"<<num2<<"=";
				answer=num1/num2;
				break;

		}
		int cnt = 3;						//计算是否还有答题机会 
		do{
			cin>>num;
			if(num == answer)
				cout<<"答案正确!"<<endl;
			else{
				if(cnt>0){
					cout<<"答案不正确，再试试吧!"<<endl;
					cout<<"你还有"<<cnt-1<<"次答题机会"<<endl;
					cnt--;
				}
			}
		}while(cnt>0 && num!=answer);
		if(num != answer)
			cout<<"答案不正确，正确答案是："<<answer<<endl;		//答题机会用完，输出正确答案 
		switch(cnt){
			case 1:score += 5;break;		//第三次答对，加5分 
			case 2:score += 7;break;		//第二次答对，加7分 
			case 3:score += 10;break;		//第一次答对，加10分 
		}
		cout<<"当前分数为"<<score<<"分"<<endl;
	}
	cout<<"你的最终分数为"<<score<<"分"<<endl;
	
	return 0;
}
