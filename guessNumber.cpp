#include<time.h>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
void menu()
{
	printf("------------------------------\n");
	printf("|         开始游戏：1         |\n");
	printf("|         退出游戏：0         |\n");
	printf("------------------------------\n");
}

int count()
{
	static int maxGuess = 20;  //最大可猜测次数
	cout << "剩余次数" <<--maxGuess<< endl;
	return maxGuess;
}

int main()
{
	int num = 1;
	printf("欢迎使用猜数字游戏\n");
	while (num)
	{
		menu();
	    printf("请选择：");
		scanf_s("%d", &num);//输入0或1，选择菜单的0与1
		switch (num)
		{
		case 1:
		{
			int n = 0;
			unsigned short inputNumber = 0;
			int min = 0;
			int max = 1000;
			
			srand((unsigned int)time(NULL));//根据时间产生无符号的整型随机数
			n = rand() % 1001;
			printf("请猜一个（0-1000）之间的数\n");
			while (1)
			{
				
				cin >> inputNumber;        //输入所猜数的大小
				if (inputNumber> n)
				{   
					max = inputNumber;
					cout << "你猜大了！这个数在" << min <<"到"<<max<< "之间" << endl;
					
					int j = count();
					if (j == 0)
					{
						cout << "游戏结束！" << endl;
						break;
					}
					
				}
				else if (inputNumber < n)
				{   
					min = inputNumber;
					cout << "你猜小了！这个数在" <<min<<"到"<< max<<"之间" << endl;
				    int k = count();
					if (k == 0)
					{
						cout << "游戏结束！" << endl;
						break;
					}
				}
				else
				{
					printf("恭喜你，猜对了\n");
					break;
				}
				
			}
			break;
		}
		default:
			printf("游戏退出\n");
			break;
		}
	}
	return 0;
}