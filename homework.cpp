#include<stdio.h>
int main()
{
    int cmpe=0, phys=0, hist=0, grade=0; 
    float gpa=0;
    int selection=0;
    
    while(1)
    {
        printf("------GRADES------\n");
        printf("1-CMPE114: %d (%p)\n", cmpe, &cmpe);
        printf("2-PHYS102: %d (%p)\n", phys, &phys);
        printf("3-HIST201: %d (%p)\n", hist, &hist);
        printf("----------------------\n");
        printf("Your GPA is %.1f/4.0\n", gpa);
        printf("----------------------\n");

        printf("1-Edit class grade\n");
        printf("2-Clear grade\n");
        printf("3-Quit\n");
        printf("Enter selection:\n");
        scanf("%d", &selection);

        if(selection == 3){
            printf("Good Bye\n");
            return 0;
        }
        else{
            switch(selection){
                case 1:
                    printf("Enter a class number to edit(1-3): ");
                    scanf("%d", &selection);
                    
                    switch(selection){
                        case 1:
                            printf("Enter grade for class 1: ");
                            scanf("%d", &grade);
                            cmpe = grade;
                            break;
                        case 2:
                            printf("Enter grade for class 2: ");
                            scanf("%d", &grade);
                            phys = grade;
                            break;
                        case 3:
                            printf("Enter grade for class 3: ");
                            scanf("%d", &grade);
                            hist = grade;
                            break;
                        default:
                            printf("Invalid class selection.\n");
                            break;
                    }
                    break;
                case 2:
                    cmpe = 0;
                    phys = 0;
                    hist = 0;
                    printf("Grades cleared.\n");
                    break;
                default:
                    printf("Invalid selection.\n");
                    break;
            }
            
            gpa = ((float)(cmpe + phys + hist) / 75.0) ;
        }
    }

    
}

