#include<reg51.h>
#include"lcd12864.h"

//--声明全局函数--//
void Delay10ms(unsigned int c);   //延时10ms

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void main()
{
	while(1)
	{
		LCD12864_ClearScreen();
		LCD12864_DrowPoint(127,63);
		while(1);	
	}	
}

/*******************************************************************************
* 函 数 名         : Delay10ms
* 函数功能		   : 延时函数，延时10ms
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void Delay10ms(unsigned int c)   //误差 0us
{
    unsigned char a, b;

	//--c已经在传递过来的时候已经赋值了，所以在for语句第一句就不用赋值了--//
    for (;c>0;c--)
	{
		for (b=38;b>0;b--)
		{
			for (a=130;a>0;a--);
		}
           
	}
        
}