/********************************************
 * File Name :13_4Nixu
 * Author    :Hrolf
 * Date      :3/25/2025
 * Function  :申请一块堆内存，利用 scanf 函数实现通过键盘输入一个字符串，
 *          并存储到堆内存中，实现一个字符串逆向输出
 * Note      :None
 *
 * CopyRight (c)  3-25-2025    Hrolf     All Right Reseverd
 * @param c
 * @return
 *******************************************/
#include <stdio.h>
#include <stdbool.h>
#include "stdlib.h"
#include "string.h"


/********************************************
 * File Name :13_4Nixu
 * Author    :Hrolf
 * Date      :3/25/2025
 * Function  :实现一个字符串逆向输出
 * Note      :None
 *
 * CopyRight (c)  3-25-2025    Hrolf     All Right Reseverd
 * @param c
 * @return
 *******************************************/
bool conversion (char *p)
{
    //准备好终止条件，防止死循环占用内存
    if (0 == *p) {
        return false;
    }
    //逆序输出
    conversion(p+1);
    printf("%c",*p);

}

int main(  int argc, char *argv[] )
{
    //1.定义指针变量来指向申请的堆空间
    char *p= NULL;

    //2.申请堆内存并且将内存设为0 malloc 和 calloc
    p = (char *)malloc(100);
    if (NULL==p){
        perror("calloc ask memory failed");
        return -1;
    }

    //3.通过键盘输入一个字符串，存到堆内存内
    scanf("%s",p);

    //4.递归函数实现字符串逆向输出
    conversion(p);

    //5.释放堆内存
    free(p);
    printf("\n");
    printf("Hello, World!\n");
    return 0;
}
