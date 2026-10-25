#include <stdio.h>

int main()
{
    int choice;
    float voltage, current, resistance;

    printf("\n===== ELECTRONICS TOOLKIT =====\n");
    printf("1. Calculate Voltage\n");
    printf("2. Calculate Current\n");
    printf("3. Calculate Resistance\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter current (A): ");
            scanf("%f", &current);

            printf("Enter resistance (Ohms): ");
            scanf("%f", &resistance);

            voltage = current * resistance;

            printf("Voltage = %.2f V\n", voltage);
            break;

        case 2:
            printf("Enter voltage (V): ");
            scanf("%f", &voltage);

            printf("Enter resistance (Ohms): ");
            scanf("%f", &resistance);

            if (resistance != 0)
            {
                current = voltage / resistance;
                printf("Current = %.2f A\n", current);
            }
            else
            {
                printf("Resistance cannot be zero!\n");
            }
            break;

        case 3:
            printf("Enter voltage (V): ");
            scanf("%f", &voltage);

            printf("Enter current (A): ");
            scanf("%f", &current);

            if (current != 0)
            {
                resistance = voltage / current;
                printf("Resistance = %.2f Ohms\n", resistance);
            }
            else
            {
                printf("Current cannot be zero!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}