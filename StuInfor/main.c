/********************************************
 * File Name :The Basis Of Structure
 * Author    :Hrolf
 * Date      :3/25/2025
 * Function  :Tring to write a structure
 * Note      :None
 *
 * CopyRight (c)  3-25-2025    Hrolf     All Right Reseverd
 * @param c
 * @return
 *******************************************/
#include <stdio.h>
#include <malloc.h>

struct studentMarks{
    float Math;
    float Logic;
    float German;
};

struct StudentInfo{
    char name[128];
    char sex[10];
    int number;
    float score;
    struct studentMarks marks;
};



int main(int argc,char * argv[])
{

    struct StudentInfo demo={
        .name="Henry",
        .sex="Man",
        .number=2001,
        .score=7.5,
        .marks={.Math=95.3,
                .Logic=99.5,
                .German=97.6}
    };

    printf("name: %s,sex: %s,number: %d,score: %0.3f,Math: %0.3f,Logic: %0.3f,German: %0.3f\n",
           demo.name,demo.sex,demo.number,demo.score,demo.marks.Math,demo.marks.Logic,demo.marks.German);


    struct StudentInfo *p=malloc(sizeof (struct StudentInfo));


    free(p);

    printf("Hello, World!\n");
    return 0;
}
