#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int situation = 0;
	int choice = 0;
	printf("1为大牛\n2为菜鸟");

	scanf("%d", &situation);
	switch (situation)
	{
	case 1:
		printf("迎娶白富美");
		break;
	case 2:
		

		while (choice != 1)
		{
			printf("你现在是菜鸟，去买彩票吧\n");
			printf("1=中彩票\n2=没中彩票\n");

			scanf("%d", &choice);
			if (1 == choice)
				printf("迎娶白富美");
				
			else
				printf("老实学习");

		}
	}
	


	

	return 0;
}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("工作日"); 
//	case 2:
//		printf("工作日");
//	case 3:
//		printf("工作日");
//	case 4:
//		printf("工作日");
//	case 5:
//		printf("工作日");
//		break;
//	 case 6:
//		 printf("休息日");
//	 case 7:
//		 printf("休息日");
//		 break;
//	 default:
//		 printf("输入错误");
//			 break;

//
//	}
//	return 0;
//}
//

//int main()
//{
//	printf("1=zenglx\n2=yingyu\n3=tanyaru\n4=weizhixin\n5=lengyan\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		printf("很可爱但很高冷");
//		break;
//	case 2:
//		printf("很可爱呢又清纯");
//		break;
//	case 3:
//		printf("气色真好");
//		break;
//	case 4:
//		printf("有种西域的美丽");
//		break;
//	case 5:
//		printf("还行吧");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int hour = 0;
//	scanf("%d", &hour);
//	switch (hour)
//	{
//	case 2:
//		printf("还行，得加油");
//		break;
//	case 3:
//		printf("诶呦不错呦");
//		break;
//	case 4:
//		printf("很强");
//		break;
//	case 5:
//		printf("牛逼，登临山巅吧少年");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d ", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		
//	case 2:
//		printf("星期2\n");
//	
//	case 3:
//		printf("星期3\n");
//	
//	case 4:
//		printf("星期4\n");
//		
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a<=100)
//	{
//		printf("%d ", a);
//		a+=2;
//	}
//	return 0;
//}



//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 24;
//	if (1 == a%2)
//		printf("a为奇数"); 
//	else
//	
//		printf("a为偶数");
//	
//	return 0;
//}



//int main()
//{
//	int age = 20;
//	
//	if (age >= 18 && age < 24)
//	{
//		printf("青年\n");
//		printf("不能谈恋爱");
//	}
//	return 0;
//}
