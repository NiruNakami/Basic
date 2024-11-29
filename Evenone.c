#include <stdio.h>
#include <stdlib.h>

// ຂ້ອຍຈະອະທີບາຍກຽວກັບພາສານີດດຽວເພືອຄົນມາອ່ານລະບໍ່ເຂົ້າໃຈ
// Object = ແມ່ນການເກັບຂໍມູມແບບຫຼາຍອັນແຕ່ມີຊື່ເອີນແຕ່ອັນດຽວ
//  ຕົວຢ່າງ ຫ້ອງຮຽນຄອນ {ໂຕະ , ກະດານ ,ຕັ້ງ ,ຄອນ ແລະ ອີ້ນໆ -- ສິ່ງທີ່ຢູ່ໃນນີ້ທັງໜົດເອີ້ນວ່າ object -- } ແຕ່ສິ່ງທີ່ເຮົາຈະບອກຄົນອີ່ນນີ້ແມ່ນຫ້ອງຮຽນຄອນ ເຮົາຈະບໍ່ເອົາອັນທີ່ຢໍູໃນຫ້ອງມາບອກຄົນອີ້ນ 

// ໃນຄຳອະທິບາຍສ່ວນຫຼາຍຈະເປັນອັງກິດ ເພາະມັນເປັນສັບຂອງມັນສະເພາະມັນບໍ່ຄວດແປກມາເປັນລາວ ມັນຈະຍາກ ແຕ່ອັນສຳຄັນຂ້ອຍໄດ້ອະທິບາຍໃຫ້ຢູ່່່່ ຸ  ຖ້າບໍ່ເຂົ້າໃຈ ແມ່ນຂໍໂທດເດີ
int main(){
    int amount;
    int totalCost = 0; // Total cost of all items
    int List;
    int Currency;
    char continueShopping;

    // Structure to hold item details
    // struct ແມ່ນການເກັບຂໍມູມແບບ Object  
    struct Item
    {
        char name[20];
        int quantity;
        int price;
        int total;
        char currency[5];
    };

    struct Item items[10]; // Array to hold up to 10 items Or ແມ່ນຄ່າທີ່ກຳນົດວ່າເຮົາຈະເກັບເຄື່ອງໄດ້ເທົ່າໃດ 10 items
    int itemCount = 0;      // Keep track of the number of items selected

    // Currency total variables
    int totalLaos = 0;
    int totalThai = 0;
    int totalUSD = 0;

    // Start a loop to allow multiple purchases
    do
    {
        // Ask the user to choose the currency

        printf("\n--- Please write the Currency you use ---\n");

        printf("\nCurrency Laos your Enter 1\n");
        printf("\nCurrency Thai your Enter 2\n");
        printf("\nCurrency USD  your Enter 3\n");
        printf("\n Enter Currency : ");

        while (scanf("%d", &Currency) != 1)
        {

            printf("Invalid input. Please enter a valid integer for currency: ");
            while (getchar() != '\n')
                ; // Clear the buffer or ແມ່ນການກວດສອບວ່າຕົງບໍ່ and ຖ້າບໍ່ຕົງຈະມີການລ້າງຄ່າ and ທຳຊ້ຳ
        }

        if (Currency > 0 && Currency <= 3)
        {
            // Display the corresponding menu based on the selected currency
            if (Currency == 1)
            { // Currency Laos (Kip)
                printf("\n--- Laos Currency (Kip) ---\n");
                printf("\nPepsi your Enter 1\n");
                printf("EGG   your Enter 2\n");
                printf("Milk  your Enter 3\n");
                printf("Honey your Enter 4\n");
            }
            else if (Currency == 2)
            { // Currency Thai (Baht)
                printf("\n--- Thai Currency (Baht) ---\n");
                printf("\nPepsi your Enter 1\n");
                printf("EGG   your Enter 2\n");
                printf("Milk  your Enter 3\n");
                printf("Honey your Enter 4\n");
            }
            else if (Currency == 3)
            { // Currency USD (Dollar)
                printf("\n--- USD Currency (USD) ---\n");
                printf("\nPepsi your Enter 1\n");
                printf("EGG   your Enter 2\n");
                printf("Milk  your Enter 3\n");
                printf("Honey your Enter 4\n");
            }

            // Get the user's item choice
            printf("\nEnter your choice: ");
            while (scanf("%d", &List) != 1 || List < 1 || List > 4)
            {
                printf("Invalid input. Please enter a valid choice (1-4): ");
                while (getchar() != '\n')
                    ; // Clear the buffer
            }

            // Process the item based on currency and choice
            if (Currency == 1)
            { // Currency Laos (Kip)
                if (List == 1)
                {
                    float total = amount * 10000;
                    printf("\n--- Your selection is Pepsi ---\n");
                    printf( "\n--- 10000 Kip  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Pepsi : %d ---\n",amount);
                    printf("\n--- %2.f ---\n", total );
                    
                    totalLaos += 10000 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Pepsi", amount, 10000, 10000 * amount, "Kip"};
                }
                else if (List == 2)

                {
                    float total = amount * 5000;
                    printf("\n--- Your selection is EGG ---\n");
                    printf( "\n--- 5000 Kip  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Egg : %d ---\n",amount);
                    printf("\n--- %2.f ---\n", total );
                    totalLaos += 5000 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"EGG", amount, 5000, 5000 * amount, "Kip"};
                }
                else if (List == 3)
                {
                    float total = amount * 5000;
                    printf("\n--- Your selection is Milk ---\n");
                    printf( "\n--- 5000 Kip  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Milk : %d ---\n",amount);
                    printf("\n--- %2.f ---\n", total );
                    totalLaos += 5000 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Milk", amount, 5000, 5000 * amount, "Kip"};
                }
                else if (List == 4)
                {
                    float total = amount * 5000;
                    printf("\n--- Your selection is Honey ---\n");
                    printf( "\n--- 5000 Kip   ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Egg : %d ---\n",amount);
                    printf("\n--- %2.f ---\n", total );
                    totalLaos += 5000 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Honey", amount, 5000, 5000 * amount, "Kip"};
                }
            }
            else if (Currency == 2)
            { // Currency Thai (Baht)
                if (List == 1)
                {
                    float total = amount * 16;
                    printf("\n--- Your selection is Pepsi ---\n");
                    printf( "\n--- 16 Baht ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Egg : %d ---\n",amount);
                    printf("\n--- %2.f Baht ---\n", total );
                    totalThai += 16 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Pepsi", amount, 16, 16 * amount, "Baht"};
                }
                else if (List == 2)
                {
                    float total = amount * 5;
                    printf("\n--- Your selection is EGG ---\n");
                    printf( "\n--- 5 Baht ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- \nYour choose Egg : %d ---\n",amount);
                    printf("\n--- \n%2.f Baht ---\n", total );
                    totalThai += 5 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"EGG", amount, 5, 5 * amount, "Baht"};
                }
                else if (List == 3)
                {
                    float total = amount * 12;
                    printf("\n--- Your selection is Milk ---\n");
                    printf( "\n--- 12 Baht ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- \nYour choose Egg : %d ---\n",amount);
                    printf("\n--- %2.f Baht ---\n", total );
                    totalThai += 12 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Milk", amount, 12, 12 * amount, "Baht"};
                }
                else if (List == 4)
                {
                    float total = amount * 80;
                    printf("\n--- Your selection is Honey ---\n");
                    printf( "\n--- 80 Baht ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- \nYour choose Egg : %d ---\n",amount);
                    printf("\n--- \n%2.f Baht ---\n", total );
                    totalThai += 80 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Honey", amount, 80, 80 * amount, "Baht"};
                }
            }
            else if (Currency == 3)
            { // Currency USD (Dollar)
                if (List == 1)
                {
                    float total = amount * 2;
                    printf("\n--- Your selection is Pepsi ---\n");
                    printf( "\n--- 2 USD  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Pepsi : %d ---\n",amount);
                    printf("\n--- %2.f USD ---\n", total );
                    totalUSD += 2 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Pepsi", amount, 2, 2 * amount, "USD"};
                }
                else if (List == 2)
                {
                    float total = amount * 1;
                    printf("\n--- Your selection is EGG ---\n");
                    printf( "\n--- 1 USD ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose EGG : %d ---\n",amount);
                    printf("\n--- %2.f USD ---\n", total );
                    totalUSD += 1 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"EGG", amount, 1, 1 * amount, "USD"};
                }
                else if (List == 3)
                {
                    float total = amount * 2;
                    printf("\n--- Your selection is Milk ---\n");
                    printf( "\n--- 2 USD  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Milk : %d ---\n",amount);
                    printf("\n--- %2.f USD ---\n", total );
                    totalUSD += 2 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Milk", amount, 2, 2 * amount, "USD"};
                }
                else if (List == 4)
                {
                    float total = amount * 10;
                    printf("\n--- Your selection is Honey ---\n");
                    printf( "\n--- 10 USD  ---\n" );
                    printf("\n Enter amount: ");
                    scanf("%d", &amount);
                    printf("\n--- Your choose Honey : %d ---\n",amount);
                    printf("\n--- %2.f USD ---\n", total );
                    totalUSD += 10 * amount;
                    // before itemCount[0]++ after itemcount[1] after the  values are added, the date is stored in item.
                    // ມັນຈະທຳການ ບວກຄ່າຈາກ itemCount[0] ຈະກາຍເປັນ itemCuont[1] ແມ່ນການເກັບຄ່າແບບ Object 
                    // itemCount[1] ຈະເກັບ {Name , Amount , price ,total , currency }
                    // ເມືອມີການຊື້ອີກ itemCount[2] ຈະກາຍເປັນ 2 {ເກັບຄ່າແບບເກົ່າ}
                    items[itemCount++] = (struct Item){"Honey", amount, 10, 10 * amount, "USD"};
                }
            }

            // Ask the user if they want to continue shopping
            printf("\nDo you want to continue shopping? ( Y / N ): ");
            while (getchar() != '\n');      // Clear the buffer from previous input
            scanf("%c", &continueShopping); // Read user's response
        }
        else
        {
            // If the user entered invalid currency
            printf("Please enter a valid currency (1, 2, or 3).\n");
            continueShopping = 'y'; // Allow the user to try again
        }

    } while (continueShopping == 'y' || continueShopping == 'Y'); // Loop if user wants to continue

    // Display a summary of all selected items and the total cost
    printf("\n--- Summary of Your Purchases ---\n");
    for (int i = 0; i < itemCount; i++)
    {
        printf("%s: %d units, Total: %d %s\n", items[i].name, items[i].quantity, items[i].total, items[i].currency);
        // Retrieve values from object or item[ໃນວົງຂໍແມ່ນການກຳນົດວ່າຈະດີ່ງຂໍມູມຈາກ item ] ແມ່ນການດິ່ງຄ່າມາຈາກ Struct 
    }

    // Display total cost for each currency
    printf("\n--- Total by Currency ---\n");
    printf("Total in Laos : %d Kip\n", totalLaos);
    printf("Total in Thai : %d Baht\n", totalThai);
    printf("Total in : %d USD\n", totalUSD);
}