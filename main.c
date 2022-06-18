//Program to Store the details of the Student

#include<stdio.h>
#include <stdlib.h>

void get_details(char *first_name[255], char *last_name[255], char *reg_no[255], char *branch[255], char *sec[5]){
    

    printf("Enter the first name: \n");
    scanf("%s", first_name);
    printf("Enter the last name: \n");
    scanf("%s", last_name);
    printf("Enter the reg no: \n");
    scanf("%s", reg_no);
    printf("Enter the branch: \n");
    scanf("%s", branch);
    printf("Enter the section: \n");
    scanf("%s", sec);
    

    

}

int main(){
    FILE *stud_file;
    char first_name[255], last_name[255], branch[255], sec[5], reg_no[255];
    int resp;
    
    get_details(&first_name, &last_name, &reg_no, &branch, &sec);

    printf("%s %s, %s, %s, %s \n", first_name, last_name, reg_no, branch, sec);
    
    printf("Press 1 to CONFIRM \n");

    scanf("%d", &resp);

    printf("%d, %d", resp == 1, resp);

    if(resp == 1){
        stud_file = fopen("C:\\details.txt", "w");


        fprintf(stud_file, "%s %s, %s, %s, %s", first_name, last_name, reg_no, branch, sec);
    }



    return 0;

}
