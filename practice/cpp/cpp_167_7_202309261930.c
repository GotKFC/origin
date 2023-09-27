#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
	char text;
	char prev;
	int p_lines = 0,n_lines = 0,n_words = 0,n_chars = 0;
	bool inword = false;
	
	prev = '\n';
	printf("请输入您需要计数的文本（输入 | 以停止计数）：\n");
	while((text = getchar()) != STOP)
	{
		n_chars++;
		if(text == '\n')
			n_lines++;
		if(!isspace(text) && !inword)     //识别单词的方法：设置一个标记，该标记一开始为假，当读到第一个非空格（即一个单词的首字母）时，
		{                                 //将该标记设置为真，单词数量加一，等到读到空格是将标记再设置为假，以待读取下一个单词的首字母。
			inword = true;                //具体代码如该程序19-25行所示。
			n_words++;
		}
		if(isspace(text) && inword)
			inword = false;
		prev = text;
		
	}
	if ( prev != '\n')
		p_lines = 1;
		
	printf("该文本有%d个单词，%d行，和%d个字符\n",n_words,n_lines,n_chars);
	printf("该文本还有%d个不完整的行\n",p_lines);
	return 0;
}

