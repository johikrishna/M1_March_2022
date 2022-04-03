#include<stdio.h>
int snackss()
{
    int val;
    while(1)
    {
    printf("enter the snacks required\n");
    printf("1.puff\n2.cock\n3.water bottle\n4.terminate\n");
    scanf("%d",&val);
   
    if(val=4)
    {
        break;
    }
    else{
        printf("snacks hass been ordered successfully...................!\n");
    }
   
    }
    return 0;
}

int first_movie()
{
    int remaining;
    int required_seat;
    int snacks;
    printf("total no of seat for aaa is 100\n");
    printf("-------------------------------\n");
    printf("enter the no of seat required\n");
    scanf("%d",&required_seat);
    remaining=required_seat-100;
    printf("your seat has been booked successfully....! \n remaining seat %d\n", remaining);
    printf("--------------------------------------\n snacks for you give YES if you needed\n1.yes   2.no\n");
    scanf("%d",&snacks);
    if(snacks==1)
    {
        snackss();
    }
    printf("-------------------->thank you<--------------------");
   
    return 0;
}
int second_movie()
{
    int remaining;
    int required_seat;
    int snacks;
    printf("total no of seat for bbb is 150\n");
    printf("-------------------------------\n");
    printf("enter the no of seat required\n");
    scanf("%d",&required_seat);
    remaining=required_seat-150;
    printf("your seat has been booked successfully....! \n remaining seat %d\n", remaining);
    printf("--------------------------------------\n snacks for you give YES if you needed\n1.yes   2.no\n");
    scanf("%d",&snacks);
    if(snacks==1)
    {
        snackss();
    }
    printf("-------------------->thank you<--------------------");
   
    return 0;
}
int third_movie()
{
    int remaining;
    int required_seat;
    int snacks;
    printf("total no of seat for ccc is 200\n");
    printf("-------------------------------\n");
    printf("enter the no of seat required\n");
    scanf("%d",&required_seat);
    remaining=required_seat-200;
    printf("your seat has been booked successfully....! \n remaining seat %d\n", remaining);
    printf("--------------------------------------\n snacks for you give YES if you needed\n1.yes   2.no\n");
    scanf("%d",&snacks);
    if(snacks==1)
    {
        snackss();
    }
    printf("-------------------->thank you<--------------------");
   
    return 0;
}
int upcoming_movie()
{
    printf("1.rrr\n2.kkk\n3.hhhh\n4,yyyy\n");
    printf("---------------");
   
    return 0;
   
}

int main()
{
    int task;
   
    printf("-------------->movie ticket booking<-------------\n");
    printf("----------------------------------------------------\n");
    while(1)
    {
    printf("select the movie you like to watch\n");
    printf("1.aaaa\n");
    printf("2.bbbb\n");
    printf("3.cccc\n");
    // printf("4.ddddd");
    // printf("5.eeee");
    printf("4.upcomming movies\n");
    printf("5.terminate the operation\n");
    scanf("%d",&task);
    while(1)
    {
        switch(task)
        {
            case 1:
              printf("you selected aaa movie\n");
              first_movie();
              break;
             case 2:
              printf("you selected bbb movie\n");
              second_movie();
              break;
             case 3:
              printf("you selected aaa movie\n");
              third_movie();
              break;
              case 4:
               printf("you selected aaa movie\n");
               upcoming_movie();
               break;
              case 5:
              printf("....................terminated successfully...... thank you for visiting............!\n");
               break;
        }
   
    if(task==5)
    {
        printf("terminated\n");
        break;
    }
   
    }
    }
   
    return 0;
}
