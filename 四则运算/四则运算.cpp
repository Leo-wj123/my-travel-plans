#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	int answer,num,n,num1,num2;	//answerΪ���������ȷ��,numΪ�û�����Ĵ𰸣�nΪ���������������ѡ�����㣬num1��num2Ϊ��������� 
	int i; 
	int score = 0;							//�ɼ� 
	cout<<"��ӭʹ��Сѧ�������������"<<endl;
	srand(time(NULL));
	for(i=1;i<=10;i++){						//����10���� 
		num1 = rand()%100;					//����0~99����� 
		num2 = rand()%100;
		n = rand()%4;
		switch(n){
			case 0:							//���мӷ�����ʱ���Ͳ�����100 
				while(num1 + num2 > 100){
				num1 = rand()%100;
				num2 = rand()%100;
			}
				cout<<"��"<<i<<"��"<<endl;
				cout<<num1<<"+"<<num2<<"=";
				answer=num1+num2;
				break;
			case 1:							//���м�������ʱ���Ϊ���� 
				while(num1 - num2 < 0){
				num1 = rand()%100;
				num2 = rand()%100;
			} 
				cout<<"��"<<i<<"��"<<endl;
				cout<<num1<<"-"<<num2<<"=";
				answer=num1-num2;
				break;
			case 2:							//���г˷�����ʱ����������100 
				while(num1 * num2 > 100){
				num1 = rand()%100;
				num2 = rand()%100;
			} 
				cout<<"��"<<i<<"��"<<endl;
				cout<<num1<<"*"<<num2<<"=";
				answer=num1*num2;
				break;
			default:						//���г�������ʱ��������Ϊ0���ұ������� 
				while(num1 % num2 != 0){
				num1 = rand()%100;
				num2 = 1 + rand()%99;
			}
				cout<<"��"<<i<<"��"<<endl;
				cout<<num1<<"/"<<num2<<"=";
				answer=num1/num2;
				break;

		}
		int cnt = 3;						//�����Ƿ��д������ 
		do{
			cin>>num;
			if(num == answer)
				cout<<"����ȷ!"<<endl;
			else{
				if(cnt>0){
					cout<<"�𰸲���ȷ�������԰�!"<<endl;
					cout<<"�㻹��"<<cnt-1<<"�δ������"<<endl;
					cnt--;
				}
			}
		}while(cnt>0 && num!=answer);
		if(num != answer)
			cout<<"�𰸲���ȷ����ȷ���ǣ�"<<answer<<endl;		//����������꣬�����ȷ�� 
		switch(cnt){
			case 1:score += 5;break;		//�����δ�ԣ���5�� 
			case 2:score += 7;break;		//�ڶ��δ�ԣ���7�� 
			case 3:score += 10;break;		//��һ�δ�ԣ���10�� 
		}
		cout<<"��ǰ����Ϊ"<<score<<"��"<<endl;
	}
	cout<<"������շ���Ϊ"<<score<<"��"<<endl;
	
	return 0;
}
