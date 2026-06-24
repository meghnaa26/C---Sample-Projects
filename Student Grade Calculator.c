#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int student_id;
    char name[20];
    int  number_of_subjects;
    float marks, total=0, percentage;
    
    
    printf("Enter the student ID number : ");
    scanf("%d", &student_id);
    
    printf("Enter the student name:  ");
    scanf("%19s", name);
    
    printf("Enter the number of subjects: ");
    scanf("%d", &number_of_subjects);
    
    
    if(number_of_subjects <= 0) {
        
        printf("Number of subjects must be greater than 0.\n");
        return 1;
        
    }else {
        
        for(int i =1; i<=  number_of_subjects; i++) {
            
            printf("Enter the mark of subject %d: ",i);
            scanf("%f", &marks);
        
            total += marks;
        }
        
        
        percentage = (total / (number_of_subjects *100)) * 100 ;
    
    
        printf("\nStudent ID: %d\n", student_id);
        printf("Student Name: %s\n", name);
        printf("Total percentage is %.2f%%\n",percentage);
        
    
        if(percentage >= 90) {
            printf("Grade is A\n");
            printf("PASSED!");
        }
        else if(percentage >= 80 && percentage < 90) {
            printf("Grade is B\n");
            printf("PASSED!");
        }
        else if(percentage >= 70 && percentage < 80) {
            printf("Grade is C\n");
            printf("PASSED!");
        }
        else if(percentage >= 60 && percentage < 70) {
            printf("Grade is D\n");
            printf("PASSED!");
        }
        else{
            printf("Grade is E\n");
            printf("FAILED!");
        }
    
    }
    
    return 0;
}
